﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/AutomationStreamStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCore
  {
    namespace Model
    {
      namespace AutomationStreamStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AutomationStreamStatus GetAutomationStreamStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AutomationStreamStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AutomationStreamStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationStreamStatus>(hashCode);
          }

          return AutomationStreamStatus::NOT_SET;
        }

        Aws::String GetNameForAutomationStreamStatus(AutomationStreamStatus enumValue)
        {
          switch(enumValue)
          {
          case AutomationStreamStatus::NOT_SET:
            return {};
          case AutomationStreamStatus::ENABLED:
            return "ENABLED";
          case AutomationStreamStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationStreamStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
