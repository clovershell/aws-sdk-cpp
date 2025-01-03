﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/InstanceSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class ListInstancesResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListInstancesResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>InstanceSummary</code> resources that contain details about
     * the instances that provide user-based subscriptions and also meet the request
     * criteria.</p>
     */
    inline const Aws::Vector<InstanceSummary>& GetInstanceSummaries() const{ return m_instanceSummaries; }
    inline void SetInstanceSummaries(const Aws::Vector<InstanceSummary>& value) { m_instanceSummaries = value; }
    inline void SetInstanceSummaries(Aws::Vector<InstanceSummary>&& value) { m_instanceSummaries = std::move(value); }
    inline ListInstancesResult& WithInstanceSummaries(const Aws::Vector<InstanceSummary>& value) { SetInstanceSummaries(value); return *this;}
    inline ListInstancesResult& WithInstanceSummaries(Aws::Vector<InstanceSummary>&& value) { SetInstanceSummaries(std::move(value)); return *this;}
    inline ListInstancesResult& AddInstanceSummaries(const InstanceSummary& value) { m_instanceSummaries.push_back(value); return *this; }
    inline ListInstancesResult& AddInstanceSummaries(InstanceSummary&& value) { m_instanceSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInstancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInstancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInstancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceSummary> m_instanceSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
