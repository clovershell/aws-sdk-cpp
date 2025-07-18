﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PaymentCryptography
{
namespace Model
{
  enum class KeyAlgorithm
  {
    NOT_SET,
    TDES_2KEY,
    TDES_3KEY,
    AES_128,
    AES_192,
    AES_256,
    HMAC_SHA256,
    HMAC_SHA384,
    HMAC_SHA512,
    HMAC_SHA224,
    RSA_2048,
    RSA_3072,
    RSA_4096,
    ECC_NIST_P256,
    ECC_NIST_P384,
    ECC_NIST_P521
  };

namespace KeyAlgorithmMapper
{
AWS_PAYMENTCRYPTOGRAPHY_API KeyAlgorithm GetKeyAlgorithmForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForKeyAlgorithm(KeyAlgorithm value);
} // namespace KeyAlgorithmMapper
} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
