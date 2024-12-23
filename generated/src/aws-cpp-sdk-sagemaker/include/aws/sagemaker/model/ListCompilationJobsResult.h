﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CompilationJobSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListCompilationJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListCompilationJobsResult();
    AWS_SAGEMAKER_API ListCompilationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListCompilationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CompilationJobSummary.html">CompilationJobSummary</a>
     * objects, each describing a model compilation job. </p>
     */
    inline const Aws::Vector<CompilationJobSummary>& GetCompilationJobSummaries() const{ return m_compilationJobSummaries; }
    inline void SetCompilationJobSummaries(const Aws::Vector<CompilationJobSummary>& value) { m_compilationJobSummaries = value; }
    inline void SetCompilationJobSummaries(Aws::Vector<CompilationJobSummary>&& value) { m_compilationJobSummaries = std::move(value); }
    inline ListCompilationJobsResult& WithCompilationJobSummaries(const Aws::Vector<CompilationJobSummary>& value) { SetCompilationJobSummaries(value); return *this;}
    inline ListCompilationJobsResult& WithCompilationJobSummaries(Aws::Vector<CompilationJobSummary>&& value) { SetCompilationJobSummaries(std::move(value)); return *this;}
    inline ListCompilationJobsResult& AddCompilationJobSummaries(const CompilationJobSummary& value) { m_compilationJobSummaries.push_back(value); return *this; }
    inline ListCompilationJobsResult& AddCompilationJobSummaries(CompilationJobSummary&& value) { m_compilationJobSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon SageMaker AI returns this
     * <code>NextToken</code>. To retrieve the next set of model compilation jobs, use
     * this token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCompilationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCompilationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCompilationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCompilationJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCompilationJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCompilationJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CompilationJobSummary> m_compilationJobSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
