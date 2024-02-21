//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoveAccessoryPairingOperation_h
#define HMDRemoveAccessoryPairingOperation_h
@import Foundation;

#include "HMDAccessoryBackgroundOperation.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDRemoveAccessoryPairingOperation : HMDAccessoryBackgroundOperation<HMFLogging>

@property (readonly, nonatomic) NSString *pairingIdentifierToRemove;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)predicate;
+ (id)logCategory;

/* instance methods */
- (id)initWithAccessory:(id)accessory isOwnerIdentity:(BOOL)identity identityToRemove:(id)remove;
- (id)initWithAccessory:(id)accessory isOwnerIdentity:(BOOL)identity identityToRemove:(id)remove userData:(id)data;
- (id)initWithAccessory:(id)accessory accessoryIdentifier:(id)identifier homeUUIDWhereAccessoryWasPaired:(id)paired isOwnerIdentity:(BOOL)identity identityToRemove:(id)remove userData:(id)data;
- (BOOL)mainWithError:(id *)error;
- (id)logIdentifier;
@end

#endif /* HMDRemoveAccessoryPairingOperation_h */