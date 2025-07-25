﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityBlockOffering.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

CapacityBlockOffering::CapacityBlockOffering(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

CapacityBlockOffering& CapacityBlockOffering::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityBlockOfferingIdNode = resultNode.FirstChild("capacityBlockOfferingId");
    if(!capacityBlockOfferingIdNode.IsNull())
    {
      m_capacityBlockOfferingId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockOfferingIdNode.GetText());
      m_capacityBlockOfferingIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode instanceCountNode = resultNode.FirstChild("instanceCount");
    if(!instanceCountNode.IsNull())
    {
      m_instanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceCountNode.GetText()).c_str()).c_str());
      m_instanceCountHasBeenSet = true;
    }
    XmlNode startDateNode = resultNode.FirstChild("startDate");
    if(!startDateNode.IsNull())
    {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("endDate");
    if(!endDateNode.IsNull())
    {
      m_endDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode capacityBlockDurationHoursNode = resultNode.FirstChild("capacityBlockDurationHours");
    if(!capacityBlockDurationHoursNode.IsNull())
    {
      m_capacityBlockDurationHours = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockDurationHoursNode.GetText()).c_str()).c_str());
      m_capacityBlockDurationHoursHasBeenSet = true;
    }
    XmlNode upfrontFeeNode = resultNode.FirstChild("upfrontFee");
    if(!upfrontFeeNode.IsNull())
    {
      m_upfrontFee = Aws::Utils::Xml::DecodeEscapedXmlText(upfrontFeeNode.GetText());
      m_upfrontFeeHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("currencyCode");
    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = Aws::Utils::Xml::DecodeEscapedXmlText(currencyCodeNode.GetText());
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("tenancy");
    if(!tenancyNode.IsNull())
    {
      m_tenancy = CapacityReservationTenancyMapper::GetCapacityReservationTenancyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tenancyNode.GetText()).c_str()));
      m_tenancyHasBeenSet = true;
    }
    XmlNode ultraserverTypeNode = resultNode.FirstChild("ultraserverType");
    if(!ultraserverTypeNode.IsNull())
    {
      m_ultraserverType = Aws::Utils::Xml::DecodeEscapedXmlText(ultraserverTypeNode.GetText());
      m_ultraserverTypeHasBeenSet = true;
    }
    XmlNode ultraserverCountNode = resultNode.FirstChild("ultraserverCount");
    if(!ultraserverCountNode.IsNull())
    {
      m_ultraserverCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ultraserverCountNode.GetText()).c_str()).c_str());
      m_ultraserverCountHasBeenSet = true;
    }
    XmlNode capacityBlockDurationMinutesNode = resultNode.FirstChild("capacityBlockDurationMinutes");
    if(!capacityBlockDurationMinutesNode.IsNull())
    {
      m_capacityBlockDurationMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockDurationMinutesNode.GetText()).c_str()).c_str());
      m_capacityBlockDurationMinutesHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityBlockOffering::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityBlockOfferingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockOfferingId=" << StringUtils::URLEncode(m_capacityBlockOfferingId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_instanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceCount=" << m_instanceCount << "&";
  }

  if(m_startDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_capacityBlockDurationHoursHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockDurationHours=" << m_capacityBlockDurationHours << "&";
  }

  if(m_upfrontFeeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UpfrontFee=" << StringUtils::URLEncode(m_upfrontFee.c_str()) << "&";
  }

  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Tenancy=" << StringUtils::URLEncode(CapacityReservationTenancyMapper::GetNameForCapacityReservationTenancy(m_tenancy)) << "&";
  }

  if(m_ultraserverTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UltraserverType=" << StringUtils::URLEncode(m_ultraserverType.c_str()) << "&";
  }

  if(m_ultraserverCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".UltraserverCount=" << m_ultraserverCount << "&";
  }

  if(m_capacityBlockDurationMinutesHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockDurationMinutes=" << m_capacityBlockDurationMinutes << "&";
  }

}

void CapacityBlockOffering::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityBlockOfferingIdHasBeenSet)
  {
      oStream << location << ".CapacityBlockOfferingId=" << StringUtils::URLEncode(m_capacityBlockOfferingId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_instanceCountHasBeenSet)
  {
      oStream << location << ".InstanceCount=" << m_instanceCount << "&";
  }
  if(m_startDateHasBeenSet)
  {
      oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endDateHasBeenSet)
  {
      oStream << location << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_capacityBlockDurationHoursHasBeenSet)
  {
      oStream << location << ".CapacityBlockDurationHours=" << m_capacityBlockDurationHours << "&";
  }
  if(m_upfrontFeeHasBeenSet)
  {
      oStream << location << ".UpfrontFee=" << StringUtils::URLEncode(m_upfrontFee.c_str()) << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }
  if(m_tenancyHasBeenSet)
  {
      oStream << location << ".Tenancy=" << StringUtils::URLEncode(CapacityReservationTenancyMapper::GetNameForCapacityReservationTenancy(m_tenancy)) << "&";
  }
  if(m_ultraserverTypeHasBeenSet)
  {
      oStream << location << ".UltraserverType=" << StringUtils::URLEncode(m_ultraserverType.c_str()) << "&";
  }
  if(m_ultraserverCountHasBeenSet)
  {
      oStream << location << ".UltraserverCount=" << m_ultraserverCount << "&";
  }
  if(m_capacityBlockDurationMinutesHasBeenSet)
  {
      oStream << location << ".CapacityBlockDurationMinutes=" << m_capacityBlockDurationMinutes << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
