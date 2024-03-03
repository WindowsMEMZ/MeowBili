//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef PETEventTracker_h
#define PETEventTracker_h
@import Foundation;

#include "PETLoggingOutlet-Protocol.h"

@class NSArray, NSString;

@interface PETEventTracker : NSObject

@property (readonly, nonatomic) BOOL testingMode;
@property (readonly, nonatomic) NSObject<PETLoggingOutlet> *loggingOutlet;
@property (readonly, nonatomic) NSString *featureId;
@property (readonly, nonatomic) NSArray *registeredProperties;
@property (readonly, nonatomic) NSArray *propertySubsets;

/* instance methods */
- (id)initWithFeatureId:(id)id registerProperties:(id)properties propertySubsets:(id)subsets;
- (id)_defaultLoggingOutlet;
- (void)_checkCardinalityForEvent:(id)event;
- (void)_checkKeyLengthForEvent:(id)event metaData:(id)data;
- (void)_checkPropertySubsets:(id)subsets;
- (void)_trackEvent:(id)event withPropertyValues:(id)values value:(id)value;
- (void)_trackEvent:(id)event withPropertyValues:(id)values value:(id)value overwrite:(BOOL)overwrite;
- (void)_logValue:(id)value forEvent:(id)event stringifiedProperties:(id)properties metaData:(id)data;
- (void)_setValue:(id)value forEvent:(id)event stringifiedProperties:(id)properties metaData:(id)data;
- (id)_keyMetadataForEvent:(id)event;
- (BOOL)_validatePropertyValues:(id)values;
- (id)_stringifiedPropertiesForEvent:(id)event propertyValueArray:(id)array;
- (void)_setLoggingOutlet:(id)outlet;
- (void)enableTestingMode;
- (void)_checkInTestingMode;
- (id)getKeyValueDict;
- (id)getValueForKey:(id)key;
- (void)disableTestingMode;
@end

#endif /* PETEventTracker_h */