﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Glue
{
namespace Model
{
  enum class ConnectionPropertyKey
  {
    NOT_SET,
    HOST,
    PORT,
    USERNAME,
    PASSWORD,
    ENCRYPTED_PASSWORD,
    JDBC_DRIVER_JAR_URI,
    JDBC_DRIVER_CLASS_NAME,
    JDBC_ENGINE,
    JDBC_ENGINE_VERSION,
    CONFIG_FILES,
    INSTANCE_ID,
    JDBC_CONNECTION_URL,
    JDBC_ENFORCE_SSL,
    CUSTOM_JDBC_CERT,
    SKIP_CUSTOM_JDBC_CERT_VALIDATION,
    CUSTOM_JDBC_CERT_STRING,
    CONNECTION_URL,
    KAFKA_BOOTSTRAP_SERVERS,
    KAFKA_SSL_ENABLED,
    KAFKA_CUSTOM_CERT,
    KAFKA_SKIP_CUSTOM_CERT_VALIDATION,
    KAFKA_CLIENT_KEYSTORE,
    KAFKA_CLIENT_KEYSTORE_PASSWORD,
    KAFKA_CLIENT_KEY_PASSWORD,
    ENCRYPTED_KAFKA_CLIENT_KEYSTORE_PASSWORD,
    ENCRYPTED_KAFKA_CLIENT_KEY_PASSWORD,
    KAFKA_SASL_MECHANISM,
    KAFKA_SASL_PLAIN_USERNAME,
    KAFKA_SASL_PLAIN_PASSWORD,
    ENCRYPTED_KAFKA_SASL_PLAIN_PASSWORD,
    KAFKA_SASL_SCRAM_USERNAME,
    KAFKA_SASL_SCRAM_PASSWORD,
    KAFKA_SASL_SCRAM_SECRETS_ARN,
    ENCRYPTED_KAFKA_SASL_SCRAM_PASSWORD,
    KAFKA_SASL_GSSAPI_KEYTAB,
    KAFKA_SASL_GSSAPI_KRB5_CONF,
    KAFKA_SASL_GSSAPI_SERVICE,
    KAFKA_SASL_GSSAPI_PRINCIPAL,
    SECRET_ID,
    CONNECTOR_URL,
    CONNECTOR_TYPE,
    CONNECTOR_CLASS_NAME,
    ENDPOINT,
    ENDPOINT_TYPE,
    ROLE_ARN,
    REGION,
    WORKGROUP_NAME,
    CLUSTER_IDENTIFIER,
    DATABASE
  };

namespace ConnectionPropertyKeyMapper
{
AWS_GLUE_API ConnectionPropertyKey GetConnectionPropertyKeyForName(const Aws::String& name);

AWS_GLUE_API Aws::String GetNameForConnectionPropertyKey(ConnectionPropertyKey value);
} // namespace ConnectionPropertyKeyMapper
} // namespace Model
} // namespace Glue
} // namespace Aws
