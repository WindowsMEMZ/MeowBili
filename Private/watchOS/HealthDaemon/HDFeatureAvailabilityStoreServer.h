//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFeatureAvailabilityStoreServer_h
#define HDFeatureAvailabilityStoreServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDFeatureAvailabilityExtension-Protocol.h"
#include "HDFeatureAvailabilityExtensionObserver-Protocol.h"
#include "HKFeatureAvailabilityStoreServer-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface HDFeatureAvailabilityStoreServer : HDStandardTaskServer<HKFeatureAvailabilityStoreServer, HDFeatureAvailabilityExtensionObserver> {
  /* instance variables */
  NSObject<HDFeatureAvailabilityExtension> *_extension;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createTaskServerWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate error:(id *)error;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (BOOL)validateConfiguration:(id)configuration client:(id)client error:(id *)error;
+ (id)taskIdentifier;

/* instance methods */
- (void)remote_getFeatureOnboardingRecordWithCompletion:(id /* block */)completion;
- (void)remote_getIsCurrentOnboardingVersionCompletedWithCompletion:(id /* block */)completion;
- (void)remote_canCompleteOnboardingForCountryCode:(id)code completion:(id /* block */)completion;
- (void)remote_onboardingEligibilityForCountryCode:(id)code completion:(id /* block */)completion;
- (void)remote_onboardedCountryCodeSupportedStateWithCompletion:(id /* block */)completion;
- (void)remote_getIsFeatureCapabilitySupportedOnActivePairedDeviceWithCompletion:(id /* block */)completion;
- (void)remote_earliestDateLowestOnboardingVersionCompletedWithCompletion:(id /* block */)completion;
- (void)remote_getPairedFeatureAttributesWithCompletion:(id /* block */)completion;
- (void)remote_getFeatureAvailabilityRequirementsWithCompletion:(id /* block */)completion;
- (void)remote_getRegionAvailabilityWithCompletion:(id /* block */)completion;
- (void)remote_setCurrentOnboardingVersionCompletedForCountryCode:(id)code countryCodeProvenance:(long long)provenance date:(id)date settings:(id)settings completion:(id /* block */)completion;
- (void)remote_saveOnboardingCompletion:(id)completion settings:(id)settings completion:(id /* block */)completion;
- (void)remote_setFeatureSettingData:(id)data forKey:(id)key completion:(id /* block */)completion;
- (void)remote_setFeatureSettingString:(id)string forKey:(id)key completion:(id /* block */)completion;
- (void)remote_setFeatureSettingNumber:(id)number forKey:(id)key completion:(id /* block */)completion;
- (void)remote_removeFeatureSettingValueForKey:(id)key completion:(id /* block */)completion;
- (void)remote_resetOnboardingWithCompletion:(id /* block */)completion;
- (void)remote_startObservingChangesWithCompletion:(id /* block */)completion;
- (void)remote_stopObservingChanges;
- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)completion;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)capability;
- (void)featureAvailabilityProvidingDidUpdateSettings:(id)settings;
- (void)featureAvailabilityExtensionOnboardingCompletionDataDidBecomeAvailable:(id)available;
- (void)featureAvailabilityExtensionDidUpdateRegionAvailability:(id)availability;
- (id)exportedInterface;
- (id)remoteInterface;
@end

#endif /* HDFeatureAvailabilityStoreServer_h */