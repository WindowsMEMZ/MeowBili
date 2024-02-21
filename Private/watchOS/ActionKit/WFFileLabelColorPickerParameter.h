//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFFileLabelColorPickerParameter_h
#define WFFileLabelColorPickerParameter_h
@import Foundation;

#include "WFEnumerationParameter.h"

@class NSArray, NSDictionary;

@interface WFFileLabelColorPickerParameter : WFEnumerationParameter {
  /* instance variables */
  NSArray *_possibleStates;
}

@property (readonly, nonatomic) NSDictionary *localizedLabelsForLabelNumbers;

/* instance methods */
- (id)initWithDefinition:(id)definition;
- (Class)singleStateClass;
- (id)localizedLabelForPossibleState:(id)state;
- (id)accessoryColorForPossibleState:(id)state;
- (id)possibleStates;
@end

#endif /* WFFileLabelColorPickerParameter_h */