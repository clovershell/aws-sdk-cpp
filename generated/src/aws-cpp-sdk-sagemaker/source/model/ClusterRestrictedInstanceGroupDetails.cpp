﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterRestrictedInstanceGroupDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

ClusterRestrictedInstanceGroupDetails::ClusterRestrictedInstanceGroupDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterRestrictedInstanceGroupDetails& ClusterRestrictedInstanceGroupDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CurrentCount"))
  {
    m_currentCount = jsonValue.GetInteger("CurrentCount");
    m_currentCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetCount"))
  {
    m_targetCount = jsonValue.GetInteger("TargetCount");
    m_targetCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceGroupName"))
  {
    m_instanceGroupName = jsonValue.GetString("InstanceGroupName");
    m_instanceGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ClusterInstanceTypeMapper::GetClusterInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExecutionRole"))
  {
    m_executionRole = jsonValue.GetString("ExecutionRole");
    m_executionRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ThreadsPerCore"))
  {
    m_threadsPerCore = jsonValue.GetInteger("ThreadsPerCore");
    m_threadsPerCoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InstanceStorageConfigs"))
  {
    Aws::Utils::Array<JsonView> instanceStorageConfigsJsonList = jsonValue.GetArray("InstanceStorageConfigs");
    for(unsigned instanceStorageConfigsIndex = 0; instanceStorageConfigsIndex < instanceStorageConfigsJsonList.GetLength(); ++instanceStorageConfigsIndex)
    {
      m_instanceStorageConfigs.push_back(instanceStorageConfigsJsonList[instanceStorageConfigsIndex].AsObject());
    }
    m_instanceStorageConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OnStartDeepHealthChecks"))
  {
    Aws::Utils::Array<JsonView> onStartDeepHealthChecksJsonList = jsonValue.GetArray("OnStartDeepHealthChecks");
    for(unsigned onStartDeepHealthChecksIndex = 0; onStartDeepHealthChecksIndex < onStartDeepHealthChecksJsonList.GetLength(); ++onStartDeepHealthChecksIndex)
    {
      m_onStartDeepHealthChecks.push_back(DeepHealthCheckTypeMapper::GetDeepHealthCheckTypeForName(onStartDeepHealthChecksJsonList[onStartDeepHealthChecksIndex].AsString()));
    }
    m_onStartDeepHealthChecksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = InstanceGroupStatusMapper::GetInstanceGroupStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingPlanArn"))
  {
    m_trainingPlanArn = jsonValue.GetString("TrainingPlanArn");
    m_trainingPlanArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingPlanStatus"))
  {
    m_trainingPlanStatus = jsonValue.GetString("TrainingPlanStatus");
    m_trainingPlanStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OverrideVpcConfig"))
  {
    m_overrideVpcConfig = jsonValue.GetObject("OverrideVpcConfig");
    m_overrideVpcConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ScheduledUpdateConfig"))
  {
    m_scheduledUpdateConfig = jsonValue.GetObject("ScheduledUpdateConfig");
    m_scheduledUpdateConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnvironmentConfig"))
  {
    m_environmentConfig = jsonValue.GetObject("EnvironmentConfig");
    m_environmentConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterRestrictedInstanceGroupDetails::Jsonize() const
{
  JsonValue payload;

  if(m_currentCountHasBeenSet)
  {
   payload.WithInteger("CurrentCount", m_currentCount);

  }

  if(m_targetCountHasBeenSet)
  {
   payload.WithInteger("TargetCount", m_targetCount);

  }

  if(m_instanceGroupNameHasBeenSet)
  {
   payload.WithString("InstanceGroupName", m_instanceGroupName);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ClusterInstanceTypeMapper::GetNameForClusterInstanceType(m_instanceType));
  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("ExecutionRole", m_executionRole);

  }

  if(m_threadsPerCoreHasBeenSet)
  {
   payload.WithInteger("ThreadsPerCore", m_threadsPerCore);

  }

  if(m_instanceStorageConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceStorageConfigsJsonList(m_instanceStorageConfigs.size());
   for(unsigned instanceStorageConfigsIndex = 0; instanceStorageConfigsIndex < instanceStorageConfigsJsonList.GetLength(); ++instanceStorageConfigsIndex)
   {
     instanceStorageConfigsJsonList[instanceStorageConfigsIndex].AsObject(m_instanceStorageConfigs[instanceStorageConfigsIndex].Jsonize());
   }
   payload.WithArray("InstanceStorageConfigs", std::move(instanceStorageConfigsJsonList));

  }

  if(m_onStartDeepHealthChecksHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> onStartDeepHealthChecksJsonList(m_onStartDeepHealthChecks.size());
   for(unsigned onStartDeepHealthChecksIndex = 0; onStartDeepHealthChecksIndex < onStartDeepHealthChecksJsonList.GetLength(); ++onStartDeepHealthChecksIndex)
   {
     onStartDeepHealthChecksJsonList[onStartDeepHealthChecksIndex].AsString(DeepHealthCheckTypeMapper::GetNameForDeepHealthCheckType(m_onStartDeepHealthChecks[onStartDeepHealthChecksIndex]));
   }
   payload.WithArray("OnStartDeepHealthChecks", std::move(onStartDeepHealthChecksJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", InstanceGroupStatusMapper::GetNameForInstanceGroupStatus(m_status));
  }

  if(m_trainingPlanArnHasBeenSet)
  {
   payload.WithString("TrainingPlanArn", m_trainingPlanArn);

  }

  if(m_trainingPlanStatusHasBeenSet)
  {
   payload.WithString("TrainingPlanStatus", m_trainingPlanStatus);

  }

  if(m_overrideVpcConfigHasBeenSet)
  {
   payload.WithObject("OverrideVpcConfig", m_overrideVpcConfig.Jsonize());

  }

  if(m_scheduledUpdateConfigHasBeenSet)
  {
   payload.WithObject("ScheduledUpdateConfig", m_scheduledUpdateConfig.Jsonize());

  }

  if(m_environmentConfigHasBeenSet)
  {
   payload.WithObject("EnvironmentConfig", m_environmentConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
