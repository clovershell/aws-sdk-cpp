﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/FirehoseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Firehose
{
namespace Model
{

  /**
   */
  class DescribeDeliveryStreamRequest : public FirehoseRequest
  {
  public:
    AWS_FIREHOSE_API DescribeDeliveryStreamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDeliveryStream"; }

    AWS_FIREHOSE_API Aws::String SerializePayload() const override;

    AWS_FIREHOSE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Firehose stream.</p>
     */
    inline const Aws::String& GetDeliveryStreamName() const{ return m_deliveryStreamName; }
    inline bool DeliveryStreamNameHasBeenSet() const { return m_deliveryStreamNameHasBeenSet; }
    inline void SetDeliveryStreamName(const Aws::String& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = value; }
    inline void SetDeliveryStreamName(Aws::String&& value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName = std::move(value); }
    inline void SetDeliveryStreamName(const char* value) { m_deliveryStreamNameHasBeenSet = true; m_deliveryStreamName.assign(value); }
    inline DescribeDeliveryStreamRequest& WithDeliveryStreamName(const Aws::String& value) { SetDeliveryStreamName(value); return *this;}
    inline DescribeDeliveryStreamRequest& WithDeliveryStreamName(Aws::String&& value) { SetDeliveryStreamName(std::move(value)); return *this;}
    inline DescribeDeliveryStreamRequest& WithDeliveryStreamName(const char* value) { SetDeliveryStreamName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The limit on the number of destinations to return. You can have one
     * destination per Firehose stream.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeDeliveryStreamRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination to start returning the destination information.
     * Firehose supports one destination per Firehose stream.</p>
     */
    inline const Aws::String& GetExclusiveStartDestinationId() const{ return m_exclusiveStartDestinationId; }
    inline bool ExclusiveStartDestinationIdHasBeenSet() const { return m_exclusiveStartDestinationIdHasBeenSet; }
    inline void SetExclusiveStartDestinationId(const Aws::String& value) { m_exclusiveStartDestinationIdHasBeenSet = true; m_exclusiveStartDestinationId = value; }
    inline void SetExclusiveStartDestinationId(Aws::String&& value) { m_exclusiveStartDestinationIdHasBeenSet = true; m_exclusiveStartDestinationId = std::move(value); }
    inline void SetExclusiveStartDestinationId(const char* value) { m_exclusiveStartDestinationIdHasBeenSet = true; m_exclusiveStartDestinationId.assign(value); }
    inline DescribeDeliveryStreamRequest& WithExclusiveStartDestinationId(const Aws::String& value) { SetExclusiveStartDestinationId(value); return *this;}
    inline DescribeDeliveryStreamRequest& WithExclusiveStartDestinationId(Aws::String&& value) { SetExclusiveStartDestinationId(std::move(value)); return *this;}
    inline DescribeDeliveryStreamRequest& WithExclusiveStartDestinationId(const char* value) { SetExclusiveStartDestinationId(value); return *this;}
    ///@}
  private:

    Aws::String m_deliveryStreamName;
    bool m_deliveryStreamNameHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_exclusiveStartDestinationId;
    bool m_exclusiveStartDestinationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
