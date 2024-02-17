//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSSuspendSystemGestureAssertionConfiguration_h
#define CSLSSuspendSystemGestureAssertionConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSString;

@interface CSLSSuspendSystemGestureAssertionConfiguration : NSObject<NSCopying>

@property (retain, nonatomic) NSString *assertionID;
@property (nonatomic) long long edge;
@property (nonatomic) int pid;
@property (nonatomic) BOOL ignoresForegroundStatus;

/* instance methods */
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLSSuspendSystemGestureAssertionConfiguration_h */