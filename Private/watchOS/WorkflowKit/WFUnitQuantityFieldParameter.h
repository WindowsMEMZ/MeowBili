//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFUnitQuantityFieldParameter_h
#define WFUnitQuantityFieldParameter_h
@import Foundation;

#include "WFQuantityFieldParameter.h"

@class NSArray, NSDictionary, NSString, NSUnit;

@interface WFUnitQuantityFieldParameter : WFQuantityFieldParameter {
  /* instance variables */
  NSArray *_possibleUnits;
}

@property (retain, nonatomic) NSDictionary *unitSymbolMap;
@property (copy, nonatomic) NSString *unitType;
@property (retain, nonatomic) NSUnit *defaultUnit;
@property (nonatomic) BOOL fallbackToAllSupportedUnits;
@property (readonly, nonatomic) NSString *defaultUnitString;

/* instance methods */
- (id)initWithDefinition:(id)definition;
- (id)availableUnitForStringValue:(id)value;
- (void)updatePossibleUnits;
- (id)localizedLabelForPossibleUnit:(id)unit magnitude:(id)magnitude style:(unsigned long long)style;
- (BOOL)parameterStateIsValid:(id)valid;
- (id)defaultSerializedRepresentation;
- (id)possibleUnits;
- (void)setPossibleUnits:(id)units;
@end

#endif /* WFUnitQuantityFieldParameter_h */