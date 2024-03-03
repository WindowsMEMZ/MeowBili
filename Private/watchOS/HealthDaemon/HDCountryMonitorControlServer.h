//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCountryMonitorControlServer_h
#define HDCountryMonitorControlServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDOTAFeatureAvailabilityManager.h"
#include "HDPeriodicCountryMonitor.h"
#include "HKCountryMonitorControlServer-Protocol.h"

@class NSString;

@interface HDCountryMonitorControlServer : HDStandardTaskServer<HKCountryMonitorControlServer> {
  /* instance variables */
  HDPeriodicCountryMonitor *_countryMonitor;
  HDOTAFeatureAvailabilityManager *_OTAFeatureAvailabilityManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createTaskServerWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate error:(id *)error;
+ (id)taskIdentifier;
+ (id)requiredEntitlements;

/* instance methods */
- (void)remote_fetchCurrentISOCountryCodeAndNotifyObserversWithCompletion:(id /* block */)completion;
- (id)exportedInterface;
- (id)remoteInterface;
@end

#endif /* HDCountryMonitorControlServer_h */