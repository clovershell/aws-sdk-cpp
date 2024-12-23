﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{
  enum class Dimension
  {
    NOT_SET,
    SavingsValue,
    SavingsValueAfterDiscount
  };

namespace DimensionMapper
{
AWS_COMPUTEOPTIMIZER_API Dimension GetDimensionForName(const Aws::String& name);

AWS_COMPUTEOPTIMIZER_API Aws::String GetNameForDimension(Dimension value);
} // namespace DimensionMapper
} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
