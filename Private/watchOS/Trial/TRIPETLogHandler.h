//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPETLogHandler_h
#define TRIPETLogHandler_h
@import Foundation;

#include "TRILogHandling-Protocol.h"

@class NSString;

@interface TRIPETLogHandler : NSObject<TRILogHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)logEvent:(id)event subgroupName:(id)name queue:(id)queue;
@end

#endif /* TRIPETLogHandler_h */