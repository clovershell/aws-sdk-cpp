﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ChallengeNameType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-idp/model/AuthenticationResultType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{
  /**
   * <p>Initiates the authentication response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/InitiateAuthResponse">AWS
   * API Reference</a></p>
   */
  class InitiateAuthResult
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API InitiateAuthResult();
    AWS_COGNITOIDENTITYPROVIDER_API InitiateAuthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITYPROVIDER_API InitiateAuthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the challenge that you're responding to with this call. This name
     * is returned in the <code>InitiateAuth</code> response if you must pass another
     * challenge.</p> <p>Valid values include the following:</p>  <p>All of the
     * following challenges require <code>USERNAME</code> and <code>SECRET_HASH</code>
     * (if applicable) in the parameters.</p>  <ul> <li> <p>
     * <code>WEB_AUTHN</code>: Respond to the challenge with the results of a
     * successful authentication with a passkey, or webauthN, factor. These are
     * typically biometric devices or security keys.</p> </li> <li> <p>
     * <code>PASSWORD</code>: Respond with <code>USER_PASSWORD_AUTH</code> parameters:
     * <code>USERNAME</code> (required), <code>PASSWORD</code> (required),
     * <code>SECRET_HASH</code> (required if the app client is configured with a client
     * secret), <code>DEVICE_KEY</code>.</p> </li> <li> <p> <code>PASSWORD_SRP</code>:
     * Respond with <code>USER_SRP_AUTH</code> parameters: <code>USERNAME</code>
     * (required), <code>SRP_A</code> (required), <code>SECRET_HASH</code> (required if
     * the app client is configured with a client secret), <code>DEVICE_KEY</code>.</p>
     * </li> <li> <p> <code>SELECT_CHALLENGE</code>: Respond to the challenge with
     * <code>USERNAME</code> and an <code>ANSWER</code> that matches one of the
     * challenge types in the <code>AvailableChallenges</code> response parameter.</p>
     * </li> <li> <p> <code>SMS_MFA</code>: Next challenge is to supply an
     * <code>SMS_MFA_CODE</code>that your user pool delivered in an SMS message.</p>
     * </li> <li> <p> <code>EMAIL_OTP</code>: Next challenge is to supply an
     * <code>EMAIL_OTP_CODE</code> that your user pool delivered in an email
     * message.</p> </li> <li> <p> <code>PASSWORD_VERIFIER</code>: Next challenge is to
     * supply <code>PASSWORD_CLAIM_SIGNATURE</code>,
     * <code>PASSWORD_CLAIM_SECRET_BLOCK</code>, and <code>TIMESTAMP</code> after the
     * client-side SRP calculations.</p> </li> <li> <p> <code>CUSTOM_CHALLENGE</code>:
     * This is returned if your custom authentication flow determines that the user
     * should pass another challenge before tokens are issued.</p> </li> <li> <p>
     * <code>DEVICE_SRP_AUTH</code>: If device tracking was activated on your user pool
     * and the previous challenges were passed, this challenge is returned so that
     * Amazon Cognito can start tracking this device.</p> </li> <li> <p>
     * <code>DEVICE_PASSWORD_VERIFIER</code>: Similar to
     * <code>PASSWORD_VERIFIER</code>, but for devices only.</p> </li> <li> <p>
     * <code>NEW_PASSWORD_REQUIRED</code>: For users who are required to change their
     * passwords after successful first login.</p> <p>Respond to this challenge with
     * <code>NEW_PASSWORD</code> and any required attributes that Amazon Cognito
     * returned in the <code>requiredAttributes</code> parameter. You can also set
     * values for attributes that aren't required by your user pool and that your app
     * client can write. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RespondToAuthChallenge.html">RespondToAuthChallenge</a>.</p>
     * <p>Amazon Cognito only returns this challenge for users who have temporary
     * passwords. Because of this, and because in some cases you can create users who
     * don't have values for required attributes, take care to collect and submit
     * required-attribute values for all users who don't have passwords. You can create
     * a user in the Amazon Cognito console without, for example, a required
     * <code>birthdate</code> attribute. The API response from Amazon Cognito won't
     * prompt you to submit a birthdate for the user if they don't have a password.</p>
     *  <p>In a <code>NEW_PASSWORD_REQUIRED</code> challenge response, you can't
     * modify a required attribute that already has a value. In
     * <code>RespondToAuthChallenge</code>, set a value for any keys that Amazon
     * Cognito returned in the <code>requiredAttributes</code> parameter, then use the
     * <code>UpdateUserAttributes</code> API operation to modify the value of any
     * additional attributes.</p>  </li> <li> <p> <code>MFA_SETUP</code>: For
     * users who are required to setup an MFA factor before they can sign in. The MFA
     * types activated for the user pool will be listed in the challenge parameters
     * <code>MFAS_CAN_SETUP</code> value. </p> <p> To set up software token MFA, use
     * the session returned here from <code>InitiateAuth</code> as an input to
     * <code>AssociateSoftwareToken</code>. Use the session returned by
     * <code>VerifySoftwareToken</code> as an input to
     * <code>RespondToAuthChallenge</code> with challenge name <code>MFA_SETUP</code>
     * to complete sign-in. To set up SMS MFA, an administrator should help the user to
     * add a phone number to their account, and then the user should call
     * <code>InitiateAuth</code> again to restart sign-in.</p> </li> </ul>
     */
    inline const ChallengeNameType& GetChallengeName() const{ return m_challengeName; }
    inline void SetChallengeName(const ChallengeNameType& value) { m_challengeName = value; }
    inline void SetChallengeName(ChallengeNameType&& value) { m_challengeName = std::move(value); }
    inline InitiateAuthResult& WithChallengeName(const ChallengeNameType& value) { SetChallengeName(value); return *this;}
    inline InitiateAuthResult& WithChallengeName(ChallengeNameType&& value) { SetChallengeName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session that should pass both ways in challenge-response calls to the
     * service. If the caller must pass another challenge, they return a session with
     * other challenge parameters. Include this session identifier in a
     * <code>RespondToAuthChallenge</code> API request.</p>
     */
    inline const Aws::String& GetSession() const{ return m_session; }
    inline void SetSession(const Aws::String& value) { m_session = value; }
    inline void SetSession(Aws::String&& value) { m_session = std::move(value); }
    inline void SetSession(const char* value) { m_session.assign(value); }
    inline InitiateAuthResult& WithSession(const Aws::String& value) { SetSession(value); return *this;}
    inline InitiateAuthResult& WithSession(Aws::String&& value) { SetSession(std::move(value)); return *this;}
    inline InitiateAuthResult& WithSession(const char* value) { SetSession(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The challenge parameters. These are returned in the <code>InitiateAuth</code>
     * response if you must pass another challenge. The responses in this parameter
     * should be used to compute inputs to the next call
     * (<code>RespondToAuthChallenge</code>). </p> <p>All challenges require
     * <code>USERNAME</code>. They also require <code>SECRET_HASH</code> if your app
     * client has a client secret.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChallengeParameters() const{ return m_challengeParameters; }
    inline void SetChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_challengeParameters = value; }
    inline void SetChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_challengeParameters = std::move(value); }
    inline InitiateAuthResult& WithChallengeParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetChallengeParameters(value); return *this;}
    inline InitiateAuthResult& WithChallengeParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetChallengeParameters(std::move(value)); return *this;}
    inline InitiateAuthResult& AddChallengeParameters(const Aws::String& key, const Aws::String& value) { m_challengeParameters.emplace(key, value); return *this; }
    inline InitiateAuthResult& AddChallengeParameters(Aws::String&& key, const Aws::String& value) { m_challengeParameters.emplace(std::move(key), value); return *this; }
    inline InitiateAuthResult& AddChallengeParameters(const Aws::String& key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }
    inline InitiateAuthResult& AddChallengeParameters(Aws::String&& key, Aws::String&& value) { m_challengeParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline InitiateAuthResult& AddChallengeParameters(const char* key, Aws::String&& value) { m_challengeParameters.emplace(key, std::move(value)); return *this; }
    inline InitiateAuthResult& AddChallengeParameters(Aws::String&& key, const char* value) { m_challengeParameters.emplace(std::move(key), value); return *this; }
    inline InitiateAuthResult& AddChallengeParameters(const char* key, const char* value) { m_challengeParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The result of the authentication response. This result is only returned if
     * the caller doesn't need to pass another challenge. If the caller does need to
     * pass another challenge before it gets tokens, <code>ChallengeName</code>,
     * <code>ChallengeParameters</code>, and <code>Session</code> are returned.</p>
     */
    inline const AuthenticationResultType& GetAuthenticationResult() const{ return m_authenticationResult; }
    inline void SetAuthenticationResult(const AuthenticationResultType& value) { m_authenticationResult = value; }
    inline void SetAuthenticationResult(AuthenticationResultType&& value) { m_authenticationResult = std::move(value); }
    inline InitiateAuthResult& WithAuthenticationResult(const AuthenticationResultType& value) { SetAuthenticationResult(value); return *this;}
    inline InitiateAuthResult& WithAuthenticationResult(AuthenticationResultType&& value) { SetAuthenticationResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This response parameter prompts a user to select from multiple available
     * challenges that they can complete authentication with. For example, they might
     * be able to continue with passwordless authentication or with a one-time password
     * from an SMS message.</p>
     */
    inline const Aws::Vector<ChallengeNameType>& GetAvailableChallenges() const{ return m_availableChallenges; }
    inline void SetAvailableChallenges(const Aws::Vector<ChallengeNameType>& value) { m_availableChallenges = value; }
    inline void SetAvailableChallenges(Aws::Vector<ChallengeNameType>&& value) { m_availableChallenges = std::move(value); }
    inline InitiateAuthResult& WithAvailableChallenges(const Aws::Vector<ChallengeNameType>& value) { SetAvailableChallenges(value); return *this;}
    inline InitiateAuthResult& WithAvailableChallenges(Aws::Vector<ChallengeNameType>&& value) { SetAvailableChallenges(std::move(value)); return *this;}
    inline InitiateAuthResult& AddAvailableChallenges(const ChallengeNameType& value) { m_availableChallenges.push_back(value); return *this; }
    inline InitiateAuthResult& AddAvailableChallenges(ChallengeNameType&& value) { m_availableChallenges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InitiateAuthResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InitiateAuthResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InitiateAuthResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ChallengeNameType m_challengeName;

    Aws::String m_session;

    Aws::Map<Aws::String, Aws::String> m_challengeParameters;

    AuthenticationResultType m_authenticationResult;

    Aws::Vector<ChallengeNameType> m_availableChallenges;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
