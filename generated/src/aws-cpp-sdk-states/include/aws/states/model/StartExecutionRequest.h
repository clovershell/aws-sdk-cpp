﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class StartExecutionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API StartExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartExecution"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p> <p>The
     * <code>stateMachineArn</code> parameter accepts one of the following inputs:</p>
     * <ul> <li> <p> <b>An unqualified state machine ARN</b> – Refers to a state
     * machine ARN that isn't qualified with a version or alias ARN. The following is
     * an example of an unqualified state machine ARN.</p> <p>
     * <code>arn:&lt;partition&gt;:states:&lt;region&gt;:&lt;account-id&gt;:stateMachine:&lt;myStateMachine&gt;</code>
     * </p> <p>Step Functions doesn't associate state machine executions that you start
     * with an unqualified ARN with a version. This is true even if that version uses
     * the same revision that the execution used.</p> </li> <li> <p> <b>A state machine
     * version ARN</b> – Refers to a version ARN, which is a combination of state
     * machine ARN and the version number separated by a colon (:). The following is an
     * example of the ARN for version 10. </p> <p>
     * <code>arn:&lt;partition&gt;:states:&lt;region&gt;:&lt;account-id&gt;:stateMachine:&lt;myStateMachine&gt;:10</code>
     * </p> <p>Step Functions doesn't associate executions that you start with a
     * version ARN with any aliases that point to that version.</p> </li> <li> <p> <b>A
     * state machine alias ARN</b> – Refers to an alias ARN, which is a combination of
     * state machine ARN and the alias name separated by a colon (:). The following is
     * an example of the ARN for an alias named <code>PROD</code>.</p> <p>
     * <code>arn:&lt;partition&gt;:states:&lt;region&gt;:&lt;account-id&gt;:stateMachine:&lt;myStateMachine:PROD&gt;</code>
     * </p> <p>Step Functions associates executions that you start with an alias ARN
     * with that alias and the state machine version used for that execution.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    StartExecutionRequest& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional name of the execution. This name must be unique for your Amazon Web
     * Services account, Region, and state machine for 90 days. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits.html#service-limits-state-machine-executions">
     * Limits Related to State Machine Executions</a> in the <i>Step Functions
     * Developer Guide</i>.</p> <p>If you don't provide a name for the execution, Step
     * Functions automatically generates a universally unique identifier (UUID) as the
     * execution name.</p> <p>A name must <i>not</i> contain:</p> <ul> <li> <p>white
     * space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code> </p> </li> <li>
     * <p>wildcard characters <code>? *</code> </p> </li> <li> <p>special characters
     * <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li> <li> <p>control
     * characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>,
     * <code>U+FFFE-FFFF</code>)</p> </li> <li> <p>surrogates
     * (<code>U+D800-DFFF</code>)</p> </li> <li> <p>invalid characters (<code>
     * U+10FFFF</code>)</p> </li> </ul> <p>To enable logging with CloudWatch Logs, the
     * name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartExecutionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"{\"first_name\" : \"Alejandro\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"{}"</code> </p>  <p>Length constraints apply
     * to the payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    StartExecutionRequest& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>  <p> For X-Ray traces, all Amazon Web Services
     * services use the <code>X-Amzn-Trace-Id</code> header from the HTTP request.
     * Using the header is the preferred mechanism to identify a trace.
     * <code>StartExecution</code> and <code>StartSyncExecution</code> API operations
     * can also use <code>traceHeader</code> from the body of the request payload. If
     * <b>both</b> sources are provided, Step Functions will use the <b>header
     * value</b> (preferred) over the value in the request body. </p> 
     */
    inline const Aws::String& GetTraceHeader() const { return m_traceHeader; }
    inline bool TraceHeaderHasBeenSet() const { return m_traceHeaderHasBeenSet; }
    template<typename TraceHeaderT = Aws::String>
    void SetTraceHeader(TraceHeaderT&& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = std::forward<TraceHeaderT>(value); }
    template<typename TraceHeaderT = Aws::String>
    StartExecutionRequest& WithTraceHeader(TraceHeaderT&& value) { SetTraceHeader(std::forward<TraceHeaderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_traceHeader;
    bool m_traceHeaderHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
