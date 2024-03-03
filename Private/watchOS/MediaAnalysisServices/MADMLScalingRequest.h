//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef MADMLScalingRequest_h
#define MADMLScalingRequest_h
@import Foundation;

#include "MADRequest.h"

@interface MADMLScalingRequest : MADRequest

@property (readonly, nonatomic) unsigned long long scaledImageWidth;
@property (readonly, nonatomic) unsigned long long scaledImageHeight;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithScaledImageWidth:(unsigned long long)width scaledImageHeight:(unsigned long long)height;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
@end

#endif /* MADMLScalingRequest_h */