﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class AcceptMarketplaceRegistrationRequest : public OdbRequest
  {
  public:
    AWS_ODB_API AcceptMarketplaceRegistrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AcceptMarketplaceRegistration"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The registration token that's generated by Amazon Web Services Marketplace
     * and sent to Oracle Database@Amazon Web Services.</p>
     */
    inline const Aws::String& GetMarketplaceRegistrationToken() const { return m_marketplaceRegistrationToken; }
    inline bool MarketplaceRegistrationTokenHasBeenSet() const { return m_marketplaceRegistrationTokenHasBeenSet; }
    template<typename MarketplaceRegistrationTokenT = Aws::String>
    void SetMarketplaceRegistrationToken(MarketplaceRegistrationTokenT&& value) { m_marketplaceRegistrationTokenHasBeenSet = true; m_marketplaceRegistrationToken = std::forward<MarketplaceRegistrationTokenT>(value); }
    template<typename MarketplaceRegistrationTokenT = Aws::String>
    AcceptMarketplaceRegistrationRequest& WithMarketplaceRegistrationToken(MarketplaceRegistrationTokenT&& value) { SetMarketplaceRegistrationToken(std::forward<MarketplaceRegistrationTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_marketplaceRegistrationToken;
    bool m_marketplaceRegistrationTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
