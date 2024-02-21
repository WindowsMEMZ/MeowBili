//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserModel_h
#define HMDUserModel_h
@import Foundation;

#include "HMDBackingStoreModelObject.h"
#include "HMDAccountHandle.h"
#include "HMDAccountIdentifier.h"
#include "HMDBackingStoreModelObjectCDRepresentable-Protocol.h"

@class CKRecordID, NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface HMDUserModel : HMDBackingStoreModelObject<HMDBackingStoreModelObjectCDRepresentable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, @dynamic, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, @dynamic, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (retain, @dynamic, nonatomic) NSDictionary *pairingIdentity;
@property (retain, @dynamic, nonatomic) NSNumber *privilege;
@property (retain, @dynamic, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, @dynamic, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (retain, @dynamic, nonatomic) NSString *changeTag;
@property (retain, @dynamic, nonatomic) NSString *userID;
@property (retain, @dynamic, nonatomic) NSNumber *camerasAccessLevel;
@property (retain, @dynamic, nonatomic) NSNumber *announceAccessAllowed;
@property (retain, @dynamic, nonatomic) NSNumber *announceAccessLevel;
@property (retain, @dynamic, nonatomic) NSNumber *analysisAccessSelection;
@property (retain, nonatomic) NSNumber *audioAnalysisUserDropInAccessLevel;
@property (retain, @dynamic, nonatomic) NSNumber *matterCASEAuthenticatedTagID;
@property (retain, @dynamic, nonatomic) NSString *idsMergeIdentifier;
@property (retain, @dynamic, nonatomic) CKRecordID *reverseShareID;
@property (retain, @dynamic, nonatomic) NSData *reverseShareToken;
@property (retain, @dynamic, nonatomic) NSNumber *allowExplicitContent;
@property (retain, @dynamic, nonatomic) NSNumber *allowiTunesAccount;
@property (retain, @dynamic, nonatomic) NSNumber *dolbyAtmosEnabled;
@property (retain, @dynamic, nonatomic) NSNumber *losslessMusicEnabled;
@property (retain, @dynamic, nonatomic) NSNumber *playbackInfluencesEnabled;
@property (retain, @dynamic, nonatomic) NSNumber *siriIdentifyVoiceEnabled;
@property (copy, @dynamic, nonatomic) NSNumber *ownerAddSceneButtonPresentedCount;
@property (copy, @dynamic, nonatomic) NSNumber *ownerCompletedSwitchingHomesOnboardingUI;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedAccessCodeOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedAccessoryFirmwareUpdateOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedAnnounceOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedCameraRecordingOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedCameraRecordingSetupBanner;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedCameraUpgradeOfferBanner;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedHomeTheaterOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedIdentifyVoiceOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedIdentifyVoiceSetupBanner;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedNaturalLightingOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedTVViewingProfileOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedTVViewingProfileSetupBanner;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedUserSplitMediaAccountWarning;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedWalletKeyExpressModeOnboarding;
@property (copy, @dynamic, nonatomic) NSNumber *ownerDismissedWelcomeUI;
@property (copy, @dynamic, nonatomic) NSNumber *ownerHasUserSeenRMVNewLanguageNotification;
@property (retain, @dynamic, nonatomic) NSNumber *activityNotificationsEnabledForPersonalRequests;
@property (retain, @dynamic, nonatomic) NSArray *accessoriesWithPersonalRequestsEnabled;
@property (retain, @dynamic, nonatomic) NSArray *accessoriesWithMediaContentProfileEnabled;
@property (retain, @dynamic, nonatomic) NSArray *accessoriesWithListeningHistoryEnabled;
@property (retain, @dynamic, nonatomic) NSString *photosPersonDataZoneUUIDString;
@property (retain, @dynamic, nonatomic) NSNumber *sharePhotosFaceClassifications;
@property (retain, @dynamic, nonatomic) NSDictionary *ownerCharacteristicAuthorizationData;

/* class methods */
+ (id)cd_parentReferenceName;
+ (Class)cd_entityClass;
+ (id)cd_getMKFUserFromUUID:(id)uuid;
+ (id)cd_getHMDUserFromMKFUser:(id)mkfuser;
+ (id)keyedArchiveToken:(id)token;
+ (id)shareTokenFromKeyedArchiveData:(id)data;
+ (id)properties;

/* instance methods */
- (id)cd_generateValueForModelObjectFromManagedObject:(id)object modelObjectField:(id)field modelFieldInfo:(id)info;
- (id)cd_generateValueForProperty:(id)property managedObjectField:(id)field context:(id)context;
@end

#endif /* HMDUserModel_h */