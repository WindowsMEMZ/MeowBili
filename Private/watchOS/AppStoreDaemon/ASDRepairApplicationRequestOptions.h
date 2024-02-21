//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDRepairApplicationRequestOptions_h
#define ASDRepairApplicationRequestOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface ASDRepairApplicationRequestOptions : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *accountDSID;
@property (readonly, nonatomic) long long claimStyle;
@property (nonatomic) unsigned long long exitReason;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBundleID:(id)id;
- (id)initWithBundleID:(id)id accountIdentifier:(id)identifier claimStyle:(long long)style;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* ASDRepairApplicationRequestOptions_h */