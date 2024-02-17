//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CarouselServices_h
#define CarouselServices_h

#import "CSLInternalTapToRadarIgnorer.h"
#import "CSLOnWristClientExportedObject.h"
#import "CSLProcessCPUStatisticsSnapshot.h"
#import "CSLSActivatingUIAssertion.h"
#import "CSLSAlertSuppressionAssertion.h"
#import "CSLSAlertSuppressionClient.h"
#import "CSLSAlertSuppressionToken.h"
#import "CSLSAlertSuppressionWithAlertServiceNamesToken.h"
#import "CSLSAlertSuppressionWithReasonToken.h"
#import "CSLSAlwaysOnTapToWakeEvent.h"
#import "CSLSAppEvent.h"
#import "CSLSAppStateTransition.h"
#import "CSLSAppStats.h"
#import "CSLSAppStatsService.h"
#import "CSLSAppViewImageService.h"
#import "CSLSApplicationInfo.h"
#import "CSLSApplicationInfoService.h"
#import "CSLSApplicationLaunchSuppressionAssertion.h"
#import "CSLSBackgroundEligibilityService.h"
#import "CSLSBackgroundServiceConnection.h"
#import "CSLSBackgroundTaskRequest.h"
#import "CSLSBackgroundTaskRequestError.h"
#import "CSLSBackgroundTaskRequestService.h"
#import "CSLSBacklight.h"
#import "CSLSBacklightAssertion.h"
#import "CSLSBacklightAssertionBase.h"
#import "CSLSBacklightAssertionSpecification.h"
#import "CSLSBinaryTransitionStateMachine.h"
#import "CSLSBinaryTransitionStateMachineBlockDelegate.h"
#import "CSLSBinaryTransitionStateMachineConfiguration.h"
#import "CSLSBuddyAlertSuppressionAssertion.h"
#import "CSLSBuddyButtonRegistration.h"
#import "CSLSBuddyService.h"
#import "CSLSButtonHandler.h"
#import "CSLSButtonHandlerBridge.h"
#import "CSLSButtonListener.h"
#import "CSLSButtonListenerCache.h"
#import "CSLSButtonListenerExportedObject.h"
#import "CSLSButtonTapAssertion.h"
#import "CSLSButtonTapAssertionExportedObject.h"
#import "CSLSCompanionConnectionState.h"
#import "CSLSComplicationService.h"
#import "CSLSConcurrentObserverStore.h"
#import "CSLSConnectionState.h"
#import "CSLSConnectionStateObserver.h"
#import "CSLSConnectionStateOverrider.h"
#import "CSLSConnectionStateOverrides.h"
#import "CSLSConnectionStateXPCClient.h"
#import "CSLSConnectionStatusService.h"
#import "CSLSCoreAnalytics.h"
#import "CSLSDNDModeAssetNameProvider.h"
#import "CSLSDecoderUtility.h"
#import "CSLSDetent.h"
#import "CSLSDetentService.h"
#import "CSLSDetentServiceConnection.h"
#import "CSLSDetentsAssertion.h"
#import "CSLSDeviceOrientation.h"
#import "CSLSDisableInstantButtonTapAssertion.h"
#import "CSLSDisableStuckTouchDetectorAttribute.h"
#import "CSLSDisableTouchAttribute.h"
#import "CSLSDisableVSHMeasurementAttribute.h"
#import "CSLSDisconnectedAssetNameProvider.h"
#import "CSLSDisplayLayoutElement.h"
#import "CSLSDockAllowLaunchAssertion.h"
#import "CSLSDockAllowLaunchAssertionConnection.h"
#import "CSLSDockStatusService.h"
#import "CSLSDuetActivationOptions.h"
#import "CSLSDuetActivationService.h"
#import "CSLSDuetLaunchTestingService.h"
#import "CSLSEcoModeClient.h"
#import "CSLSEnableCrownRotateToWakeAttribute.h"
#import "CSLSEnableCrownRotateWhilePressedAttribute.h"
#import "CSLSInvalidatableBacklightAssertion.h"
#import "CSLSLaunchAlternateSystemAppOperation.h"
#import "CSLSLaunchServicesUtlities.h"
#import "CSLSLinkAction.h"
#import "CSLSLinkActionError.h"
#import "CSLSLinkActionService.h"
#import "CSLSLinkSuggestedActionsService.h"
#import "CSLSLiveSessionMetricsCollector.h"
#import "CSLSMigrationApp.h"
#import "CSLSMigrationAppBlockOperation.h"
#import "CSLSMobileKeyBag.h"
#import "CSLSMobileKeyBagState.h"
#import "CSLSModalAppAlertSuppressionAssertion.h"
#import "CSLSModalAppAlertSuppressionToken.h"
#import "CSLSModalAppService.h"
#import "CSLSModalAppServicePresentationOptions.h"
#import "CSLSModalAppSession.h"
#import "CSLSModalAppSessionConfiguration.h"
#import "CSLSModalAppSessionPresentationOptions.h"
#import "CSLSModalAppXPCClient.h"
#import "CSLSMutableCompanionConnectionState.h"
#import "CSLSMutableConnectionState.h"
#import "CSLSMutableConnectionStateOverrides.h"
#import "CSLSMutableMobileKeyBagState.h"
#import "CSLSMutableModalAppSessionConfiguration.h"
#import "CSLSMutableRadioConnectionState.h"
#import "CSLSMutableTelephonyConnectionState.h"
#import "CSLSMutableWifiConnectionState.h"
#import "CSLSNavigationService.h"
#import "CSLSNightstandSuspensionAssertion.h"
#import "CSLSNightstandSuspensionServiceConnection.h"
#import "CSLSNotificationCenterService.h"
#import "CSLSNotificationService.h"
#import "CSLSOnWristMonitor.h"
#import "CSLSOnWristState.h"
#import "CSLSPasscodePrompt.h"
#import "CSLSPasscodePromptSettings.h"
#import "CSLSPowerTest.h"
#import "CSLSPowerTestService.h"
#import "CSLSPrivilegedBackgroundPriorityState.h"
#import "CSLSPrivilegedBackgroundPriorityStateCache.h"
#import "CSLSPrivilegedBackgroundServiceConnection.h"
#import "CSLSProcessCPUStatistics.h"
#import "CSLSRadioConnectionState.h"
#import "CSLSRawButtonEventListener.h"
#import "CSLSRawButtonEventListenerBridge.h"
#import "CSLSRestartForMigrationAction.h"
#import "CSLSReturnToAppSettings.h"
#import "CSLSReturnToAppSettingsModel.h"
#import "CSLSScreenshotSyncer.h"
#import "CSLSScreenshotter.h"
#import "CSLSSecureBackupHelper.h"
#import "CSLSSensitiveUIMonitor.h"
#import "CSLSSensitiveUIMonitorExitingDelegate.h"
#import "CSLSSession.h"
#import "CSLSSessionActionAssertionFactory.h"
#import "CSLSSessionError.h"
#import "CSLSSessionService.h"
#import "CSLSSessionSuppressionAssertion.h"
#import "CSLSShutdownForEcoModeClient.h"
#import "CSLSShutdownOptions.h"
#import "CSLSSnapshotContext.h"
#import "CSLSSnapshotScheduleItem.h"
#import "CSLSSnapshotService.h"
#import "CSLSSnapshotServiceError.h"
#import "CSLSSoftwareUpdateStashHelper.h"
#import "CSLSStartupStatusService.h"
#import "CSLSStateMachine.h"
#import "CSLSStateMachineState.h"
#import "CSLSStatusOverlayAssertion.h"
#import "CSLSSuspendSystemGestureAssertion.h"
#import "CSLSSuspendSystemGestureAssertionConfiguration.h"
#import "CSLSSystemStateInterfaceProvider.h"
#import "CSLSSystemStateXPCInterfaceProxy.h"
#import "CSLSSystemStateXPCInterfaceProxyExportedObject.h"
#import "CSLSTelephonyConnectionState.h"
#import "CSLSTheaterMode.h"
#import "CSLSThermalTrap.h"
#import "CSLSThermalTrapXPCClient.h"
#import "CSLSTileNavigationService.h"
#import "CSLSTimeProfiler.h"
#import "CSLSUIProviderRemoteWrapper.h"
#import "CSLSUITriggerRegistration.h"
#import "CSLSUITriggerRegistrationInProcess.h"
#import "CSLSUITriggerRegistrationOutOfProcess.h"
#import "CSLSUITriggerRemoteClient.h"
#import "CSLSUITriggerRemoteClientFactory.h"
#import "CSLSUITriggerRemoteClientService.h"
#import "CSLSUITriggerRemoteService.h"
#import "CSLSURLSessionPolicy.h"
#import "CSLSUnblankingSynchronizer.h"
#import "CSLSUserAuthenticationClient.h"
#import "CSLSUserAuthenticationModel.h"
#import "CSLSViewOnWakeItem.h"
#import "CSLSWakeGesture.h"
#import "CSLSWakeGestureMonitor.h"
#import "CSLSWaterLock.h"
#import "CSLSWeakXPCConnectionWrapper.h"
#import "CSLSWifiConnectionState.h"
#import "CSLSXPCActivatingUIAssertionProvider.h"
#import "CSLSXPCBarrierBlockManager.h"
#import "CSLSXPCService.h"
#import "CSLSXPCServiceDefinition.h"
#import "CSLSXPCServiceError.h"
#import "CSLSXPCSuspendSystemGestureAssertionProvider.h"
#import "CSLSafeMutableArray.h"
#import "CSLSafeMutableDictionary.h"
#import "CSLSafeMutableSet.h"
#import "CSLToolXPCClient.h"
#import "CSLUnblankingSynchronizationClient.h"
#import "CSLWeakTracker.h"
#import "_$s16CarouselServices14CSLSUnfairLockCN.h"
#import "_$s16CarouselServices24CSLSSessionActionServiceCN.h"
#import "_$s16CarouselServices26CSLSSessionActionAssertionCN.h"
#import "_$s16CarouselServices29CSLSSessionActionServiceErrorCN.h"
#import "_$s16CarouselServices31CSLSSessionActionAssertionErrorCN.h"
#import "_CSLSBackLightAssertionContainer.h"
#import "_CSLSBacklightOnRequest.h"
#import "_CSLSTimeFormatSentinel.h"
#import "BKSAlternateSystemAppDelegate-Protocol.h"
#import "BSDescriptionProviding-Protocol.h"
#import "BSInvalidatable-Protocol.h"
#import "BSSettingDescriptionProvider-Protocol.h"
#import "BSXPCCoding-Protocol.h"
#import "CSLEcoModeDaemonXPCDelegate-Protocol.h"
#import "CSLOnWristClientExportedInterface-Protocol.h"
#import "CSLOnWristServerExportedInterface-Protocol.h"
#import "CSLProcessCPUStatisticsSnapshot-Protocol.h"
#import "CSLSActivatingUIAssertionProvider-Protocol.h"
#import "CSLSAlertSuppressionServiceInterface-Protocol.h"
#import "CSLSAppViewImageProviding-Protocol.h"
#import "CSLSApplicationInfoServiceXPCServer-Protocol.h"
#import "CSLSApplicationLaunchSuppressionServiceInterface-Protocol.h"
#import "CSLSBackgroundEligibilityServerProtocol-Protocol.h"
#import "CSLSBackgroundEligibilityServiceProtocol-Protocol.h"
#import "CSLSBackgroundServiceAutoConnecting-Protocol.h"
#import "CSLSBackgroundServiceConnectionProviding-Protocol.h"
#import "CSLSBackgroundServiceDelegate-Protocol.h"
#import "CSLSBackgroundTaskRequestServiceHealthKitProtocol-Protocol.h"
#import "CSLSBackgroundTaskRequestServiceProtocol-Protocol.h"
#import "CSLSBackgroundTaskRequestServiceXPC-Protocol.h"
#import "CSLSBacklightAssertionProvider-Protocol.h"
#import "CSLSBacklightObserver-Protocol.h"
#import "CSLSBacklightXPCClient-Protocol.h"
#import "CSLSBacklightXPCServer-Protocol.h"
#import "CSLSBinaryTransitionStateMachineDelegate-Protocol.h"
#import "CSLSBuddyServiceInterface-Protocol.h"
#import "CSLSButtonListenerClientInterface-Protocol.h"
#import "CSLSButtonListenerServerInterface-Protocol.h"
#import "CSLSButtonTapAssertionClientInterface-Protocol.h"
#import "CSLSButtonTapAssertionServerInterface-Protocol.h"
#import "CSLSComplicationServerExportedInterface-Protocol.h"
#import "CSLSConnectionStateXPCClientInterface-Protocol.h"
#import "CSLSConnectionStateXPCServerInterface-Protocol.h"
#import "CSLSConnectionStatusObserver-Protocol.h"
#import "CSLSCoreAnalyticsSending-Protocol.h"
#import "CSLSDetentClient-Protocol.h"
#import "CSLSDetentService-Protocol.h"
#import "CSLSDisableInstantButtonTapAssertionDelegate-Protocol.h"
#import "CSLSDisplayLayoutElement-Protocol.h"
#import "CSLSDockAllowLaunchAssertionService-Protocol.h"
#import "CSLSDockStatusServiceXPC-Protocol.h"
#import "CSLSDuetLaunchTesting-Protocol.h"
#import "CSLSEcoModeShutdownServer-Protocol.h"
#import "CSLSLinkActionServiceXPC-Protocol.h"
#import "CSLSLinkSuggestedActionsServiceProviding-Protocol.h"
#import "CSLSLinkSuggestedActionsServiceXPC-Protocol.h"
#import "CSLSMobileKeyBagObserver-Protocol.h"
#import "CSLSModalAppXPCClientDelegate-Protocol.h"
#import "CSLSModalAppXPCClientInterface-Protocol.h"
#import "CSLSModalAppXPCServerInterface-Protocol.h"
#import "CSLSNextLinkActionProviding-Protocol.h"
#import "CSLSNightstandSuspensionService-Protocol.h"
#import "CSLSNotificationCenterServiceServerExportedInterface-Protocol.h"
#import "CSLSNotificationServiceServerExportedInterface-Protocol.h"
#import "CSLSPasscodePromptServerProtocol-Protocol.h"
#import "CSLSPowerTestDelegate-Protocol.h"
#import "CSLSPowerTester-Protocol.h"
#import "CSLSPrivilegedBackgroundServicing-Protocol.h"
#import "CSLSPrivilegedSnapshotServicing-Protocol.h"
#import "CSLSReBoardServiceInterface-Protocol.h"
#import "CSLSScreenshotTaker-Protocol.h"
#import "CSLSSensitiveUIMonitoring-Protocol.h"
#import "CSLSSessionActionAsserting-Protocol.h"
#import "CSLSSessionActionServiceXPC-Protocol.h"
#import "CSLSSessionServiceClientInterface-Protocol.h"
#import "CSLSSessionServiceInterface-Protocol.h"
#import "CSLSSessionServiceXPCInterface-Protocol.h"
#import "CSLSSnapshotServiceProtocol-Protocol.h"
#import "CSLSSnapshotServiceServerProtocol-Protocol.h"
#import "CSLSStartupStatusChecking-Protocol.h"
#import "CSLSStartupStatusServiceXPC-Protocol.h"
#import "CSLSStatusOverlayAssertionProtocol-Protocol.h"
#import "CSLSStoreDemoSupportServerInterface-Protocol.h"
#import "CSLSSuspendSystemGestureAssertionProvider-Protocol.h"
#import "CSLSSystemNavigating-Protocol.h"
#import "CSLSSystemStateInterface-Protocol.h"
#import "CSLSSystemStateInterfaceProviding-Protocol.h"
#import "CSLSSystemStateXPCClientInterface-Protocol.h"
#import "CSLSSystemStateXPCServerInterface-Protocol.h"
#import "CSLSThermalTrapXPCClientDelegate-Protocol.h"
#import "CSLSUIProviderRemoteWrapperDelegate-Protocol.h"
#import "CSLSUITriggerClientExportedInterface-Protocol.h"
#import "CSLSUITriggerRegistration-Protocol.h"
#import "CSLSUITriggerRemoteClientServiceDelegate-Protocol.h"
#import "CSLSUITriggerRemoteClientServiceProtocol-Protocol.h"
#import "CSLSUITriggerRemoteProvider-Protocol.h"
#import "CSLSUITriggerServerExportedInterface-Protocol.h"
#import "CSLSUITriggerXPCProtocol-Protocol.h"
#import "CSLSURLSessionPolicyServerInterface-Protocol.h"
#import "CSLSUserAuthenticationModelDelegate-Protocol.h"
#import "CSLSWakeGestureObserver-Protocol.h"
#import "CSLSWakeGestureServer-Protocol.h"
#import "CSLSXPCRemoteInterface-Protocol.h"
#import "CSLSXPCServiceDelegate-Protocol.h"
#import "CSLUnblankingSynchronizationClientInterface-Protocol.h"
#import "CSLUnblankingSynchronizationServerInterface-Protocol.h"
#import "DNDStateUpdateListener-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "BSDescriptionBuilder+CSLSCompanionConnectionState.h"
#import "FBSDisplayLayoutElement+CSLSDisplayLayoutElement.h"
#import "NSError+CSLSSessionError.h"
#import "BKSHIDEventDeferringToken+CSLSSystemStateType.h"
#import "_TtC16CarouselServices26CSLSSessionActionAssertion+CarouselServices.h"
#import "_TtC16CarouselServices24CSLSSessionActionService+CarouselServices.h"

#endif /* CarouselServices_h */