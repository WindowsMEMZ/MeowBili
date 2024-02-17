//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISIconCacheConfiguration_h
#define ISIconCacheConfiguration_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface ISIconCacheConfiguration : NSObject<NSSecureCoding>

@property (retain) NSURL *url;
@property (retain) NSString *sandboxExtension;
@property (retain) NSString *salt;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* ISIconCacheConfiguration_h */