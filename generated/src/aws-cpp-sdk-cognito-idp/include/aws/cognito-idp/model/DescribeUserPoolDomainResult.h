﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/DomainDescriptionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CognitoIdentityProvider
{
namespace Model
{
  class DescribeUserPoolDomainResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolDomainResult();
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API DescribeUserPoolDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the requested user pool domain.</p>
     */
    inline const DomainDescriptionType& GetDomainDescription() const{ return m_domainDescription; }
    inline void SetDomainDescription(const DomainDescriptionType& value) { m_domainDescription = value; }
    inline void SetDomainDescription(DomainDescriptionType&& value) { m_domainDescription = std::move(value); }
    inline DescribeUserPoolDomainResult& WithDomainDescription(const DomainDescriptionType& value) { SetDomainDescription(value); return *this;}
    inline DescribeUserPoolDomainResult& WithDomainDescription(DomainDescriptionType&& value) { SetDomainDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeUserPoolDomainResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeUserPoolDomainResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeUserPoolDomainResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DomainDescriptionType m_domainDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
