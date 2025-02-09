﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyIntegrationResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

ModifyIntegrationResult::ModifyIntegrationResult() : 
    m_status(ZeroETLIntegrationStatus::NOT_SET)
{
}

ModifyIntegrationResult::ModifyIntegrationResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
  : ModifyIntegrationResult()
{
  *this = result;
}

ModifyIntegrationResult& ModifyIntegrationResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "ModifyIntegrationResult"))
  {
    resultNode = rootNode.FirstChild("ModifyIntegrationResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode integrationArnNode = resultNode.FirstChild("IntegrationArn");
    if(!integrationArnNode.IsNull())
    {
      m_integrationArn = Aws::Utils::Xml::DecodeEscapedXmlText(integrationArnNode.GetText());
    }
    XmlNode integrationNameNode = resultNode.FirstChild("IntegrationName");
    if(!integrationNameNode.IsNull())
    {
      m_integrationName = Aws::Utils::Xml::DecodeEscapedXmlText(integrationNameNode.GetText());
    }
    XmlNode sourceArnNode = resultNode.FirstChild("SourceArn");
    if(!sourceArnNode.IsNull())
    {
      m_sourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceArnNode.GetText());
    }
    XmlNode targetArnNode = resultNode.FirstChild("TargetArn");
    if(!targetArnNode.IsNull())
    {
      m_targetArn = Aws::Utils::Xml::DecodeEscapedXmlText(targetArnNode.GetText());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = ZeroETLIntegrationStatusMapper::GetZeroETLIntegrationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
    }
    XmlNode errorsNode = resultNode.FirstChild("Errors");
    if(!errorsNode.IsNull())
    {
      XmlNode errorsMember = errorsNode.FirstChild("IntegrationError");
      while(!errorsMember.IsNull())
      {
        m_errors.push_back(errorsMember);
        errorsMember = errorsMember.NextNode("IntegrationError");
      }

    }
    XmlNode createTimeNode = resultNode.FirstChild("CreateTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
    }
    XmlNode kMSKeyIdNode = resultNode.FirstChild("KMSKeyId");
    if(!kMSKeyIdNode.IsNull())
    {
      m_kMSKeyId = Aws::Utils::Xml::DecodeEscapedXmlText(kMSKeyIdNode.GetText());
    }
    XmlNode additionalEncryptionContextNode = resultNode.FirstChild("AdditionalEncryptionContext");

    if(!additionalEncryptionContextNode.IsNull())
    {
      XmlNode additionalEncryptionContextEntry = additionalEncryptionContextNode.FirstChild("entry");
      while(!additionalEncryptionContextEntry.IsNull())
      {
        XmlNode keyNode = additionalEncryptionContextEntry.FirstChild("key");
        XmlNode valueNode = additionalEncryptionContextEntry.FirstChild("value");
        m_additionalEncryptionContext[keyNode.GetText()] =
            valueNode.GetText();
        additionalEncryptionContextEntry = additionalEncryptionContextEntry.NextNode("entry");
      }

    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::Redshift::Model::ModifyIntegrationResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
