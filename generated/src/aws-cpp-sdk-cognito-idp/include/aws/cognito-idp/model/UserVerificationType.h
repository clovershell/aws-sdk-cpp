﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{
  enum class UserVerificationType
  {
    NOT_SET,
    required,
    preferred
  };

namespace UserVerificationTypeMapper
{
AWS_COGNITOIDENTITYPROVIDER_API UserVerificationType GetUserVerificationTypeForName(const Aws::String& name);

AWS_COGNITOIDENTITYPROVIDER_API Aws::String GetNameForUserVerificationType(UserVerificationType value);
} // namespace UserVerificationTypeMapper
} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
