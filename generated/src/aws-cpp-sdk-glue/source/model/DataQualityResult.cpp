﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataQualityResult::DataQualityResult(JsonView jsonValue)
{
  *this = jsonValue;
}

DataQualityResult& DataQualityResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultId"))
  {
    m_resultId = jsonValue.GetString("ResultId");
    m_resultIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProfileId"))
  {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");
    m_scoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");
    m_dataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RulesetName"))
  {
    m_rulesetName = jsonValue.GetString("RulesetName");
    m_rulesetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationContext"))
  {
    m_evaluationContext = jsonValue.GetString("EvaluationContext");
    m_evaluationContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartedOn"))
  {
    m_startedOn = jsonValue.GetDouble("StartedOn");
    m_startedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CompletedOn"))
  {
    m_completedOn = jsonValue.GetDouble("CompletedOn");
    m_completedOnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobName"))
  {
    m_jobName = jsonValue.GetString("JobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobRunId"))
  {
    m_jobRunId = jsonValue.GetString("JobRunId");
    m_jobRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RulesetEvaluationRunId"))
  {
    m_rulesetEvaluationRunId = jsonValue.GetString("RulesetEvaluationRunId");
    m_rulesetEvaluationRunIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuleResults"))
  {
    Aws::Utils::Array<JsonView> ruleResultsJsonList = jsonValue.GetArray("RuleResults");
    for(unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex)
    {
      m_ruleResults.push_back(ruleResultsJsonList[ruleResultsIndex].AsObject());
    }
    m_ruleResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AnalyzerResults"))
  {
    Aws::Utils::Array<JsonView> analyzerResultsJsonList = jsonValue.GetArray("AnalyzerResults");
    for(unsigned analyzerResultsIndex = 0; analyzerResultsIndex < analyzerResultsJsonList.GetLength(); ++analyzerResultsIndex)
    {
      m_analyzerResults.push_back(analyzerResultsJsonList[analyzerResultsIndex].AsObject());
    }
    m_analyzerResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Observations"))
  {
    Aws::Utils::Array<JsonView> observationsJsonList = jsonValue.GetArray("Observations");
    for(unsigned observationsIndex = 0; observationsIndex < observationsJsonList.GetLength(); ++observationsIndex)
    {
      m_observations.push_back(observationsJsonList[observationsIndex].AsObject());
    }
    m_observationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AggregatedMetrics"))
  {
    m_aggregatedMetrics = jsonValue.GetObject("AggregatedMetrics");
    m_aggregatedMetricsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityResult::Jsonize() const
{
  JsonValue payload;

  if(m_resultIdHasBeenSet)
  {
   payload.WithString("ResultId", m_resultId);

  }

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_rulesetNameHasBeenSet)
  {
   payload.WithString("RulesetName", m_rulesetName);

  }

  if(m_evaluationContextHasBeenSet)
  {
   payload.WithString("EvaluationContext", m_evaluationContext);

  }

  if(m_startedOnHasBeenSet)
  {
   payload.WithDouble("StartedOn", m_startedOn.SecondsWithMSPrecision());
  }

  if(m_completedOnHasBeenSet)
  {
   payload.WithDouble("CompletedOn", m_completedOn.SecondsWithMSPrecision());
  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_jobRunIdHasBeenSet)
  {
   payload.WithString("JobRunId", m_jobRunId);

  }

  if(m_rulesetEvaluationRunIdHasBeenSet)
  {
   payload.WithString("RulesetEvaluationRunId", m_rulesetEvaluationRunId);

  }

  if(m_ruleResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleResultsJsonList(m_ruleResults.size());
   for(unsigned ruleResultsIndex = 0; ruleResultsIndex < ruleResultsJsonList.GetLength(); ++ruleResultsIndex)
   {
     ruleResultsJsonList[ruleResultsIndex].AsObject(m_ruleResults[ruleResultsIndex].Jsonize());
   }
   payload.WithArray("RuleResults", std::move(ruleResultsJsonList));

  }

  if(m_analyzerResultsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> analyzerResultsJsonList(m_analyzerResults.size());
   for(unsigned analyzerResultsIndex = 0; analyzerResultsIndex < analyzerResultsJsonList.GetLength(); ++analyzerResultsIndex)
   {
     analyzerResultsJsonList[analyzerResultsIndex].AsObject(m_analyzerResults[analyzerResultsIndex].Jsonize());
   }
   payload.WithArray("AnalyzerResults", std::move(analyzerResultsJsonList));

  }

  if(m_observationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> observationsJsonList(m_observations.size());
   for(unsigned observationsIndex = 0; observationsIndex < observationsJsonList.GetLength(); ++observationsIndex)
   {
     observationsJsonList[observationsIndex].AsObject(m_observations[observationsIndex].Jsonize());
   }
   payload.WithArray("Observations", std::move(observationsJsonList));

  }

  if(m_aggregatedMetricsHasBeenSet)
  {
   payload.WithObject("AggregatedMetrics", m_aggregatedMetrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
