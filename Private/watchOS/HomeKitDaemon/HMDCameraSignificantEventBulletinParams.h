//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSignificantEventBulletinParams_h
#define HMDCameraSignificantEventBulletinParams_h
@import Foundation;

#include "HMFObject.h"

@class NSDate, NSSet, NSUUID;

@interface HMDCameraSignificantEventBulletinParams : HMFObject

@property (readonly, copy) NSUUID *UUID;
@property (readonly) unsigned long long reason;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly) unsigned long long confidenceLevel;
@property (readonly, copy) NSSet *faceClassifications;
@property (readonly, copy) NSUUID *cameraProfileUUID;

/* instance methods */
- (id)init;
- (id)initWithUUID:(id)uuid reason:(unsigned long long)reason dateOfOccurrence:(id)occurrence confidenceLevel:(unsigned long long)level faceClassifications:(id)classifications cameraProfileUUID:(id)uuid;
- (id)initWithSignificantEvent:(id)event cameraProfileUUID:(id)uuid;
@end

#endif /* HMDCameraSignificantEventBulletinParams_h */