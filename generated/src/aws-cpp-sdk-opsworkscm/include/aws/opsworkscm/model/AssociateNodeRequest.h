﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworkscm/OpsWorksCM_EXPORTS.h>
#include <aws/opsworkscm/OpsWorksCMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworkscm/model/EngineAttribute.h>
#include <utility>

namespace Aws
{
namespace OpsWorksCM
{
namespace Model
{

  /**
   */
  class AssociateNodeRequest : public OpsWorksCMRequest
  {
  public:
    AWS_OPSWORKSCM_API AssociateNodeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateNode"; }

    AWS_OPSWORKSCM_API Aws::String SerializePayload() const override;

    AWS_OPSWORKSCM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the server with which to associate the node. </p>
     */
    inline const Aws::String& GetServerName() const { return m_serverName; }
    inline bool ServerNameHasBeenSet() const { return m_serverNameHasBeenSet; }
    template<typename ServerNameT = Aws::String>
    void SetServerName(ServerNameT&& value) { m_serverNameHasBeenSet = true; m_serverName = std::forward<ServerNameT>(value); }
    template<typename ServerNameT = Aws::String>
    AssociateNodeRequest& WithServerName(ServerNameT&& value) { SetServerName(std::forward<ServerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node. </p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    AssociateNodeRequest& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Engine attributes used for associating the node. </p> <p class="title">
     * <b>Attributes accepted in a AssociateNode request for Chef</b> </p> <ul> <li>
     * <p> <code>CHEF_ORGANIZATION</code>: The Chef organization with which the node is
     * associated. By default only one organization named <code>default</code> can
     * exist. </p> </li> <li> <p> <code>CHEF_AUTOMATE_NODE_PUBLIC_KEY</code>: A
     * PEM-formatted public key. This key is required for the <code>chef-client</code>
     * agent to access the Chef API. </p> </li> </ul> <p class="title"> <b>Attributes
     * accepted in a AssociateNode request for Puppet</b> </p> <ul> <li> <p>
     * <code>PUPPET_NODE_CSR</code>: A PEM-formatted certificate-signing request (CSR)
     * that is created by the node. </p> </li> </ul>
     */
    inline const Aws::Vector<EngineAttribute>& GetEngineAttributes() const { return m_engineAttributes; }
    inline bool EngineAttributesHasBeenSet() const { return m_engineAttributesHasBeenSet; }
    template<typename EngineAttributesT = Aws::Vector<EngineAttribute>>
    void SetEngineAttributes(EngineAttributesT&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes = std::forward<EngineAttributesT>(value); }
    template<typename EngineAttributesT = Aws::Vector<EngineAttribute>>
    AssociateNodeRequest& WithEngineAttributes(EngineAttributesT&& value) { SetEngineAttributes(std::forward<EngineAttributesT>(value)); return *this;}
    template<typename EngineAttributesT = EngineAttribute>
    AssociateNodeRequest& AddEngineAttributes(EngineAttributesT&& value) { m_engineAttributesHasBeenSet = true; m_engineAttributes.emplace_back(std::forward<EngineAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_serverName;
    bool m_serverNameHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::Vector<EngineAttribute> m_engineAttributes;
    bool m_engineAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorksCM
} // namespace Aws
