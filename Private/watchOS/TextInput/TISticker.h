//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISticker_h
#define TISticker_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDictionary, NSString, NSUUID;

@interface TISticker : NSObject<NSSecureCoding>

@property (readonly) NSUUID *identifier;
@property (readonly) NSArray *representations;
@property (readonly) long long effectType;
@property (readonly) NSString *name;
@property (readonly) NSString *externalURI;
@property (readonly) NSString *accessibilityLabel;
@property (readonly) NSData *metadata;
@property (readonly) NSDictionary *attributionInfo;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier representations:(id)representations effectType:(long long)type name:(id)name externalURI:(id)uri accessibilityLabel:(id)label metadata:(id)metadata attributionInfo:(id)info;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TISticker_h */