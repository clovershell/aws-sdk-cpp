﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connectcases/ConnectCasesServiceClientModel.h>

namespace Aws
{
namespace ConnectCases
{
  /**
   * <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_Operations_Amazon_Connect_Cases.html">Cases
   * actions</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_Types_Amazon_Connect_Cases.html">Cases
   * data types</a> </p> </li> </ul> <p>With Amazon Connect Cases, your agents can
   * track and manage customer issues that require multiple interactions, follow-up
   * tasks, and teams in your contact center. A case represents a customer issue. It
   * records the issue, the steps and interactions taken to resolve the issue, and
   * the outcome. For more information, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/cases.html">Amazon
   * Connect Cases</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
   */
  class AWS_CONNECTCASES_API ConnectCasesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConnectCasesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ConnectCasesClientConfiguration ClientConfigurationType;
      typedef ConnectCasesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCasesClient(const Aws::ConnectCases::ConnectCasesClientConfiguration& clientConfiguration = Aws::ConnectCases::ConnectCasesClientConfiguration(),
                           std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCasesClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ConnectCases::ConnectCasesClientConfiguration& clientConfiguration = Aws::ConnectCases::ConnectCasesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCasesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ConnectCases::ConnectCasesClientConfiguration& clientConfiguration = Aws::ConnectCases::ConnectCasesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCasesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConnectCasesClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConnectCasesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConnectCasesClient();

        /**
         * <p>Gets a batch of case rules. In the Amazon Connect admin website, case rules
         * are known as <i>case field conditions</i>. For more information about case field
         * conditions, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
         * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchGetCaseRule">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetCaseRuleOutcome BatchGetCaseRule(const Model::BatchGetCaseRuleRequest& request) const;

        /**
         * A Callable wrapper for BatchGetCaseRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetCaseRuleRequestT = Model::BatchGetCaseRuleRequest>
        Model::BatchGetCaseRuleOutcomeCallable BatchGetCaseRuleCallable(const BatchGetCaseRuleRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::BatchGetCaseRule, request);
        }

        /**
         * An Async wrapper for BatchGetCaseRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetCaseRuleRequestT = Model::BatchGetCaseRuleRequest>
        void BatchGetCaseRuleAsync(const BatchGetCaseRuleRequestT& request, const BatchGetCaseRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::BatchGetCaseRule, request, handler, context);
        }

        /**
         * <p>Returns the description for the list of fields in the request parameters.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchGetField">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetFieldOutcome BatchGetField(const Model::BatchGetFieldRequest& request) const;

        /**
         * A Callable wrapper for BatchGetField that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetFieldRequestT = Model::BatchGetFieldRequest>
        Model::BatchGetFieldOutcomeCallable BatchGetFieldCallable(const BatchGetFieldRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::BatchGetField, request);
        }

        /**
         * An Async wrapper for BatchGetField that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetFieldRequestT = Model::BatchGetFieldRequest>
        void BatchGetFieldAsync(const BatchGetFieldRequestT& request, const BatchGetFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::BatchGetField, request, handler, context);
        }

        /**
         * <p>Creates and updates a set of field options for a single select field in a
         * Cases domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BatchPutFieldOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchPutFieldOptionsOutcome BatchPutFieldOptions(const Model::BatchPutFieldOptionsRequest& request) const;

        /**
         * A Callable wrapper for BatchPutFieldOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchPutFieldOptionsRequestT = Model::BatchPutFieldOptionsRequest>
        Model::BatchPutFieldOptionsOutcomeCallable BatchPutFieldOptionsCallable(const BatchPutFieldOptionsRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::BatchPutFieldOptions, request);
        }

        /**
         * An Async wrapper for BatchPutFieldOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchPutFieldOptionsRequestT = Model::BatchPutFieldOptionsRequest>
        void BatchPutFieldOptionsAsync(const BatchPutFieldOptionsRequestT& request, const BatchPutFieldOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::BatchPutFieldOptions, request, handler, context);
        }

        /**
         * <p> <p>If you provide a value for <code>PerformedBy.UserArn</code> you
         * must also have <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeUser.html">connect:DescribeUser</a>
         * permission on the User ARN resource that you provide</p>  <p>Creates a
         * case in the specified Cases domain. Case system and custom fields are taken as
         * an array id/value pairs with a declared data types.</p> <p>The following fields
         * are required when creating a case:</p> <ul> <li> <p> <code>customer_id</code> -
         * You must provide the full customer profile ARN in this format:
         * <code>arn:aws:profile:your_AWS_Region:your_AWS_account
         * ID:domains/your_profiles_domain_name/profiles/profile_ID</code> </p> </li> <li>
         * <p> <code>title</code> </p> </li> </ul></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateCase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCaseOutcome CreateCase(const Model::CreateCaseRequest& request) const;

        /**
         * A Callable wrapper for CreateCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCaseRequestT = Model::CreateCaseRequest>
        Model::CreateCaseOutcomeCallable CreateCaseCallable(const CreateCaseRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::CreateCase, request);
        }

        /**
         * An Async wrapper for CreateCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCaseRequestT = Model::CreateCaseRequest>
        void CreateCaseAsync(const CreateCaseRequestT& request, const CreateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::CreateCase, request, handler, context);
        }

        /**
         * <p>Creates a new case rule. In the Amazon Connect admin website, case rules are
         * known as <i>case field conditions</i>. For more information about case field
         * conditions, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
         * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateCaseRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCaseRuleOutcome CreateCaseRule(const Model::CreateCaseRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateCaseRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCaseRuleRequestT = Model::CreateCaseRuleRequest>
        Model::CreateCaseRuleOutcomeCallable CreateCaseRuleCallable(const CreateCaseRuleRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::CreateCaseRule, request);
        }

        /**
         * An Async wrapper for CreateCaseRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCaseRuleRequestT = Model::CreateCaseRuleRequest>
        void CreateCaseRuleAsync(const CreateCaseRuleRequestT& request, const CreateCaseRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::CreateCaseRule, request, handler, context);
        }

        /**
         * <p>Creates a domain, which is a container for all case data, such as cases,
         * fields, templates and layouts. Each Amazon Connect instance can be associated
         * with only one Cases domain.</p>  <p>This will not associate your
         * connect instance to Cases domain. Instead, use the Amazon Connect <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_CreateIntegrationAssociation.html">CreateIntegrationAssociation</a>
         * API. You need specific IAM permissions to successfully associate the Cases
         * domain. For more information, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/required-permissions-iam-cases.html#onboard-cases-iam">Onboard
         * to Cases</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::CreateDomain, request);
        }

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::CreateDomain, request, handler, context);
        }

        /**
         * <p>Creates a field in the Cases domain. This field is used to define the case
         * object model (that is, defines what data can be captured on cases) in a Cases
         * domain. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateField">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFieldOutcome CreateField(const Model::CreateFieldRequest& request) const;

        /**
         * A Callable wrapper for CreateField that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFieldRequestT = Model::CreateFieldRequest>
        Model::CreateFieldOutcomeCallable CreateFieldCallable(const CreateFieldRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::CreateField, request);
        }

        /**
         * An Async wrapper for CreateField that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFieldRequestT = Model::CreateFieldRequest>
        void CreateFieldAsync(const CreateFieldRequestT& request, const CreateFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::CreateField, request, handler, context);
        }

        /**
         * <p>Creates a layout in the Cases domain. Layouts define the following
         * configuration in the top section and More Info tab of the Cases user
         * interface:</p> <ul> <li> <p>Fields to display to the users</p> </li> <li>
         * <p>Field ordering</p> </li> </ul>  <p>Title and Status fields cannot be
         * part of layouts since they are not configurable.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateLayout">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLayoutOutcome CreateLayout(const Model::CreateLayoutRequest& request) const;

        /**
         * A Callable wrapper for CreateLayout that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLayoutRequestT = Model::CreateLayoutRequest>
        Model::CreateLayoutOutcomeCallable CreateLayoutCallable(const CreateLayoutRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::CreateLayout, request);
        }

        /**
         * An Async wrapper for CreateLayout that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLayoutRequestT = Model::CreateLayoutRequest>
        void CreateLayoutAsync(const CreateLayoutRequestT& request, const CreateLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::CreateLayout, request, handler, context);
        }

        /**
         * <p>Creates a related item (comments, tasks, and contacts) and associates it with
         * a case.</p>  <ul> <li> <p>A Related Item is a resource that is associated
         * with a case. It may or may not have an external identifier linking it to an
         * external resource (for example, a <code>contactArn</code>). All Related Items
         * have their own internal identifier, the <code>relatedItemArn</code>. Examples of
         * related items include <code>comments</code> and <code>contacts</code>.</p> </li>
         * <li> <p>If you provide a value for <code>performedBy.userArn</code> you must
         * also have <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeUser.html">DescribeUser</a>
         * permission on the ARN of the user that you provide.</p> </li> <li> <p>The
         * <code>type</code> field is reserved for internal use only.</p> </li> </ul>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateRelatedItem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelatedItemOutcome CreateRelatedItem(const Model::CreateRelatedItemRequest& request) const;

        /**
         * A Callable wrapper for CreateRelatedItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRelatedItemRequestT = Model::CreateRelatedItemRequest>
        Model::CreateRelatedItemOutcomeCallable CreateRelatedItemCallable(const CreateRelatedItemRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::CreateRelatedItem, request);
        }

        /**
         * An Async wrapper for CreateRelatedItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRelatedItemRequestT = Model::CreateRelatedItemRequest>
        void CreateRelatedItemAsync(const CreateRelatedItemRequestT& request, const CreateRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::CreateRelatedItem, request, handler, context);
        }

        /**
         * <p>Creates a template in the Cases domain. This template is used to define the
         * case object model (that is, to define what data can be captured on cases) in a
         * Cases domain. A template must have a unique name within a domain, and it must
         * reference existing field IDs and layout IDs. Additionally, multiple fields with
         * same IDs are not allowed within the same Template. A template can be either
         * Active or Inactive, as indicated by its status. Inactive templates cannot be
         * used to create cases.</p> <p> Other template APIs are: </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_DeleteTemplate.html">DeleteTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_GetTemplate.html">GetTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_ListTemplates.html">ListTemplates</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_UpdateTemplate.html">UpdateTemplate</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const CreateTemplateRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::CreateTemplate, request);
        }

        /**
         * An Async wrapper for CreateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        void CreateTemplateAsync(const CreateTemplateRequestT& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::CreateTemplate, request, handler, context);
        }

        /**
         * <p> The DeleteCase API permanently deletes a case and all its associated
         * resources from the cases data store. After a successful deletion, you
         * cannot:</p> <ul> <li> <p>Retrieve related items</p> </li> <li> <p>Access audit
         * history</p> </li> <li> <p>Perform any operations that require the CaseID</p>
         * </li> </ul>  <p>This action is irreversible. Once you delete a case,
         * you cannot recover its data.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/DeleteCase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCaseOutcome DeleteCase(const Model::DeleteCaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCaseRequestT = Model::DeleteCaseRequest>
        Model::DeleteCaseOutcomeCallable DeleteCaseCallable(const DeleteCaseRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::DeleteCase, request);
        }

        /**
         * An Async wrapper for DeleteCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCaseRequestT = Model::DeleteCaseRequest>
        void DeleteCaseAsync(const DeleteCaseRequestT& request, const DeleteCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::DeleteCase, request, handler, context);
        }

        /**
         * <p>Deletes a case rule. In the Amazon Connect admin website, case rules are
         * known as <i>case field conditions</i>. For more information about case field
         * conditions, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
         * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/DeleteCaseRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCaseRuleOutcome DeleteCaseRule(const Model::DeleteCaseRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteCaseRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCaseRuleRequestT = Model::DeleteCaseRuleRequest>
        Model::DeleteCaseRuleOutcomeCallable DeleteCaseRuleCallable(const DeleteCaseRuleRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::DeleteCaseRule, request);
        }

        /**
         * An Async wrapper for DeleteCaseRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCaseRuleRequestT = Model::DeleteCaseRuleRequest>
        void DeleteCaseRuleAsync(const DeleteCaseRuleRequestT& request, const DeleteCaseRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::DeleteCaseRule, request, handler, context);
        }

        /**
         * <p>Deletes a Cases domain.</p>  <p>After deleting your domain you must
         * disassociate the deleted domain from your Amazon Connect instance with another
         * API call before being able to use Cases again with this Amazon Connect instance.
         * See <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteIntegrationAssociation.html">DeleteIntegrationAssociation</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::DeleteDomain, request);
        }

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::DeleteDomain, request, handler, context);
        }

        /**
         * <p>Deletes a field from a cases template. You can delete up to 100 fields per
         * domain.</p> <p>After a field is deleted:</p> <ul> <li> <p>You can still retrieve
         * the field by calling <code>BatchGetField</code>.</p> </li> <li> <p>You cannot
         * update a deleted field by calling <code>UpdateField</code>; it throws a
         * <code>ValidationException</code>.</p> </li> <li> <p>Deleted fields are not
         * included in the <code>ListFields</code> response.</p> </li> <li> <p>Calling
         * <code>CreateCase</code> with a deleted field throws a
         * <code>ValidationException</code> denoting which field IDs in the request have
         * been deleted.</p> </li> <li> <p>Calling <code>GetCase</code> with a deleted
         * field ID returns the deleted field's value if one exists.</p> </li> <li>
         * <p>Calling <code>UpdateCase</code> with a deleted field ID throws a
         * <code>ValidationException</code> if the case does not already contain a value
         * for the deleted field. Otherwise it succeeds, allowing you to update or remove
         * (using <code>emptyValue: {}</code>) the field's value from the case.</p> </li>
         * <li> <p> <code>GetTemplate</code> does not return field IDs for deleted
         * fields.</p> </li> <li> <p> <code>GetLayout</code> does not return field IDs for
         * deleted fields.</p> </li> <li> <p>Calling <code>SearchCases</code> with the
         * deleted field ID as a filter returns any cases that have a value for the deleted
         * field that matches the filter criteria.</p> </li> <li> <p>Calling
         * <code>SearchCases</code> with a <code>searchTerm</code> value that matches a
         * deleted field's value on a case returns the case in the response.</p> </li> <li>
         * <p>Calling <code>BatchPutFieldOptions</code> with a deleted field ID throw a
         * <code>ValidationException</code>.</p> </li> <li> <p>Calling
         * <code>GetCaseEventConfiguration</code> does not return field IDs for deleted
         * fields.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/DeleteField">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFieldOutcome DeleteField(const Model::DeleteFieldRequest& request) const;

        /**
         * A Callable wrapper for DeleteField that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFieldRequestT = Model::DeleteFieldRequest>
        Model::DeleteFieldOutcomeCallable DeleteFieldCallable(const DeleteFieldRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::DeleteField, request);
        }

        /**
         * An Async wrapper for DeleteField that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFieldRequestT = Model::DeleteFieldRequest>
        void DeleteFieldAsync(const DeleteFieldRequestT& request, const DeleteFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::DeleteField, request, handler, context);
        }

        /**
         * <p>Deletes a layout from a cases template. You can delete up to 100 layouts per
         * domain.</p> <p>After a layout is deleted:</p> <ul> <li> <p>You can still
         * retrieve the layout by calling <code>GetLayout</code>.</p> </li> <li> <p>You
         * cannot update a deleted layout by calling <code>UpdateLayout</code>; it throws a
         * <code>ValidationException</code>.</p> </li> <li> <p>Deleted layouts are not
         * included in the <code>ListLayouts</code> response.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/DeleteLayout">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLayoutOutcome DeleteLayout(const Model::DeleteLayoutRequest& request) const;

        /**
         * A Callable wrapper for DeleteLayout that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLayoutRequestT = Model::DeleteLayoutRequest>
        Model::DeleteLayoutOutcomeCallable DeleteLayoutCallable(const DeleteLayoutRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::DeleteLayout, request);
        }

        /**
         * An Async wrapper for DeleteLayout that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLayoutRequestT = Model::DeleteLayoutRequest>
        void DeleteLayoutAsync(const DeleteLayoutRequestT& request, const DeleteLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::DeleteLayout, request, handler, context);
        }

        /**
         * <p>Deletes the related item resource under a case.</p>  <p>This API cannot
         * be used on a FILE type related attachment. To delete this type of file, use the
         * <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DeleteAttachedFile.html">DeleteAttachedFile</a>
         * API</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/DeleteRelatedItem">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRelatedItemOutcome DeleteRelatedItem(const Model::DeleteRelatedItemRequest& request) const;

        /**
         * A Callable wrapper for DeleteRelatedItem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRelatedItemRequestT = Model::DeleteRelatedItemRequest>
        Model::DeleteRelatedItemOutcomeCallable DeleteRelatedItemCallable(const DeleteRelatedItemRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::DeleteRelatedItem, request);
        }

        /**
         * An Async wrapper for DeleteRelatedItem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRelatedItemRequestT = Model::DeleteRelatedItemRequest>
        void DeleteRelatedItemAsync(const DeleteRelatedItemRequestT& request, const DeleteRelatedItemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::DeleteRelatedItem, request, handler, context);
        }

        /**
         * <p>Deletes a cases template. You can delete up to 100 templates per domain.</p>
         * <p>After a cases template is deleted:</p> <ul> <li> <p>You can still retrieve
         * the template by calling <code>GetTemplate</code>.</p> </li> <li> <p>You cannot
         * update the template. </p> </li> <li> <p>You cannot create a case by using the
         * deleted template.</p> </li> <li> <p>Deleted templates are not included in the
         * <code>ListTemplates</code> response.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/DeleteTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        Model::DeleteTemplateOutcomeCallable DeleteTemplateCallable(const DeleteTemplateRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::DeleteTemplate, request);
        }

        /**
         * An Async wrapper for DeleteTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        void DeleteTemplateAsync(const DeleteTemplateRequestT& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::DeleteTemplate, request, handler, context);
        }

        /**
         * <p>Returns information about a specific case if it exists. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetCase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseOutcome GetCase(const Model::GetCaseRequest& request) const;

        /**
         * A Callable wrapper for GetCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCaseRequestT = Model::GetCaseRequest>
        Model::GetCaseOutcomeCallable GetCaseCallable(const GetCaseRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::GetCase, request);
        }

        /**
         * An Async wrapper for GetCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCaseRequestT = Model::GetCaseRequest>
        void GetCaseAsync(const GetCaseRequestT& request, const GetCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::GetCase, request, handler, context);
        }

        /**
         * <p>Returns the audit history about a specific case if it exists.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetCaseAuditEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseAuditEventsOutcome GetCaseAuditEvents(const Model::GetCaseAuditEventsRequest& request) const;

        /**
         * A Callable wrapper for GetCaseAuditEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCaseAuditEventsRequestT = Model::GetCaseAuditEventsRequest>
        Model::GetCaseAuditEventsOutcomeCallable GetCaseAuditEventsCallable(const GetCaseAuditEventsRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::GetCaseAuditEvents, request);
        }

        /**
         * An Async wrapper for GetCaseAuditEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCaseAuditEventsRequestT = Model::GetCaseAuditEventsRequest>
        void GetCaseAuditEventsAsync(const GetCaseAuditEventsRequestT& request, const GetCaseAuditEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::GetCaseAuditEvents, request, handler, context);
        }

        /**
         * <p>Returns the case event publishing configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetCaseEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCaseEventConfigurationOutcome GetCaseEventConfiguration(const Model::GetCaseEventConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetCaseEventConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCaseEventConfigurationRequestT = Model::GetCaseEventConfigurationRequest>
        Model::GetCaseEventConfigurationOutcomeCallable GetCaseEventConfigurationCallable(const GetCaseEventConfigurationRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::GetCaseEventConfiguration, request);
        }

        /**
         * An Async wrapper for GetCaseEventConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCaseEventConfigurationRequestT = Model::GetCaseEventConfigurationRequest>
        void GetCaseEventConfigurationAsync(const GetCaseEventConfigurationRequestT& request, const GetCaseEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::GetCaseEventConfiguration, request, handler, context);
        }

        /**
         * <p>Returns information about a specific domain if it exists. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;

        /**
         * A Callable wrapper for GetDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainRequestT = Model::GetDomainRequest>
        Model::GetDomainOutcomeCallable GetDomainCallable(const GetDomainRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::GetDomain, request);
        }

        /**
         * An Async wrapper for GetDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainRequestT = Model::GetDomainRequest>
        void GetDomainAsync(const GetDomainRequestT& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::GetDomain, request, handler, context);
        }

        /**
         * <p>Returns the details for the requested layout.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetLayout">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLayoutOutcome GetLayout(const Model::GetLayoutRequest& request) const;

        /**
         * A Callable wrapper for GetLayout that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLayoutRequestT = Model::GetLayoutRequest>
        Model::GetLayoutOutcomeCallable GetLayoutCallable(const GetLayoutRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::GetLayout, request);
        }

        /**
         * An Async wrapper for GetLayout that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLayoutRequestT = Model::GetLayoutRequest>
        void GetLayoutAsync(const GetLayoutRequestT& request, const GetLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::GetLayout, request, handler, context);
        }

        /**
         * <p>Returns the details for the requested template. Other template APIs are: </p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateTemplate.html">CreateTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_DeleteTemplate.html">DeleteTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_ListTemplates.html">ListTemplates</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_UpdateTemplate.html">UpdateTemplate</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTemplateRequestT = Model::GetTemplateRequest>
        Model::GetTemplateOutcomeCallable GetTemplateCallable(const GetTemplateRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::GetTemplate, request);
        }

        /**
         * An Async wrapper for GetTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTemplateRequestT = Model::GetTemplateRequest>
        void GetTemplateAsync(const GetTemplateRequestT& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::GetTemplate, request, handler, context);
        }

        /**
         * <p>Lists all case rules in a Cases domain. In the Amazon Connect admin website,
         * case rules are known as <i>case field conditions</i>. For more information about
         * case field conditions, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
         * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListCaseRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCaseRulesOutcome ListCaseRules(const Model::ListCaseRulesRequest& request) const;

        /**
         * A Callable wrapper for ListCaseRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCaseRulesRequestT = Model::ListCaseRulesRequest>
        Model::ListCaseRulesOutcomeCallable ListCaseRulesCallable(const ListCaseRulesRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::ListCaseRules, request);
        }

        /**
         * An Async wrapper for ListCaseRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCaseRulesRequestT = Model::ListCaseRulesRequest>
        void ListCaseRulesAsync(const ListCaseRulesRequestT& request, const ListCaseRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::ListCaseRules, request, handler, context);
        }

        /**
         * <p>Lists cases for a given contact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListCasesForContact">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCasesForContactOutcome ListCasesForContact(const Model::ListCasesForContactRequest& request) const;

        /**
         * A Callable wrapper for ListCasesForContact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCasesForContactRequestT = Model::ListCasesForContactRequest>
        Model::ListCasesForContactOutcomeCallable ListCasesForContactCallable(const ListCasesForContactRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::ListCasesForContact, request);
        }

        /**
         * An Async wrapper for ListCasesForContact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCasesForContactRequestT = Model::ListCasesForContactRequest>
        void ListCasesForContactAsync(const ListCasesForContactRequestT& request, const ListCasesForContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::ListCasesForContact, request, handler, context);
        }

        /**
         * <p>Lists all cases domains in the Amazon Web Services account. Each list item is
         * a condensed summary object of the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request = {}) const
        {
            return SubmitCallable(&ConnectCasesClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListDomainsRequestT& request = {}) const
        {
            return SubmitAsync(&ConnectCasesClient::ListDomains, request, handler, context);
        }

        /**
         * <p>Lists all of the field options for a field identifier in the domain.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListFieldOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldOptionsOutcome ListFieldOptions(const Model::ListFieldOptionsRequest& request) const;

        /**
         * A Callable wrapper for ListFieldOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFieldOptionsRequestT = Model::ListFieldOptionsRequest>
        Model::ListFieldOptionsOutcomeCallable ListFieldOptionsCallable(const ListFieldOptionsRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::ListFieldOptions, request);
        }

        /**
         * An Async wrapper for ListFieldOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFieldOptionsRequestT = Model::ListFieldOptionsRequest>
        void ListFieldOptionsAsync(const ListFieldOptionsRequestT& request, const ListFieldOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::ListFieldOptions, request, handler, context);
        }

        /**
         * <p>Lists all fields in a Cases domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListFields">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFieldsOutcome ListFields(const Model::ListFieldsRequest& request) const;

        /**
         * A Callable wrapper for ListFields that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFieldsRequestT = Model::ListFieldsRequest>
        Model::ListFieldsOutcomeCallable ListFieldsCallable(const ListFieldsRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::ListFields, request);
        }

        /**
         * An Async wrapper for ListFields that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFieldsRequestT = Model::ListFieldsRequest>
        void ListFieldsAsync(const ListFieldsRequestT& request, const ListFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::ListFields, request, handler, context);
        }

        /**
         * <p>Lists all layouts in the given cases domain. Each list item is a condensed
         * summary object of the layout.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListLayouts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLayoutsOutcome ListLayouts(const Model::ListLayoutsRequest& request) const;

        /**
         * A Callable wrapper for ListLayouts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLayoutsRequestT = Model::ListLayoutsRequest>
        Model::ListLayoutsOutcomeCallable ListLayoutsCallable(const ListLayoutsRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::ListLayouts, request);
        }

        /**
         * An Async wrapper for ListLayouts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLayoutsRequestT = Model::ListLayoutsRequest>
        void ListLayoutsAsync(const ListLayoutsRequestT& request, const ListLayoutsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::ListLayouts, request, handler, context);
        }

        /**
         * <p>Lists tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists all of the templates in a Cases domain. Each list item is a condensed
         * summary object of the template. </p> <p> Other template APIs are: </p> <ul> <li>
         * <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateTemplate.html">CreateTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_DeleteTemplate.html">DeleteTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_GetTemplate.html">GetTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_UpdateTemplate.html">UpdateTemplate</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const ListTemplatesRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::ListTemplates, request);
        }

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        void ListTemplatesAsync(const ListTemplatesRequestT& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::ListTemplates, request, handler, context);
        }

        /**
         * <p>Adds case event publishing configuration. For a complete list of fields you
         * can add to the event message, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-fields.html">Create
         * case fields</a> in the <i>Amazon Connect Administrator Guide</i> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/PutCaseEventConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutCaseEventConfigurationOutcome PutCaseEventConfiguration(const Model::PutCaseEventConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutCaseEventConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutCaseEventConfigurationRequestT = Model::PutCaseEventConfigurationRequest>
        Model::PutCaseEventConfigurationOutcomeCallable PutCaseEventConfigurationCallable(const PutCaseEventConfigurationRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::PutCaseEventConfiguration, request);
        }

        /**
         * An Async wrapper for PutCaseEventConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutCaseEventConfigurationRequestT = Model::PutCaseEventConfigurationRequest>
        void PutCaseEventConfigurationAsync(const PutCaseEventConfigurationRequestT& request, const PutCaseEventConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::PutCaseEventConfiguration, request, handler, context);
        }

        /**
         * <p>Searches for cases within their associated Cases domain. Search results are
         * returned as a paginated list of abridged case documents.</p>  <p>For
         * <code>customer_id</code> you must provide the full customer profile ARN in this
         * format: <code> arn:aws:profile:your AWS Region:your AWS account
         * ID:domains/profiles domain name/profiles/profile ID</code>. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchCases">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchCasesOutcome SearchCases(const Model::SearchCasesRequest& request) const;

        /**
         * A Callable wrapper for SearchCases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchCasesRequestT = Model::SearchCasesRequest>
        Model::SearchCasesOutcomeCallable SearchCasesCallable(const SearchCasesRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::SearchCases, request);
        }

        /**
         * An Async wrapper for SearchCases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchCasesRequestT = Model::SearchCasesRequest>
        void SearchCasesAsync(const SearchCasesRequestT& request, const SearchCasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::SearchCases, request, handler, context);
        }

        /**
         * <p>Searches for related items that are associated with a case.</p>  <p>If
         * no filters are provided, this returns all related items associated with a
         * case.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SearchRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchRelatedItemsOutcome SearchRelatedItems(const Model::SearchRelatedItemsRequest& request) const;

        /**
         * A Callable wrapper for SearchRelatedItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchRelatedItemsRequestT = Model::SearchRelatedItemsRequest>
        Model::SearchRelatedItemsOutcomeCallable SearchRelatedItemsCallable(const SearchRelatedItemsRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::SearchRelatedItems, request);
        }

        /**
         * An Async wrapper for SearchRelatedItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchRelatedItemsRequestT = Model::SearchRelatedItemsRequest>
        void SearchRelatedItemsAsync(const SearchRelatedItemsRequestT& request, const SearchRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::SearchRelatedItems, request, handler, context);
        }

        /**
         * <p>Adds tags to a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::TagResource, request, handler, context);
        }

        /**
         * <p>Untags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::UntagResource, request, handler, context);
        }

        /**
         * <p> <p>If you provide a value for <code>PerformedBy.UserArn</code> you
         * must also have <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_DescribeUser.html">connect:DescribeUser</a>
         * permission on the User ARN resource that you provide</p>  <p>Updates the
         * values of fields on a case. Fields to be updated are received as an array of
         * id/value pairs identical to the <code>CreateCase</code> input .</p> <p>If the
         * action is successful, the service sends back an HTTP 200 response with an empty
         * HTTP body.</p></p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateCase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCaseOutcome UpdateCase(const Model::UpdateCaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateCase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCaseRequestT = Model::UpdateCaseRequest>
        Model::UpdateCaseOutcomeCallable UpdateCaseCallable(const UpdateCaseRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::UpdateCase, request);
        }

        /**
         * An Async wrapper for UpdateCase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCaseRequestT = Model::UpdateCaseRequest>
        void UpdateCaseAsync(const UpdateCaseRequestT& request, const UpdateCaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::UpdateCase, request, handler, context);
        }

        /**
         * <p>Updates a case rule. In the Amazon Connect admin website, case rules are
         * known as <i>case field conditions</i>. For more information about case field
         * conditions, see <a
         * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
         * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateCaseRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCaseRuleOutcome UpdateCaseRule(const Model::UpdateCaseRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateCaseRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCaseRuleRequestT = Model::UpdateCaseRuleRequest>
        Model::UpdateCaseRuleOutcomeCallable UpdateCaseRuleCallable(const UpdateCaseRuleRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::UpdateCaseRule, request);
        }

        /**
         * An Async wrapper for UpdateCaseRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCaseRuleRequestT = Model::UpdateCaseRuleRequest>
        void UpdateCaseRuleAsync(const UpdateCaseRuleRequestT& request, const UpdateCaseRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::UpdateCaseRule, request, handler, context);
        }

        /**
         * <p>Updates the properties of an existing field. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateField">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFieldOutcome UpdateField(const Model::UpdateFieldRequest& request) const;

        /**
         * A Callable wrapper for UpdateField that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFieldRequestT = Model::UpdateFieldRequest>
        Model::UpdateFieldOutcomeCallable UpdateFieldCallable(const UpdateFieldRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::UpdateField, request);
        }

        /**
         * An Async wrapper for UpdateField that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFieldRequestT = Model::UpdateFieldRequest>
        void UpdateFieldAsync(const UpdateFieldRequestT& request, const UpdateFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::UpdateField, request, handler, context);
        }

        /**
         * <p>Updates the attributes of an existing layout.</p> <p>If the action is
         * successful, the service sends back an HTTP 200 response with an empty HTTP
         * body.</p> <p>A <code>ValidationException</code> is returned when you add
         * non-existent <code>fieldIds</code> to a layout.</p>  <p>Title and Status
         * fields cannot be part of layouts because they are not configurable.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateLayout">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLayoutOutcome UpdateLayout(const Model::UpdateLayoutRequest& request) const;

        /**
         * A Callable wrapper for UpdateLayout that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLayoutRequestT = Model::UpdateLayoutRequest>
        Model::UpdateLayoutOutcomeCallable UpdateLayoutCallable(const UpdateLayoutRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::UpdateLayout, request);
        }

        /**
         * An Async wrapper for UpdateLayout that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLayoutRequestT = Model::UpdateLayoutRequest>
        void UpdateLayoutAsync(const UpdateLayoutRequestT& request, const UpdateLayoutResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::UpdateLayout, request, handler, context);
        }

        /**
         * <p>Updates the attributes of an existing template. The template attributes that
         * can be modified include <code>name</code>, <code>description</code>,
         * <code>layoutConfiguration</code>, <code>requiredFields</code>, and
         * <code>status</code>. At least one of these attributes must not be null. If a
         * null value is provided for a given attribute, that attribute is ignored and its
         * current value is preserved.</p> <p>Other template APIs are:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_CreateTemplate.html">CreateTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_DeleteTemplate.html">DeleteTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_GetTemplate.html">GetTemplate</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_connect-cases_ListTemplates.html">ListTemplates</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const UpdateTemplateRequestT& request) const
        {
            return SubmitCallable(&ConnectCasesClient::UpdateTemplate, request);
        }

        /**
         * An Async wrapper for UpdateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        void UpdateTemplateAsync(const UpdateTemplateRequestT& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConnectCasesClient::UpdateTemplate, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConnectCasesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConnectCasesClient>;
      void init(const ConnectCasesClientConfiguration& clientConfiguration);

      ConnectCasesClientConfiguration m_clientConfiguration;
      std::shared_ptr<ConnectCasesEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConnectCases
} // namespace Aws
