﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-quicksetup/SSMQuickSetup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-quicksetup/model/ConfigurationSummary.h>
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
namespace SSMQuickSetup
{
namespace Model
{
  class ListConfigurationsResult
  {
  public:
    AWS_SSMQUICKSETUP_API ListConfigurationsResult();
    AWS_SSMQUICKSETUP_API ListConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMQUICKSETUP_API ListConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of configurations.</p>
     */
    inline const Aws::Vector<ConfigurationSummary>& GetConfigurationsList() const{ return m_configurationsList; }
    inline void SetConfigurationsList(const Aws::Vector<ConfigurationSummary>& value) { m_configurationsList = value; }
    inline void SetConfigurationsList(Aws::Vector<ConfigurationSummary>&& value) { m_configurationsList = std::move(value); }
    inline ListConfigurationsResult& WithConfigurationsList(const Aws::Vector<ConfigurationSummary>& value) { SetConfigurationsList(value); return *this;}
    inline ListConfigurationsResult& WithConfigurationsList(Aws::Vector<ConfigurationSummary>&& value) { SetConfigurationsList(std::move(value)); return *this;}
    inline ListConfigurationsResult& AddConfigurationsList(const ConfigurationSummary& value) { m_configurationsList.push_back(value); return *this; }
    inline ListConfigurationsResult& AddConfigurationsList(ConfigurationSummary&& value) { m_configurationsList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationSummary> m_configurationsList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSMQuickSetup
} // namespace Aws
