﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/InventoryFrequency.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies the schedule for generating S3 Inventory results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/InventorySchedule">AWS
   * API Reference</a></p>
   */
  class InventorySchedule
  {
  public:
    AWS_S3_API InventorySchedule() = default;
    AWS_S3_API InventorySchedule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API InventorySchedule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies how frequently inventory results are produced.</p>
     */
    inline InventoryFrequency GetFrequency() const { return m_frequency; }
    inline bool FrequencyHasBeenSet() const { return m_frequencyHasBeenSet; }
    inline void SetFrequency(InventoryFrequency value) { m_frequencyHasBeenSet = true; m_frequency = value; }
    inline InventorySchedule& WithFrequency(InventoryFrequency value) { SetFrequency(value); return *this;}
    ///@}
  private:

    InventoryFrequency m_frequency{InventoryFrequency::NOT_SET};
    bool m_frequencyHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
