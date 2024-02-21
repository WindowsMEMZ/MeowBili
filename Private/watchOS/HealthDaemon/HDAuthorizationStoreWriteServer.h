//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDAuthorizationStoreWriteServer_h
#define HDAuthorizationStoreWriteServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HKAuthorizationStoreWriteServer-Protocol.h"

@class NSString;

@interface HDAuthorizationStoreWriteServer : HDStandardTaskServer<HKAuthorizationStoreWriteServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)validateClient:(id)client error:(id *)error;
+ (id)taskIdentifier;
+ (id)requiredEntitlements;

/* instance methods */
- (void)remote_setAuthorizationStatuses:(id)statuses authorizationModes:(id)modes forBundleIdentifier:(id)identifier options:(unsigned long long)options completion:(id /* block */)completion;
- (void)remote_setRequestedAuthorizationForBundleIdentifier:(id)identifier shareTypes:(id)types readTypes:(id)types completion:(id /* block */)completion;
- (void)remote_setObjectAuthorizationStatuses:(id)statuses forBundleIdentifier:(id)identifier sessionIdentifier:(id)identifier completion:(id /* block */)completion;
- (id)exportedInterface;
- (id)remoteInterface;
@end

#endif /* HDAuthorizationStoreWriteServer_h */