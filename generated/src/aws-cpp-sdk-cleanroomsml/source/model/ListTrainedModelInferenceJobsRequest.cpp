﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ListTrainedModelInferenceJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListTrainedModelInferenceJobsRequest::SerializePayload() const
{
  return {};
}

void ListTrainedModelInferenceJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_trainedModelArnHasBeenSet)
    {
      ss << m_trainedModelArn;
      uri.AddQueryStringParameter("trainedModelArn", ss.str());
      ss.str("");
    }

    if(m_trainedModelVersionIdentifierHasBeenSet)
    {
      ss << m_trainedModelVersionIdentifier;
      uri.AddQueryStringParameter("trainedModelVersionIdentifier", ss.str());
      ss.str("");
    }

}



