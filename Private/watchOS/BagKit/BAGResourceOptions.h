//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef BAGResourceOptions_h
#define BAGResourceOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface BAGResourceOptions : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDictionary *additionalOptions;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithName:(id)name type:(unsigned long long)type;
- (id)initWithName:(id)name type:(unsigned long long)type additionalOptions:(id)options;
- (id)initWithBundleID:(id)id name:(id)name type:(unsigned long long)type additionalOptions:(id)options;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
@end

#endif /* BAGResourceOptions_h */