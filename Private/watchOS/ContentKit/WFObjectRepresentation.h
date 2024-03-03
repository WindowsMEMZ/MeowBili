//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFObjectRepresentation_h
#define WFObjectRepresentation_h
@import Foundation;

#include "WFRepresentation.h"
#include "WFObjectType.h"

@class NSString;

@interface WFObjectRepresentation : WFRepresentation

@property (readonly, nonatomic) id object;
@property (readonly, nonatomic) NSString *specifiedName;
@property (readonly, nonatomic) NSString *wfName;
@property (readonly, nonatomic) WFObjectType *wfType;

/* class methods */
+ (id)object:(id)object;
+ (id)object:(id)object named:(id)named;
+ (id)objects:(id)objects;
+ (id)objects:(id)objects named:(id)named;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithObject:(id)object named:(id)named;
- (id)copyWithName:(id)name zone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEncodable;
@end

#endif /* WFObjectRepresentation_h */