﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetLogObjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetLogObjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_unmaskHasBeenSet)
  {
   payload.WithBool("unmask", m_unmask);

  }

  if(m_logObjectPointerHasBeenSet)
  {
   payload.WithString("logObjectPointer", m_logObjectPointer);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLogObjectRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Logs_20140328.GetLogObject"));
  return headers;

}




