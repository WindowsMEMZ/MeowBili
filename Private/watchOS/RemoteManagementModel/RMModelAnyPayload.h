//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 500.25.3.7.0
//
#ifndef RMModelAnyPayload_h
#define RMModelAnyPayload_h
@import Foundation;

#include "RMModelPayloadBase.h"

@class NSDictionary;

@interface RMModelAnyPayload : RMModelPayloadBase

@property (copy, nonatomic) NSDictionary *dictKeys;

/* class methods */
+ (id)buildFromDictionary:(id)dictionary;

/* instance methods */
- (BOOL)loadFromDictionary:(id)dictionary serializationType:(short)type error:(id *)error;
- (id)serializeWithType:(short)type;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RMModelAnyPayload_h */