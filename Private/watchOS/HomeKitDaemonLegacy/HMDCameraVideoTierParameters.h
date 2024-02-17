//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraVideoTierParameters_h
#define HMDCameraVideoTierParameters_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCameraStreamSessionID.h"
#include "HMDCameraVideoTier.h"
#include "HMFLogging-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface HMDCameraVideoTierParameters : HMFObject<NSSecureCoding, HMFLogging>

@property (retain, nonatomic) HMDCameraVideoTier *firstPickedTier;
@property (retain, nonatomic) NSArray *tierOrder;
@property (readonly, nonatomic) NSDictionary *videoTierCombinations;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (retain, nonatomic) HMDCameraVideoTier *currentPickedTier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id streamingCapabilities:(id)capabilities;
- (void)_generateAllVideoTiers:(id)tiers;
- (void)updateTierOrder:(id)order;
- (void)updateTierParameters:(id)parameters firstPickedParameter:(id)parameter;
- (void)updateFirstPickedTier:(id)tier;
- (BOOL)pickLowerTier;
- (BOOL)pickHigherTier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)logIdentifier;
@end

#endif /* HMDCameraVideoTierParameters_h */