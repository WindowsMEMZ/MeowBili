//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMChangeTrackingState_h
#define REMChangeTrackingState_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "REMChangeToken.h"

@class NSDate;

@interface REMChangeTrackingState : NSObject<NSCopying, NSSecureCoding>

@property (retain, nonatomic) NSDate *lastConsumedDate;
@property (retain, nonatomic) REMChangeToken *lastConsumedChangeToken;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* REMChangeTrackingState_h */