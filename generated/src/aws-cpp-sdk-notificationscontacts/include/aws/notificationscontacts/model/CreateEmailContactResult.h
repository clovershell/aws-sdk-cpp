﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notificationscontacts/NotificationsContacts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NotificationsContacts
{
namespace Model
{
  class CreateEmailContactResult
  {
  public:
    AWS_NOTIFICATIONSCONTACTS_API CreateEmailContactResult();
    AWS_NOTIFICATIONSCONTACTS_API CreateEmailContactResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONSCONTACTS_API CreateEmailContactResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateEmailContactResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateEmailContactResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateEmailContactResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateEmailContactResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateEmailContactResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateEmailContactResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NotificationsContacts
} // namespace Aws
