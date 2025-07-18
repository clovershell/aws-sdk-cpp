﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ConflictingAlias.h>
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
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A list of aliases (also called CNAMEs) and the CloudFront standard
   * distributions and Amazon Web Services accounts that they are associated with. In
   * the list, the standard distribution and account IDs are partially hidden, which
   * allows you to identify the standard distributions and accounts that you own, but
   * helps to protect the information of ones that you don't own.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ConflictingAliasesList">AWS
   * API Reference</a></p>
   */
  class ConflictingAliasesList
  {
  public:
    AWS_CLOUDFRONT_API ConflictingAliasesList() = default;
    AWS_CLOUDFRONT_API ConflictingAliasesList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ConflictingAliasesList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>If there are more items in the list than are in this response, this element
     * is present. It contains the value that you should use in the <code>Marker</code>
     * field of a subsequent request to continue listing conflicting aliases where you
     * left off.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ConflictingAliasesList& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of conflicting aliases requested.</p>
     */
    inline int GetMaxItems() const { return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ConflictingAliasesList& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conflicting aliases returned in the response.</p>
     */
    inline int GetQuantity() const { return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline ConflictingAliasesList& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the conflicting aliases in the list.</p>
     */
    inline const Aws::Vector<ConflictingAlias>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<ConflictingAlias>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<ConflictingAlias>>
    ConflictingAliasesList& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = ConflictingAlias>
    ConflictingAliasesList& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_maxItems{0};
    bool m_maxItemsHasBeenSet = false;

    int m_quantity{0};
    bool m_quantityHasBeenSet = false;

    Aws::Vector<ConflictingAlias> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
