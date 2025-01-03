﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/eks/EKSErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/eks/EKSEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in EKSClient header */
#include <aws/eks/model/AssociateAccessPolicyResult.h>
#include <aws/eks/model/AssociateEncryptionConfigResult.h>
#include <aws/eks/model/AssociateIdentityProviderConfigResult.h>
#include <aws/eks/model/CreateAccessEntryResult.h>
#include <aws/eks/model/CreateAddonResult.h>
#include <aws/eks/model/CreateClusterResult.h>
#include <aws/eks/model/CreateEksAnywhereSubscriptionResult.h>
#include <aws/eks/model/CreateFargateProfileResult.h>
#include <aws/eks/model/CreateNodegroupResult.h>
#include <aws/eks/model/CreatePodIdentityAssociationResult.h>
#include <aws/eks/model/DeleteAccessEntryResult.h>
#include <aws/eks/model/DeleteAddonResult.h>
#include <aws/eks/model/DeleteClusterResult.h>
#include <aws/eks/model/DeleteEksAnywhereSubscriptionResult.h>
#include <aws/eks/model/DeleteFargateProfileResult.h>
#include <aws/eks/model/DeleteNodegroupResult.h>
#include <aws/eks/model/DeletePodIdentityAssociationResult.h>
#include <aws/eks/model/DeregisterClusterResult.h>
#include <aws/eks/model/DescribeAccessEntryResult.h>
#include <aws/eks/model/DescribeAddonResult.h>
#include <aws/eks/model/DescribeAddonConfigurationResult.h>
#include <aws/eks/model/DescribeAddonVersionsResult.h>
#include <aws/eks/model/DescribeClusterResult.h>
#include <aws/eks/model/DescribeClusterVersionsResult.h>
#include <aws/eks/model/DescribeEksAnywhereSubscriptionResult.h>
#include <aws/eks/model/DescribeFargateProfileResult.h>
#include <aws/eks/model/DescribeIdentityProviderConfigResult.h>
#include <aws/eks/model/DescribeInsightResult.h>
#include <aws/eks/model/DescribeNodegroupResult.h>
#include <aws/eks/model/DescribePodIdentityAssociationResult.h>
#include <aws/eks/model/DescribeUpdateResult.h>
#include <aws/eks/model/DisassociateAccessPolicyResult.h>
#include <aws/eks/model/DisassociateIdentityProviderConfigResult.h>
#include <aws/eks/model/ListAccessEntriesResult.h>
#include <aws/eks/model/ListAccessPoliciesResult.h>
#include <aws/eks/model/ListAddonsResult.h>
#include <aws/eks/model/ListAssociatedAccessPoliciesResult.h>
#include <aws/eks/model/ListClustersResult.h>
#include <aws/eks/model/ListEksAnywhereSubscriptionsResult.h>
#include <aws/eks/model/ListFargateProfilesResult.h>
#include <aws/eks/model/ListIdentityProviderConfigsResult.h>
#include <aws/eks/model/ListInsightsResult.h>
#include <aws/eks/model/ListNodegroupsResult.h>
#include <aws/eks/model/ListPodIdentityAssociationsResult.h>
#include <aws/eks/model/ListTagsForResourceResult.h>
#include <aws/eks/model/ListUpdatesResult.h>
#include <aws/eks/model/RegisterClusterResult.h>
#include <aws/eks/model/TagResourceResult.h>
#include <aws/eks/model/UntagResourceResult.h>
#include <aws/eks/model/UpdateAccessEntryResult.h>
#include <aws/eks/model/UpdateAddonResult.h>
#include <aws/eks/model/UpdateClusterConfigResult.h>
#include <aws/eks/model/UpdateClusterVersionResult.h>
#include <aws/eks/model/UpdateEksAnywhereSubscriptionResult.h>
#include <aws/eks/model/UpdateNodegroupConfigResult.h>
#include <aws/eks/model/UpdateNodegroupVersionResult.h>
#include <aws/eks/model/UpdatePodIdentityAssociationResult.h>
#include <aws/eks/model/ListEksAnywhereSubscriptionsRequest.h>
#include <aws/eks/model/DescribeClusterVersionsRequest.h>
#include <aws/eks/model/ListAccessPoliciesRequest.h>
#include <aws/eks/model/ListClustersRequest.h>
#include <aws/eks/model/DescribeAddonVersionsRequest.h>
/* End of service model headers required in EKSClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace EKS
  {
    using EKSClientConfiguration = Aws::Client::GenericClientConfiguration;
    using EKSEndpointProviderBase = Aws::EKS::Endpoint::EKSEndpointProviderBase;
    using EKSEndpointProvider = Aws::EKS::Endpoint::EKSEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in EKSClient header */
      class AssociateAccessPolicyRequest;
      class AssociateEncryptionConfigRequest;
      class AssociateIdentityProviderConfigRequest;
      class CreateAccessEntryRequest;
      class CreateAddonRequest;
      class CreateClusterRequest;
      class CreateEksAnywhereSubscriptionRequest;
      class CreateFargateProfileRequest;
      class CreateNodegroupRequest;
      class CreatePodIdentityAssociationRequest;
      class DeleteAccessEntryRequest;
      class DeleteAddonRequest;
      class DeleteClusterRequest;
      class DeleteEksAnywhereSubscriptionRequest;
      class DeleteFargateProfileRequest;
      class DeleteNodegroupRequest;
      class DeletePodIdentityAssociationRequest;
      class DeregisterClusterRequest;
      class DescribeAccessEntryRequest;
      class DescribeAddonRequest;
      class DescribeAddonConfigurationRequest;
      class DescribeAddonVersionsRequest;
      class DescribeClusterRequest;
      class DescribeClusterVersionsRequest;
      class DescribeEksAnywhereSubscriptionRequest;
      class DescribeFargateProfileRequest;
      class DescribeIdentityProviderConfigRequest;
      class DescribeInsightRequest;
      class DescribeNodegroupRequest;
      class DescribePodIdentityAssociationRequest;
      class DescribeUpdateRequest;
      class DisassociateAccessPolicyRequest;
      class DisassociateIdentityProviderConfigRequest;
      class ListAccessEntriesRequest;
      class ListAccessPoliciesRequest;
      class ListAddonsRequest;
      class ListAssociatedAccessPoliciesRequest;
      class ListClustersRequest;
      class ListEksAnywhereSubscriptionsRequest;
      class ListFargateProfilesRequest;
      class ListIdentityProviderConfigsRequest;
      class ListInsightsRequest;
      class ListNodegroupsRequest;
      class ListPodIdentityAssociationsRequest;
      class ListTagsForResourceRequest;
      class ListUpdatesRequest;
      class RegisterClusterRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateAccessEntryRequest;
      class UpdateAddonRequest;
      class UpdateClusterConfigRequest;
      class UpdateClusterVersionRequest;
      class UpdateEksAnywhereSubscriptionRequest;
      class UpdateNodegroupConfigRequest;
      class UpdateNodegroupVersionRequest;
      class UpdatePodIdentityAssociationRequest;
      /* End of service model forward declarations required in EKSClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateAccessPolicyResult, EKSError> AssociateAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<AssociateEncryptionConfigResult, EKSError> AssociateEncryptionConfigOutcome;
      typedef Aws::Utils::Outcome<AssociateIdentityProviderConfigResult, EKSError> AssociateIdentityProviderConfigOutcome;
      typedef Aws::Utils::Outcome<CreateAccessEntryResult, EKSError> CreateAccessEntryOutcome;
      typedef Aws::Utils::Outcome<CreateAddonResult, EKSError> CreateAddonOutcome;
      typedef Aws::Utils::Outcome<CreateClusterResult, EKSError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateEksAnywhereSubscriptionResult, EKSError> CreateEksAnywhereSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateFargateProfileResult, EKSError> CreateFargateProfileOutcome;
      typedef Aws::Utils::Outcome<CreateNodegroupResult, EKSError> CreateNodegroupOutcome;
      typedef Aws::Utils::Outcome<CreatePodIdentityAssociationResult, EKSError> CreatePodIdentityAssociationOutcome;
      typedef Aws::Utils::Outcome<DeleteAccessEntryResult, EKSError> DeleteAccessEntryOutcome;
      typedef Aws::Utils::Outcome<DeleteAddonResult, EKSError> DeleteAddonOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, EKSError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteEksAnywhereSubscriptionResult, EKSError> DeleteEksAnywhereSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteFargateProfileResult, EKSError> DeleteFargateProfileOutcome;
      typedef Aws::Utils::Outcome<DeleteNodegroupResult, EKSError> DeleteNodegroupOutcome;
      typedef Aws::Utils::Outcome<DeletePodIdentityAssociationResult, EKSError> DeletePodIdentityAssociationOutcome;
      typedef Aws::Utils::Outcome<DeregisterClusterResult, EKSError> DeregisterClusterOutcome;
      typedef Aws::Utils::Outcome<DescribeAccessEntryResult, EKSError> DescribeAccessEntryOutcome;
      typedef Aws::Utils::Outcome<DescribeAddonResult, EKSError> DescribeAddonOutcome;
      typedef Aws::Utils::Outcome<DescribeAddonConfigurationResult, EKSError> DescribeAddonConfigurationOutcome;
      typedef Aws::Utils::Outcome<DescribeAddonVersionsResult, EKSError> DescribeAddonVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterResult, EKSError> DescribeClusterOutcome;
      typedef Aws::Utils::Outcome<DescribeClusterVersionsResult, EKSError> DescribeClusterVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEksAnywhereSubscriptionResult, EKSError> DescribeEksAnywhereSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DescribeFargateProfileResult, EKSError> DescribeFargateProfileOutcome;
      typedef Aws::Utils::Outcome<DescribeIdentityProviderConfigResult, EKSError> DescribeIdentityProviderConfigOutcome;
      typedef Aws::Utils::Outcome<DescribeInsightResult, EKSError> DescribeInsightOutcome;
      typedef Aws::Utils::Outcome<DescribeNodegroupResult, EKSError> DescribeNodegroupOutcome;
      typedef Aws::Utils::Outcome<DescribePodIdentityAssociationResult, EKSError> DescribePodIdentityAssociationOutcome;
      typedef Aws::Utils::Outcome<DescribeUpdateResult, EKSError> DescribeUpdateOutcome;
      typedef Aws::Utils::Outcome<DisassociateAccessPolicyResult, EKSError> DisassociateAccessPolicyOutcome;
      typedef Aws::Utils::Outcome<DisassociateIdentityProviderConfigResult, EKSError> DisassociateIdentityProviderConfigOutcome;
      typedef Aws::Utils::Outcome<ListAccessEntriesResult, EKSError> ListAccessEntriesOutcome;
      typedef Aws::Utils::Outcome<ListAccessPoliciesResult, EKSError> ListAccessPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListAddonsResult, EKSError> ListAddonsOutcome;
      typedef Aws::Utils::Outcome<ListAssociatedAccessPoliciesResult, EKSError> ListAssociatedAccessPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListClustersResult, EKSError> ListClustersOutcome;
      typedef Aws::Utils::Outcome<ListEksAnywhereSubscriptionsResult, EKSError> ListEksAnywhereSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<ListFargateProfilesResult, EKSError> ListFargateProfilesOutcome;
      typedef Aws::Utils::Outcome<ListIdentityProviderConfigsResult, EKSError> ListIdentityProviderConfigsOutcome;
      typedef Aws::Utils::Outcome<ListInsightsResult, EKSError> ListInsightsOutcome;
      typedef Aws::Utils::Outcome<ListNodegroupsResult, EKSError> ListNodegroupsOutcome;
      typedef Aws::Utils::Outcome<ListPodIdentityAssociationsResult, EKSError> ListPodIdentityAssociationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, EKSError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListUpdatesResult, EKSError> ListUpdatesOutcome;
      typedef Aws::Utils::Outcome<RegisterClusterResult, EKSError> RegisterClusterOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, EKSError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, EKSError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateAccessEntryResult, EKSError> UpdateAccessEntryOutcome;
      typedef Aws::Utils::Outcome<UpdateAddonResult, EKSError> UpdateAddonOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterConfigResult, EKSError> UpdateClusterConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterVersionResult, EKSError> UpdateClusterVersionOutcome;
      typedef Aws::Utils::Outcome<UpdateEksAnywhereSubscriptionResult, EKSError> UpdateEksAnywhereSubscriptionOutcome;
      typedef Aws::Utils::Outcome<UpdateNodegroupConfigResult, EKSError> UpdateNodegroupConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateNodegroupVersionResult, EKSError> UpdateNodegroupVersionOutcome;
      typedef Aws::Utils::Outcome<UpdatePodIdentityAssociationResult, EKSError> UpdatePodIdentityAssociationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateAccessPolicyOutcome> AssociateAccessPolicyOutcomeCallable;
      typedef std::future<AssociateEncryptionConfigOutcome> AssociateEncryptionConfigOutcomeCallable;
      typedef std::future<AssociateIdentityProviderConfigOutcome> AssociateIdentityProviderConfigOutcomeCallable;
      typedef std::future<CreateAccessEntryOutcome> CreateAccessEntryOutcomeCallable;
      typedef std::future<CreateAddonOutcome> CreateAddonOutcomeCallable;
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateEksAnywhereSubscriptionOutcome> CreateEksAnywhereSubscriptionOutcomeCallable;
      typedef std::future<CreateFargateProfileOutcome> CreateFargateProfileOutcomeCallable;
      typedef std::future<CreateNodegroupOutcome> CreateNodegroupOutcomeCallable;
      typedef std::future<CreatePodIdentityAssociationOutcome> CreatePodIdentityAssociationOutcomeCallable;
      typedef std::future<DeleteAccessEntryOutcome> DeleteAccessEntryOutcomeCallable;
      typedef std::future<DeleteAddonOutcome> DeleteAddonOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteEksAnywhereSubscriptionOutcome> DeleteEksAnywhereSubscriptionOutcomeCallable;
      typedef std::future<DeleteFargateProfileOutcome> DeleteFargateProfileOutcomeCallable;
      typedef std::future<DeleteNodegroupOutcome> DeleteNodegroupOutcomeCallable;
      typedef std::future<DeletePodIdentityAssociationOutcome> DeletePodIdentityAssociationOutcomeCallable;
      typedef std::future<DeregisterClusterOutcome> DeregisterClusterOutcomeCallable;
      typedef std::future<DescribeAccessEntryOutcome> DescribeAccessEntryOutcomeCallable;
      typedef std::future<DescribeAddonOutcome> DescribeAddonOutcomeCallable;
      typedef std::future<DescribeAddonConfigurationOutcome> DescribeAddonConfigurationOutcomeCallable;
      typedef std::future<DescribeAddonVersionsOutcome> DescribeAddonVersionsOutcomeCallable;
      typedef std::future<DescribeClusterOutcome> DescribeClusterOutcomeCallable;
      typedef std::future<DescribeClusterVersionsOutcome> DescribeClusterVersionsOutcomeCallable;
      typedef std::future<DescribeEksAnywhereSubscriptionOutcome> DescribeEksAnywhereSubscriptionOutcomeCallable;
      typedef std::future<DescribeFargateProfileOutcome> DescribeFargateProfileOutcomeCallable;
      typedef std::future<DescribeIdentityProviderConfigOutcome> DescribeIdentityProviderConfigOutcomeCallable;
      typedef std::future<DescribeInsightOutcome> DescribeInsightOutcomeCallable;
      typedef std::future<DescribeNodegroupOutcome> DescribeNodegroupOutcomeCallable;
      typedef std::future<DescribePodIdentityAssociationOutcome> DescribePodIdentityAssociationOutcomeCallable;
      typedef std::future<DescribeUpdateOutcome> DescribeUpdateOutcomeCallable;
      typedef std::future<DisassociateAccessPolicyOutcome> DisassociateAccessPolicyOutcomeCallable;
      typedef std::future<DisassociateIdentityProviderConfigOutcome> DisassociateIdentityProviderConfigOutcomeCallable;
      typedef std::future<ListAccessEntriesOutcome> ListAccessEntriesOutcomeCallable;
      typedef std::future<ListAccessPoliciesOutcome> ListAccessPoliciesOutcomeCallable;
      typedef std::future<ListAddonsOutcome> ListAddonsOutcomeCallable;
      typedef std::future<ListAssociatedAccessPoliciesOutcome> ListAssociatedAccessPoliciesOutcomeCallable;
      typedef std::future<ListClustersOutcome> ListClustersOutcomeCallable;
      typedef std::future<ListEksAnywhereSubscriptionsOutcome> ListEksAnywhereSubscriptionsOutcomeCallable;
      typedef std::future<ListFargateProfilesOutcome> ListFargateProfilesOutcomeCallable;
      typedef std::future<ListIdentityProviderConfigsOutcome> ListIdentityProviderConfigsOutcomeCallable;
      typedef std::future<ListInsightsOutcome> ListInsightsOutcomeCallable;
      typedef std::future<ListNodegroupsOutcome> ListNodegroupsOutcomeCallable;
      typedef std::future<ListPodIdentityAssociationsOutcome> ListPodIdentityAssociationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListUpdatesOutcome> ListUpdatesOutcomeCallable;
      typedef std::future<RegisterClusterOutcome> RegisterClusterOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateAccessEntryOutcome> UpdateAccessEntryOutcomeCallable;
      typedef std::future<UpdateAddonOutcome> UpdateAddonOutcomeCallable;
      typedef std::future<UpdateClusterConfigOutcome> UpdateClusterConfigOutcomeCallable;
      typedef std::future<UpdateClusterVersionOutcome> UpdateClusterVersionOutcomeCallable;
      typedef std::future<UpdateEksAnywhereSubscriptionOutcome> UpdateEksAnywhereSubscriptionOutcomeCallable;
      typedef std::future<UpdateNodegroupConfigOutcome> UpdateNodegroupConfigOutcomeCallable;
      typedef std::future<UpdateNodegroupVersionOutcome> UpdateNodegroupVersionOutcomeCallable;
      typedef std::future<UpdatePodIdentityAssociationOutcome> UpdatePodIdentityAssociationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class EKSClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const EKSClient*, const Model::AssociateAccessPolicyRequest&, const Model::AssociateAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::AssociateEncryptionConfigRequest&, const Model::AssociateEncryptionConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateEncryptionConfigResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::AssociateIdentityProviderConfigRequest&, const Model::AssociateIdentityProviderConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateIdentityProviderConfigResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::CreateAccessEntryRequest&, const Model::CreateAccessEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAccessEntryResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::CreateAddonRequest&, const Model::CreateAddonOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAddonResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::CreateEksAnywhereSubscriptionRequest&, const Model::CreateEksAnywhereSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEksAnywhereSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::CreateFargateProfileRequest&, const Model::CreateFargateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFargateProfileResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::CreateNodegroupRequest&, const Model::CreateNodegroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNodegroupResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::CreatePodIdentityAssociationRequest&, const Model::CreatePodIdentityAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePodIdentityAssociationResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteAccessEntryRequest&, const Model::DeleteAccessEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessEntryResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteAddonRequest&, const Model::DeleteAddonOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAddonResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteEksAnywhereSubscriptionRequest&, const Model::DeleteEksAnywhereSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEksAnywhereSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteFargateProfileRequest&, const Model::DeleteFargateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFargateProfileResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeleteNodegroupRequest&, const Model::DeleteNodegroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNodegroupResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeletePodIdentityAssociationRequest&, const Model::DeletePodIdentityAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePodIdentityAssociationResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DeregisterClusterRequest&, const Model::DeregisterClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeAccessEntryRequest&, const Model::DescribeAccessEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccessEntryResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeAddonRequest&, const Model::DescribeAddonOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddonResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeAddonConfigurationRequest&, const Model::DescribeAddonConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddonConfigurationResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeAddonVersionsRequest&, const Model::DescribeAddonVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAddonVersionsResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeClusterRequest&, const Model::DescribeClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeClusterVersionsRequest&, const Model::DescribeClusterVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClusterVersionsResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeEksAnywhereSubscriptionRequest&, const Model::DescribeEksAnywhereSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEksAnywhereSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeFargateProfileRequest&, const Model::DescribeFargateProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFargateProfileResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeIdentityProviderConfigRequest&, const Model::DescribeIdentityProviderConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeIdentityProviderConfigResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeInsightRequest&, const Model::DescribeInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInsightResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeNodegroupRequest&, const Model::DescribeNodegroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeNodegroupResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribePodIdentityAssociationRequest&, const Model::DescribePodIdentityAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePodIdentityAssociationResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DescribeUpdateRequest&, const Model::DescribeUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUpdateResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DisassociateAccessPolicyRequest&, const Model::DisassociateAccessPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAccessPolicyResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::DisassociateIdentityProviderConfigRequest&, const Model::DisassociateIdentityProviderConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateIdentityProviderConfigResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListAccessEntriesRequest&, const Model::ListAccessEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessEntriesResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListAccessPoliciesRequest&, const Model::ListAccessPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAccessPoliciesResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListAddonsRequest&, const Model::ListAddonsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAddonsResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListAssociatedAccessPoliciesRequest&, const Model::ListAssociatedAccessPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedAccessPoliciesResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListClustersRequest&, const Model::ListClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListClustersResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListEksAnywhereSubscriptionsRequest&, const Model::ListEksAnywhereSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEksAnywhereSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListFargateProfilesRequest&, const Model::ListFargateProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFargateProfilesResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListIdentityProviderConfigsRequest&, const Model::ListIdentityProviderConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentityProviderConfigsResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListInsightsRequest&, const Model::ListInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInsightsResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListNodegroupsRequest&, const Model::ListNodegroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNodegroupsResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListPodIdentityAssociationsRequest&, const Model::ListPodIdentityAssociationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPodIdentityAssociationsResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::ListUpdatesRequest&, const Model::ListUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUpdatesResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::RegisterClusterRequest&, const Model::RegisterClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterClusterResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateAccessEntryRequest&, const Model::UpdateAccessEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAccessEntryResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateAddonRequest&, const Model::UpdateAddonOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAddonResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateClusterConfigRequest&, const Model::UpdateClusterConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterConfigResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateClusterVersionRequest&, const Model::UpdateClusterVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterVersionResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateEksAnywhereSubscriptionRequest&, const Model::UpdateEksAnywhereSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEksAnywhereSubscriptionResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateNodegroupConfigRequest&, const Model::UpdateNodegroupConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNodegroupConfigResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdateNodegroupVersionRequest&, const Model::UpdateNodegroupVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNodegroupVersionResponseReceivedHandler;
    typedef std::function<void(const EKSClient*, const Model::UpdatePodIdentityAssociationRequest&, const Model::UpdatePodIdentityAssociationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePodIdentityAssociationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace EKS
} // namespace Aws
