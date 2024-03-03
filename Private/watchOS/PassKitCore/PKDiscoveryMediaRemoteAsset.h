//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryMediaRemoteAsset_h
#define PKDiscoveryMediaRemoteAsset_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSURL;

@interface PKDiscoveryMediaRemoteAsset : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSString *sha1Hex;
@property (readonly, nonatomic) NSURL *url;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PKDiscoveryMediaRemoteAsset_h */