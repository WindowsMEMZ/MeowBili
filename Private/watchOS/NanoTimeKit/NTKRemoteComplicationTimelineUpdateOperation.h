//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRemoteComplicationTimelineUpdateOperation_h
#define NTKRemoteComplicationTimelineUpdateOperation_h
@import Foundation;

#include "NTKRemoteComplicationOperation.h"
#include "NTKRemoteTimelineComplicationController.h"

@class CLKComplicationClient;

@interface NTKRemoteComplicationTimelineUpdateOperation : NTKRemoteComplicationOperation {
  /* instance variables */
  CLKComplicationClient *_client;
  id /* block */ _completionHandler;
}

@property (retain, nonatomic) NTKRemoteTimelineComplicationController *controller;

/* instance methods */
- (BOOL)canCoalesceWithOperation:(id)operation;
- (void)activateWithClient:(id)client completion:(id /* block */)completion;
- (BOOL)cancelAndReset;
- (BOOL)wantsToPokeClient;
- (void)_activateController;
- (void)_endSession;
- (BOOL)requiresActiveComplications;
- (long long)backoffPolicy;
- (id)description;
@end

#endif /* NTKRemoteComplicationTimelineUpdateOperation_h */