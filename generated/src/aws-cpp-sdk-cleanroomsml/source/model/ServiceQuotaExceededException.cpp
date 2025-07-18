﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ServiceQuotaExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

ServiceQuotaExceededException::ServiceQuotaExceededException(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceQuotaExceededException& ServiceQuotaExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quotaName"))
  {
    m_quotaName = jsonValue.GetString("quotaName");
    m_quotaNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("quotaValue"))
  {
    m_quotaValue = jsonValue.GetDouble("quotaValue");
    m_quotaValueHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceQuotaExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_quotaNameHasBeenSet)
  {
   payload.WithString("quotaName", m_quotaName);

  }

  if(m_quotaValueHasBeenSet)
  {
   payload.WithDouble("quotaValue", m_quotaValue);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
