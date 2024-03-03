//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountVirtualCardStatusUpdate_h
#define PKAccountVirtualCardStatusUpdate_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKRecordObject-Protocol.h"

@class NSArray, NSString;

@interface PKAccountVirtualCardStatusUpdate : NSObject<NSSecureCoding, PKRecordObject>

@property (nonatomic) unsigned long long reason;
@property (copy, nonatomic) NSArray *updatedVirtualCards;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)recordType;
+ (id)recordNamePrefix;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithRecord:(id)record;
- (void)encodeWithRecord:(id)record;
- (BOOL)isEqual:(id)equal;
@end

#endif /* PKAccountVirtualCardStatusUpdate_h */