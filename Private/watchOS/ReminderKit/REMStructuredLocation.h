//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMStructuredLocation_h
#define REMStructuredLocation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSString;

@interface REMStructuredLocation : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *locationUID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *routing;
@property (copy, nonatomic) NSString *referenceFrameString;
@property (copy, nonatomic) NSString *contactLabel;
@property (copy, nonatomic) NSData *mapKitHandle;

/* class methods */
+ (double)minimumRegionMonitoringDistance;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isContentEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)initWithTitle:(id)title;
- (id)initWithTitle:(id)title locationUID:(id)uid;
- (id)initWithTitle:(id)title locationUID:(id)uid latitude:(double)latitude longitude:(double)longitude radius:(double)radius address:(id)address routing:(id)routing referenceFrameString:(id)string contactLabel:(id)label mapKitHandle:(id)handle;
- (id)displayName;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* REMStructuredLocation_h */