/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ClusterImageVersionStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ClusterImageVersionStatusMapper {

static const int UpToDate_HASH = HashingUtils::HashString("UpToDate");
static const int UpdateAvailable_HASH = HashingUtils::HashString("UpdateAvailable");

ClusterImageVersionStatus GetClusterImageVersionStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UpToDate_HASH) {
    return ClusterImageVersionStatus::UpToDate;
  } else if (hashCode == UpdateAvailable_HASH) {
    return ClusterImageVersionStatus::UpdateAvailable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ClusterImageVersionStatus>(hashCode);
  }

  return ClusterImageVersionStatus::NOT_SET;
}

Aws::String GetNameForClusterImageVersionStatus(ClusterImageVersionStatus enumValue) {
  switch (enumValue) {
    case ClusterImageVersionStatus::NOT_SET:
      return {};
    case ClusterImageVersionStatus::UpToDate:
      return "UpToDate";
    case ClusterImageVersionStatus::UpdateAvailable:
      return "UpdateAvailable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ClusterImageVersionStatusMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
