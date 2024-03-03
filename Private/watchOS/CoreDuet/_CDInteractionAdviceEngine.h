//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDInteractionAdviceEngine_h
#define _CDInteractionAdviceEngine_h
@import Foundation;

#include "_CDInteractionAdvising-Protocol.h"
#include "_CDInteractionStore.h"
#include "_CDQueryInteractionAdvisor.h"
#include "_CDSocialInteractionAdvisor.h"
#include "_CDTemporalInteractionAdvisor.h"

@interface _CDInteractionAdviceEngine : NSObject<_CDInteractionAdvising> {
  /* instance variables */
  _CDInteractionStore *_store;
  _CDQueryInteractionAdvisor *_queryAdvisor;
}

@property (readonly, nonatomic) _CDSocialInteractionAdvisor *socialAdvisor;
@property (readonly, nonatomic) _CDTemporalInteractionAdvisor *temporalAdvisor;

/* class methods */
+ (id)interactionAdviceEngineWithStore:(id)store;

/* instance methods */
- (id)initWithStore:(id)store;
- (id)rankCandidateContacts:(id)contacts usingSettings:(id)settings;
- (id)adviseInteractionsUsingSettings:(id)settings;
- (id)adviseInteractionsForDate:(id)date usingSettings:(id)settings;
- (id)adviseInteractionsForKeywordsInString:(id)string usingSettings:(id)settings;
- (id)adviseSocialInteractionsForDate:(id)date andSeedContacts:(id)contacts usingSettings:(id)settings;
- (void)tuneSocialAdvisorUsingSettings:(id)settings heartBeatHandler:(id)handler;
@end

#endif /* _CDInteractionAdviceEngine_h */