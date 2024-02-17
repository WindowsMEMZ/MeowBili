//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef MOStringSettingMetadata_h
#define MOStringSettingMetadata_h
@import Foundation;

#include "MOSettingMetadata.h"

@class NSDictionary, NSString;

@interface MOStringSettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) long long combineOperator;
@property (readonly, nonatomic) NSDictionary *rankedAllowedValues;
@property (readonly, nonatomic) NSString *defaultValue;

/* instance methods */
- (id)initWithDefaultString:(id)string combineOperator:(long long)operator rankedAllowedValues:(id)values isPublic:(BOOL)public;
- (id)persistableValueFromValue:(id)value;
- (id)valueFromPersistableValue:(id)value;
- (id)sanitizePersistableValue:(id)value;
- (id)combinePersistableValue:(id)value with:(id)with;
- (id)_combine:(id)_combine with:(id)with;
@end

#endif /* MOStringSettingMetadata_h */