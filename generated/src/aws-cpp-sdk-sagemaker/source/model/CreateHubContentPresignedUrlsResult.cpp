﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateHubContentPresignedUrlsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateHubContentPresignedUrlsResult::CreateHubContentPresignedUrlsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateHubContentPresignedUrlsResult& CreateHubContentPresignedUrlsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthorizedUrlConfigs"))
  {
    Aws::Utils::Array<JsonView> authorizedUrlConfigsJsonList = jsonValue.GetArray("AuthorizedUrlConfigs");
    for(unsigned authorizedUrlConfigsIndex = 0; authorizedUrlConfigsIndex < authorizedUrlConfigsJsonList.GetLength(); ++authorizedUrlConfigsIndex)
    {
      m_authorizedUrlConfigs.push_back(authorizedUrlConfigsJsonList[authorizedUrlConfigsIndex].AsObject());
    }
    m_authorizedUrlConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
