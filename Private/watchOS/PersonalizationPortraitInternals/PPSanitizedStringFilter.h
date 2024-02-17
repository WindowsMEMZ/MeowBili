//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPSanitizedStringFilter_h
#define PPSanitizedStringFilter_h
@import Foundation;

#include "MLCustomModel-Protocol.h"

@class NSString;

@interface PPSanitizedStringFilter : NSObject<MLCustomModel> {
  /* instance variables */
  NSString *_inputName;
  NSString *_outputName;
}

/* instance methods */
- (id)initWithModelDescription:(id)description parameterDictionary:(id)dictionary error:(id *)error;
- (id)predictionFromFeatures:(id)features options:(id)options error:(id *)error;
@end

#endif /* PPSanitizedStringFilter_h */