//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDNotificationInstructionUUIDCriteria_h
#define HDNotificationInstructionUUIDCriteria_h
@import Foundation;

#include "HDNotificationInstructionCriteria.h"

@class NSUUID;

@interface HDNotificationInstructionUUIDCriteria : HDNotificationInstructionCriteria

@property (readonly, copy, nonatomic) NSUUID *UUID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithUUID:(id)uuid;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithMessageDictionary:(id)dictionary;
- (id)messageDictionary;
@end

#endif /* HDNotificationInstructionUUIDCriteria_h */