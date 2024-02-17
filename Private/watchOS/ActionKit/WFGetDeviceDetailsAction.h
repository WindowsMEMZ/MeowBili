//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFGetDeviceDetailsAction_h
#define WFGetDeviceDetailsAction_h
@import Foundation;

#include "WFAction.h"

@interface WFGetDeviceDetailsAction : WFAction
/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (id)iconSymbolName;
- (BOOL)setParameterState:(id)state forKey:(id)key;
- (id)localizedDefaultOutputName;
- (id)outputContentClasses;
@end

#endif /* WFGetDeviceDetailsAction_h */