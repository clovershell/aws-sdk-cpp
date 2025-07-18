﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CleanRoomsML
{
namespace Model
{

  /**
   * <p>You have exceeded your service quota.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanroomsml-2023-09-06/ServiceQuotaExceededException">AWS
   * API Reference</a></p>
   */
  class ServiceQuotaExceededException
  {
  public:
    AWS_CLEANROOMSML_API ServiceQuotaExceededException() = default;
    AWS_CLEANROOMSML_API ServiceQuotaExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API ServiceQuotaExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMSML_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ServiceQuotaExceededException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service quota limit that was exceeded</p>
     */
    inline const Aws::String& GetQuotaName() const { return m_quotaName; }
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }
    template<typename QuotaNameT = Aws::String>
    void SetQuotaName(QuotaNameT&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::forward<QuotaNameT>(value); }
    template<typename QuotaNameT = Aws::String>
    ServiceQuotaExceededException& WithQuotaName(QuotaNameT&& value) { SetQuotaName(std::forward<QuotaNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current limit on the service quota that was exceeded</p>
     */
    inline double GetQuotaValue() const { return m_quotaValue; }
    inline bool QuotaValueHasBeenSet() const { return m_quotaValueHasBeenSet; }
    inline void SetQuotaValue(double value) { m_quotaValueHasBeenSet = true; m_quotaValue = value; }
    inline ServiceQuotaExceededException& WithQuotaValue(double value) { SetQuotaValue(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaName;
    bool m_quotaNameHasBeenSet = false;

    double m_quotaValue{0.0};
    bool m_quotaValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
