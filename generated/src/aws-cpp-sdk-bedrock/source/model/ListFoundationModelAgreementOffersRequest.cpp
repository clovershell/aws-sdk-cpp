﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListFoundationModelAgreementOffersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListFoundationModelAgreementOffersRequest::SerializePayload() const
{
  return {};
}

void ListFoundationModelAgreementOffersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_offerTypeHasBeenSet)
    {
      ss << OfferTypeMapper::GetNameForOfferType(m_offerType);
      uri.AddQueryStringParameter("offerType", ss.str());
      ss.str("");
    }

}



