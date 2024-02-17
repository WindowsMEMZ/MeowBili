//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaGroupsParticipantData_h
#define HMDMediaGroupsParticipantData_h
@import Foundation;

#include "HMEProtoBufferCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class HMMediaDestination, HMMediaDestinationControllerData, NSArray;

@interface HMDMediaGroupsParticipantData : NSObject<HMEProtoBufferCoding, NSCopying, NSMutableCopying>

@property (copy) HMMediaDestination *destination;
@property (copy) HMMediaDestinationControllerData *destinationControllerData;
@property (copy) NSArray *backedUpGroups;

/* instance methods */
- (id)initWithDestination:(id)destination destinationControllerData:(id)data backedUpGroups:(id)groups;
- (id)encodeToProtoBufferData;
- (id)initWithProtoBufferData:(id)data;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMDMediaGroupsParticipantData_h */