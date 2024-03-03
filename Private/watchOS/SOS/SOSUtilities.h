//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 498.300.11.0.0
//
#ifndef SOSUtilities_h
#define SOSUtilities_h
@import Foundation;

@interface SOSUtilities : NSObject
/* class methods */
+ (id)_SOSDomainAccessor;
+ (id)_userSOSDefaults;
+ (id)_userFriendsDomainAccessor;
+ (id)_sosPrefsValueForKey:(id)key;
+ (void)_setSOSPrefsValue:(id)value forKey:(id)key;
+ (BOOL)_synchronizeSOSPrefs;
+ (id)automaticDialingSectionDescription;
+ (id)holdSideButtonTitleDescription;
+ (id)holdSideButtonFooterDescription;
+ (BOOL)longPressTriggersEmergencySOS;
+ (void)setLongPressTriggersEmergencySOS:(BOOL)sos;
+ (id)fallDetectionTitleDescription;
+ (id)fallDetectionAlwaysOnTitleDescription;
+ (id)fallDetectionOnlyDuringWorkoutsTitleDescription;
+ (id)fallDetectionFooterDescription;
+ (id)newtonTriggersEmergencySOSNumber;
+ (void)setNewtonTriggersEmergencySOSNumber:(id)sosnumber;
+ (BOOL)shouldSkipNewtonCall;
+ (BOOL)shouldAllowSOSStatusReset;
+ (long long)SOSTriggerMechanismForString:(id)string;
+ (long long)SOSProgressionForString:(id)string;
+ (long long)SOSResolutionForString:(id)string;
+ (long long)SOSFlowStateForString:(id)string;
+ (BOOL)newtonTriggersEmergencySOSWorkouts;
+ (BOOL)hasNewtonTriggersEmergencySOSWorkoutsSetting;
+ (void)setNewtonTriggersEmergencySOSWorkouts:(BOOL)sosworkouts;
+ (BOOL)newtonTriggersEmergencySOS;
+ (void)setNewtonTriggersEmergencySOS:(BOOL)sos;
+ (void)setNewtonTriggersEmergencySOS:(BOOL)sos isWristDetectionEnabled:(BOOL)enabled doesNewtonRequireConfirmation:(BOOL)confirmation presentConfirmationOnViewController:(id)controller completion:(id /* block */)completion;
+ (void)presentConfirmationOnViewController:(id)controller title:(id)title message:(id)message cancelTitle:(id)title cancelHandler:(id /* block */)handler confirmTitle:(id)title confirmHandler:(id /* block */)handler;
+ (BOOL)newtonAlwaysOnRequiresConfirmationForEligibility:(unsigned long long)eligibility;
+ (BOOL)defaultToWorkoutsOnlyForEligibility:(unsigned long long)eligibility;
+ (void)setNewtonTriggersEmergencySOS:(BOOL)sos newtonTriggersEmergencySOSWorkoutsOnly:(BOOL)only;
+ (void)setNewtonTriggersEmergencySOS:(BOOL)sos isWristDetectionEnabled:(BOOL)enabled newtonEligibility:(unsigned long long)eligibility confirmationDelegate:(id)delegate completion:(id /* block */)completion;
+ (void)setNewtonTriggersEmergencySOSWorkoutsOnly:(BOOL)only isWristDetectionEnabled:(BOOL)enabled newtonEligibility:(unsigned long long)eligibility confirmationDelegate:(id)delegate completion:(id /* block */)completion;
+ (long long)mostRecentlyUsedSOSTriggerMechanism;
+ (BOOL)isAllowedToMessageSOSContacts;
+ (void)setAllowedToMessageSOSContacts:(BOOL)soscontacts;
+ (BOOL)shouldSilenceSOSFlow;
+ (BOOL)isActivePairedDeviceTinker;
+ (BOOL)activeDeviceSupportsNewton;
+ (BOOL)activeDeviceSupportsNewtonWorkoutsOnly;
+ (id)activeDevice;
+ (BOOL)isKappaVisible;
+ (BOOL)kappaTriggersEmergencySOS;
+ (void)setKappaTriggersEmergencySOS:(BOOL)sos;
+ (BOOL)kappaTriggersEmergencySOSTinker;
+ (void)_setKappaTriggersEmergencySOS:(BOOL)sos;
+ (void)_setKappaTriggersEmergencySOSTinker:(BOOL)sostinker;
+ (void)setKappaTriggersEmergencySOS:(BOOL)sos isWristDetectionEnabled:(BOOL)enabled confirmationDelegate:(id)delegate completion:(id /* block */)completion;
+ (BOOL)isKappaUnmasked;
+ (BOOL)isKappaDetectionSupportedOnCurrentDevice;
+ (BOOL)isKappaDetectionSupportedOnActiveWatch;
+ (id)crashDetectionTitleDescription;
+ (id)crashDetectionSwitchDescription;
+ (id)crashDetectionWatchFooterDescription;
+ (id)crashDetectionFooterLinkDescription;
+ (id)crashDetectionFooterLinkURL;
+ (id)crashDetectionWristDetectionWarningDescription;
+ (id)crashDetectionThirdPartyDescription;
+ (id)crashDetectionThirdPartyCellTitle;
+ (id)crashDetectionThirdPartyNavigationTitle;
+ (id)crashDetectionThirdPartyAlertTitle;
+ (id)crashDetectionThirdPartyFooterDescription;
+ (id)crashDetectionThirdPartyFooterDescriptionPhone;
+ (id)crashDetectionThirdPartyFooterDescriptionWatch;
+ (id)crashDetectionThirdPartyShareDisableDescription;
+ (id)crashDetectionThirdPartyAppWithAccessDescription;
+ (id)getKappaThirdPartyDisplayNameForApp;
+ (id)crashDetectionThirdPartyStopSharingDescriptionPhoneWithAppName:(id)name;
+ (id)crashDetectionThirdPartyStopSharingDescriptionWatchWithAppName:(id)name;
+ (id)crashDetectionThirdPartyBundleId;
+ (BOOL)shouldShowCrashDetectionThirdPartySettingsForPairedDevice:(BOOL)device;
+ (id)getKappaThirdPartyApp;
+ (struct __CFBundle *)getKappaThirdPartyActiveAppBundle;
+ (void)setKappaThirdPartyActiveApp:(BOOL)app presentConfirmationOnViewController:(id)controller completion:(id /* block */)completion;
+ (void)setKappaThirdPartyActive:(BOOL)active forApp:(id)app forPairedDevice:(BOOL)device presentConfirmationOnViewController:(id)controller completion:(id /* block */)completion;
+ (BOOL)isDeviceWatchUsePairedDevice:(BOOL)device;
+ (BOOL)_mandrakeAvailableOnCurrentDevice;
+ (BOOL)activeDeviceSupportsMandrake;
+ (BOOL)activeDeviceHasMandrake;
+ (BOOL)longPressTriggersMandrake;
+ (void)setLongPressTriggersMandrake:(BOOL)mandrake;
+ (BOOL)isSOSMessagesUrgentAlertingAvailable;
+ (BOOL)isSOSMessagesUrgentAlertingEnabled;
+ (void)setSOSMessagesUrgentAlertingEnabled:(BOOL)enabled;
+ (BOOL)sosMessagesUrgentAlertingBypassesMute;
+ (void)setSOSMessagesUrgentAlertingBypassesMute:(BOOL)mute;
+ (id)sosLocationBundle;
+ (id)currentDeviceSOSStatus;
+ (void)setCurrentDeviceSOSStatus:(id)sosstatus;
+ (id)pairedDeviceSOSStatus;
+ (void)setPairedDeviceSOSStatus:(id)sosstatus;
+ (id)mostRecentSOSStatus;
+ (BOOL)shouldBlockNonEmergencyCalls;
+ (id)fetchSOSStatusWithKey:(id)key;
+ (void)setSOSStatus:(id)sosstatus withKey:(id)key;
+ (BOOL)_isInternalDevice;
+ (BOOL)_isCarryDevice;
+ (BOOL)isMountStateTrackingEnabled;
+ (double)mountProbabilityThreshold;
@end

#endif /* SOSUtilities_h */