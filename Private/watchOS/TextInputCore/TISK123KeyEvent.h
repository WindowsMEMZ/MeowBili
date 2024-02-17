//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TISK123KeyEvent_h
#define TISK123KeyEvent_h
@import Foundation;

#include "TISKEvent.h"

@interface TISK123KeyEvent : TISKEvent
/* instance methods */
- (id)init:(id)init emojiSearchMode:(BOOL)mode order:(long long)order;
- (void)reportInterKeyTiming:(id)timing previousEvent:(id)event;
- (id)description;
@end

#endif /* TISK123KeyEvent_h */