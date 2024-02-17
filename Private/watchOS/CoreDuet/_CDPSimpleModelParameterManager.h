//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDPSimpleModelParameterManager_h
#define _CDPSimpleModelParameterManager_h
@import Foundation;

#include "_CDPSimpleModelParameterManagerAccountState.h"
#include "_CDSocialInteractionAdvisorTuningDelegate-Protocol.h"

@class NSString;

@interface _CDPSimpleModelParameterManager : NSObject<_CDSocialInteractionAdvisorTuningDelegate> {
  /* instance variables */
  _CDPSimpleModelParameterManagerAccountState *_accountState;
  NSString *_accountStateKey;
}

@property (readonly, nonatomic) _CDPModelTuningState *lastTuningState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSettings:(id)settings;
- (id)accountIdentifierForSettings:(id)settings;
- (void)modelTuner:(id)tuner heartBeatWithlambda:(float)withlambda w0:(float)w0 threshold:(float)threshold score:(float)score progress:(float)progress;
- (void)getLambda:(float *)lambda w0:(float *)w0 threshold:(float *)threshold;
- (void)modelTunerWillResume:(id)resume;
- (void)modelTunerWillStop:(id)stop;
- (void)loadAccountState;
- (void)saveAccountState;
@end

#endif /* _CDPSimpleModelParameterManager_h */