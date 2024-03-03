//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TelephonyUtilities_h
#define TelephonyUtilities_h

#import "CSDMessagingHandle.h"
#import "CSDMessagingMemberAssociationClaim.h"
#import "CSDMessagingVoucher.h"
#import "TUAnswerRequest.h"
#import "TUAudioController.h"
#import "TUAudioDeviceController.h"
#import "TUAudioFrequencyController.h"
#import "TUAudioRoute.h"
#import "TUAudioRouteCollectionKey.h"
#import "TUAudioSystemController.h"
#import "TUBatchFetchRequestProcessingResult.h"
#import "TUBusinessCallerItem.h"
#import "TUBusinessServicesMetadataCacheDataProvider.h"
#import "TUCTCapabilitiesState.h"
#import "TUCTCapabilityInfo.h"
#import "TUCall.h"
#import "TUCallCapabilities.h"
#import "TUCallCapabilitiesState.h"
#import "TUCallCapabilitiesXPCClient.h"
#import "TUCallCenter.h"
#import "TUCallContainer.h"
#import "TUCallDirectoryMetadataCacheDataProvider.h"
#import "TUCallDisplayContext.h"
#import "TUCallFilterController.h"
#import "TUCallGroup.h"
#import "TUCallHistoryControllerXPCClient.h"
#import "TUCallHistoryManager.h"
#import "TUCallHistoryManagerXPCClient.h"
#import "TUCallModel.h"
#import "TUCallNotificationManager.h"
#import "TUCallProvider.h"
#import "TUCallProviderManager.h"
#import "TUCallProviderManagerXPCClient.h"
#import "TUCallScreenShareAttributes.h"
#import "TUCallServicesClientCapabilities.h"
#import "TUCallServicesInterface.h"
#import "TUCallSoundPlayer.h"
#import "TUCallSoundPlayerDescriptor.h"
#import "TUCallUpdate.h"
#import "TUCaption.h"
#import "TUCloudCallingDevice.h"
#import "TUConfiguration.h"
#import "TUContactsDataProvider.h"
#import "TUContactsDataProviderAppleCareHandles.h"
#import "TUContactsDataProviderFetchRequest.h"
#import "TUContactsDataProviderResult.h"
#import "TUConversation.h"
#import "TUConversationActivity.h"
#import "TUConversationActivityContext.h"
#import "TUConversationActivityCreateSessionRequest.h"
#import "TUConversationActivityEvent.h"
#import "TUConversationActivityMetadata.h"
#import "TUConversationActivitySceneAssociationBehavior.h"
#import "TUConversationActivitySession.h"
#import "TUConversationActivitySessionContainer.h"
#import "TUConversationHandoffContext.h"
#import "TUConversationHandoffEligibility.h"
#import "TUConversationInvitationPreference.h"
#import "TUConversationLink.h"
#import "TUConversationManager.h"
#import "TUConversationManagerXPCClient.h"
#import "TUConversationMediaController.h"
#import "TUConversationMember.h"
#import "TUConversationMemberAssociation.h"
#import "TUConversationNotice.h"
#import "TUConversationParticipant.h"
#import "TUConversationParticipantAssociation.h"
#import "TUConversationParticipantCapabilities.h"
#import "TUConversationParticipantPresentationContext.h"
#import "TUConversationPresentationContext.h"
#import "TUConversationProvider.h"
#import "TUConversationProviderConfiguration.h"
#import "TUConversationProviderManager.h"
#import "TUConversationProviderManagerXPCClient.h"
#import "TUConversationReactionsController.h"
#import "TUConversationReport.h"
#import "TUConversationUnreliableMessengerConfig.h"
#import "TUConversationVirtualParticipant.h"
#import "TUConversationVirtualParticipantConfig.h"
#import "TUCoreTelephonyClient.h"
#import "TUDTMFSoundPlayer.h"
#import "TUDelegateController.h"
#import "TUDialAssist.h"
#import "TUDialRequest.h"
#import "TUDiscoverabilitySignal.h"
#import "TUDispatcher.h"
#import "TUDynamicCallDisplayContext.h"
#import "TUFeatureFlags.h"
#import "TUGeoLocationMetadataCacheDataProvider.h"
#import "TUHandle.h"
#import "TUHardwareControlsBroadcaster.h"
#import "TUICFInterface.h"
#import "TUICFQueryResult.h"
#import "TUIDSLookupManager.h"
#import "TUIntentController.h"
#import "TUJoinContinuityConversationRequest.h"
#import "TUJoinConversationRequest.h"
#import "TULabeledHandle.h"
#import "TULinkShareItem.h"
#import "TULocalNicknameInfo.h"
#import "TULocked.h"
#import "TULogging.h"
#import "TUMapsMetadataCacheDataProvider.h"
#import "TUMetadataCache.h"
#import "TUMetadataCacheDataProvider.h"
#import "TUMetadataDestinationID.h"
#import "TUMetadataItem.h"
#import "TUMomentDescriptor.h"
#import "TUMomentsCapabilities.h"
#import "TUMomentsController.h"
#import "TUMomentsControllerXPCClient.h"
#import "TUMomentsMessageDescriptor.h"
#import "TUMomentsMessageSendRequest.h"
#import "TUMomentsProvider.h"
#import "TUMomentsRawVideoMessageDescriptor.h"
#import "TUMutableCallContainer.h"
#import "TUMutableCallDisplayContext.h"
#import "TUMutableConversation.h"
#import "TUMutableConversationActivityCreateSessionRequest.h"
#import "TUMutableConversationActivitySession.h"
#import "TUMutableConversationParticipant.h"
#import "TUMutableConversationParticipantCapabilities.h"
#import "TUMutableParticipant.h"
#import "TUMutableRoute.h"
#import "TUNearbyConversationInfo.h"
#import "TUNearbyDeviceHandle.h"
#import "TUNearbyDeviceHandleCapabilities.h"
#import "TUNearbySuggestion.h"
#import "TUNearbySuggestionAdvertisement.h"
#import "TUNearbySuggestionResult.h"
#import "TUNeighborhoodActivityConduit.h"
#import "TUNeighborhoodActivityConduitXPCClient.h"
#import "TUNeighborhoodHandoffContext.h"
#import "TUNicknamesMetadataCacheDataProvider.h"
#import "TUNotifyObserver.h"
#import "TUOptionalObject.h"
#import "TUParticipant.h"
#import "TUPhoneNumber.h"
#import "TUPrivacyManager.h"
#import "TUPrivacyRule.h"
#import "TUProxyCall.h"
#import "TURTCCallReporter.h"
#import "TURemoteVideoClient.h"
#import "TURepeatingAction.h"
#import "TURepeatingActor.h"
#import "TUReplyWithMessageStore.h"
#import "TUReportingControllerXPCClient.h"
#import "TURoute.h"
#import "TURouteController.h"
#import "TUSandboxExtendedURL.h"
#import "TUScreenShareAttributes.h"
#import "TUScreeningRequest.h"
#import "TUSenderIdentity.h"
#import "TUSenderIdentityCapabilities.h"
#import "TUSenderIdentityCapabilitiesState.h"
#import "TUSenderIdentityClient.h"
#import "TUSoundPlayer.h"
#import "TUSplitSessionInfo.h"
#import "TUStringShareItem.h"
#import "TUSuggestionsMetadataCacheDataProvider.h"
#import "TUThumperCTCapabilitiesState.h"
#import "TUUIContext.h"
#import "TUUIXPCClientConnection.h"
#import "TUUIXPCHost.h"
#import "TUUIXPCHostConnection.h"
#import "TUUserConfiguration.h"
#import "TUUserNotificationProviderXPCClient.h"
#import "TUVideoCallAttributes.h"
#import "TUVideoDeviceController.h"
#import "TUVideoDeviceControllerProvider.h"
#import "TUVideoEffect.h"
#import "TUVoucher.h"
#import "TUVouchingEnablementImpl.h"
#import "AVCAudioPowerSpectrumMeterDelegate-Protocol.h"
#import "AVCRemoteVideoClientDelegate-Protocol.h"
#import "AVConferencePreviewClientDelegate-Protocol.h"
#import "IDSBatchIDQueryControllerDelegate-Protocol.h"
#import "IMNicknameListener-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "TUAudioDeviceControllerActions-Protocol.h"
#import "TUAudioDeviceControllerXPCServer-Protocol.h"
#import "TUBusinessCallerItem-Protocol.h"
#import "TUCallCapabilitiesXPCClient-Protocol.h"
#import "TUCallCapabilitiesXPCServer-Protocol.h"
#import "TUCallCapabilitiesXPCServerActions-Protocol.h"
#import "TUCallCenterXPCClient-Protocol.h"
#import "TUCallCenterXPCServer-Protocol.h"
#import "TUCallContainer-Protocol.h"
#import "TUCallFilterControllerActions-Protocol.h"
#import "TUCallFilterControllerXPCServer-Protocol.h"
#import "TUCallHistoryControllerDataSource-Protocol.h"
#import "TUCallHistoryControllerXPCClient-Protocol.h"
#import "TUCallHistoryControllerXPCServer-Protocol.h"
#import "TUCallHistoryManagerDataSource-Protocol.h"
#import "TUCallHistoryManagerXPCClient-Protocol.h"
#import "TUCallHistoryManagerXPCServer-Protocol.h"
#import "TUCallProviderManagerDataSource-Protocol.h"
#import "TUCallProviderManagerDataSourceDelegate-Protocol.h"
#import "TUCallProviderManagerXPCClient-Protocol.h"
#import "TUCallProviderManagerXPCServer-Protocol.h"
#import "TUCallRequest-Protocol.h"
#import "TUCallServicesClientCapabilitiesActions-Protocol.h"
#import "TUCallServicesClientCapabilitiesXPCServer-Protocol.h"
#import "TUCallServicesProxyCallActions-Protocol.h"
#import "TUCallServicesXPCClient-Protocol.h"
#import "TUCallServicesXPCServer-Protocol.h"
#import "TUConfiguration-Protocol.h"
#import "TUConfigurationDelegate-Protocol.h"
#import "TUContactProvider-Protocol.h"
#import "TUContactsDataSource-Protocol.h"
#import "TUConversationContactProvider-Protocol.h"
#import "TUConversationManagerDataSource-Protocol.h"
#import "TUConversationManagerDataSourceDelegate-Protocol.h"
#import "TUConversationManagerXPCClient-Protocol.h"
#import "TUConversationManagerXPCServer-Protocol.h"
#import "TUConversationMediaControllerDataSourceDelegate-Protocol.h"
#import "TUConversationMediaControllerXPCClient-Protocol.h"
#import "TUConversationMediaControllerXPCServer-Protocol.h"
#import "TUConversationMessagesGroupProviderXPCClient-Protocol.h"
#import "TUConversationMessagesGroupProviderXPCServer-Protocol.h"
#import "TUConversationNoticeProtocol-Protocol.h"
#import "TUConversationProviderManagerDataSource-Protocol.h"
#import "TUConversationProviderManagerXPCClient-Protocol.h"
#import "TUConversationProviderManagerXPCServer-Protocol.h"
#import "TUConversationReactionsControllerDataSourceDelegate-Protocol.h"
#import "TUConversationReactionsControllerXPCClient-Protocol.h"
#import "TUCoreTelephonyClient-Protocol.h"
#import "TUDelegate-Protocol.h"
#import "TUEmergencyCoreTelephonyClient-Protocol.h"
#import "TUFeatureFlags-Protocol.h"
#import "TUFilteredRequest-Protocol.h"
#import "TUHandleContactProvider-Protocol.h"
#import "TUIDSBatchIDQueryController-Protocol.h"
#import "TUIDSIDQueryController-Protocol.h"
#import "TUIDSLookup-Protocol.h"
#import "TUMetadataCacheDataProviderDelegate-Protocol.h"
#import "TUMomentsControllerDataSource-Protocol.h"
#import "TUMomentsControllerDataSourceDelegate-Protocol.h"
#import "TUMomentsControllerXPCClient-Protocol.h"
#import "TUMomentsControllerXPCServer-Protocol.h"
#import "TUMomentsSandboxingDataSource-Protocol.h"
#import "TUNeighborhoodActivityConduitXPCClient-Protocol.h"
#import "TUNeighborhoodActivityConduitXPCClientDelegate-Protocol.h"
#import "TUNeighborhoodActivityConduitXPCServer-Protocol.h"
#import "TUNotifyObserver-Protocol.h"
#import "TUPubliclyAccessibleCopying-Protocol.h"
#import "TURemoteVideoClient-Protocol.h"
#import "TUReportingControllerDataSource-Protocol.h"
#import "TUReportingControllerXPCServer-Protocol.h"
#import "TURouteControllerActions-Protocol.h"
#import "TURouteControllerXPCClient-Protocol.h"
#import "TURouteControllerXPCServer-Protocol.h"
#import "TUSanitizedCopying-Protocol.h"
#import "TUScreenShareAttributes-Protocol.h"
#import "TUSearchResult-Protocol.h"
#import "TUSearchResultData-Protocol.h"
#import "TUSecureCoding-Protocol.h"
#import "TUTTYCoreTelephonyClient-Protocol.h"
#import "TUTelephonySubscription-Protocol.h"
#import "TUUIDataSource-Protocol.h"
#import "TUUIXPCClient-Protocol.h"
#import "TUUIXPCHost-Protocol.h"
#import "TUUIXPCHostConnectionDelegate-Protocol.h"
#import "TUUserNotificationProviderDataSource-Protocol.h"
#import "TUUserNotificationsProviderXPCServer-Protocol.h"
#import "TUVideoDeviceControllerProvider-Protocol.h"
#import "TUVideoDeviceControllerProviderDelegate-Protocol.h"
#import "TUVideoEffectsProvider-Protocol.h"
#import "TUVideoRequest-Protocol.h"
#import "TUVouchingEnablement-Protocol.h"
#import "NSDictionary+QueryParameterSupport.h"
#import "NSURL+QueryParameters.h"
#import "CNLabeledValue+TUAdditions.h"
#import "NSXPCConnection+TUAdditions.h"
#import "CNContactStoreConfiguration+TUConversation.h"
#import "IDSIDQueryController+TUIDSLookupManager.h"
#import "IDSBatchIDQueryController+TUIDSLookupManager.h"
#import "CNContactStore+TUSearchUtilities.h"
#import "NSXPCInterface+TUUIXPCHostSupport.h"
#import "CNContact+TelephonyUtilities.h"
#import "NSURLComponents+TelephonyUtilities.h"
#import "NSUserActivity+TelephonyUtilities.h"
#import "NSUserDefaults+TelephonyUtilities.h"
#import "NSURLQueryItem+TelephonyUtilities.h"
#import "NSBundle+TelephonyUtilities.h"
#import "NSSet+TelephonyUtilities.h"
#import "NSCharacterSet+TelephonyUtilities.h"
#import "NSString+TelephonyUtilities.h"
#import "CTXPCServiceSubscriptionContext+TelephonyUtilities.h"
#import "NSData+TelephonyUtilities.h"
#import "NSUUID+TelephonyUtilities.h"
#import "NSArray+TelephonyUtilitiesAdditions.h"

#endif /* TelephonyUtilities_h */