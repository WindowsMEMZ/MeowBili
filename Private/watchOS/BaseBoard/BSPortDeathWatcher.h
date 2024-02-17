//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSPortDeathWatcher_h
#define BSPortDeathWatcher_h
@import Foundation;

#include "BSPortDeathSentinel.h"

@interface BSPortDeathWatcher : BSPortDeathSentinel
/* instance methods */
- (id)initWithSendRight:(id)right queue:(id)queue deathHandler:(id /* block */)handler;
- (id)initWithPort:(unsigned int)port queue:(id)queue deathHandler:(id /* block */)handler;
@end

#endif /* BSPortDeathWatcher_h */