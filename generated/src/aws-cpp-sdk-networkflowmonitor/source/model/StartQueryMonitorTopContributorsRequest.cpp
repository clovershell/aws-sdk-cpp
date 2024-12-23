﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkflowmonitor/model/StartQueryMonitorTopContributorsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkFlowMonitor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartQueryMonitorTopContributorsRequest::StartQueryMonitorTopContributorsRequest() : 
    m_monitorNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_metricName(MonitorMetric::NOT_SET),
    m_metricNameHasBeenSet(false),
    m_destinationCategory(DestinationCategory::NOT_SET),
    m_destinationCategoryHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false)
{
}

Aws::String StartQueryMonitorTopContributorsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_metricNameHasBeenSet)
  {
   payload.WithString("metricName", MonitorMetricMapper::GetNameForMonitorMetric(m_metricName));
  }

  if(m_destinationCategoryHasBeenSet)
  {
   payload.WithString("destinationCategory", DestinationCategoryMapper::GetNameForDestinationCategory(m_destinationCategory));
  }

  if(m_limitHasBeenSet)
  {
   payload.WithInteger("limit", m_limit);

  }

  return payload.View().WriteReadable();
}




