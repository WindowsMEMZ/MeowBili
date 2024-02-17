//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassLiveRender_h
#define PKPassLiveRender_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface PKPassLiveRender : NSObject<NSSecureCoding>

@property (nonatomic) BOOL enabled;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithEnabled:(BOOL)enabled;
- (id)_init;
- (id)init;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* PKPassLiveRender_h */