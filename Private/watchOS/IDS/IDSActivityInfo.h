//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSActivityInfo_h
#define IDSActivityInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDate, NSString;

@interface IDSActivityInfo : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSArray *deviceUniqueIDs;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) NSArray *URIs;
@property (readonly, nonatomic) NSString *subActivity;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSData *appContext;

/* class methods */
+ (id)activityInfoWithSubActivity:(id)activity tokens:(id)tokens;
+ (id)activityInfoWithSubActivity:(id)activity URIs:(id)uris;
+ (id)activityInfoWithSubActivity:(id)activity devices:(id)devices;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithSubActivity:(id)activity;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isIdentical:(id)identical;
@end

#endif /* IDSActivityInfo_h */