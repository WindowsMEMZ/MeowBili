//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSetSilenceUnknownCallersIntentResponse_h
#define WFSetSilenceUnknownCallersIntentResponse_h
@import Foundation;

#include "INIntentResponse.h"

@interface WFSetSilenceUnknownCallersIntentResponse : INIntentResponse

@property (nonatomic) long long code;

/* instance methods */
- (id)initWithCode:(long long)code userActivity:(id)activity;
@end

#endif /* WFSetSilenceUnknownCallersIntentResponse_h */