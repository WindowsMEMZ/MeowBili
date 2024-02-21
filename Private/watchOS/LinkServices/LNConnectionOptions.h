//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNConnectionOptions_h
#define LNConnectionOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface LNConnectionOptions : NSObject<NSCopying>

@property (nonatomic) long long authenticationPolicy;
@property (nonatomic) BOOL initiatesAudioSession;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* LNConnectionOptions_h */