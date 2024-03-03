//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICAlwaysOnEveryMinuteTimeline_h
#define PUICAlwaysOnEveryMinuteTimeline_h
@import Foundation;

#include "PUICAlwaysOnTimeline.h"

@class NSCalendar;

@interface PUICAlwaysOnEveryMinuteTimeline : PUICAlwaysOnTimeline {
  /* instance variables */
  NSCalendar *_calendar;
}

/* instance methods */
- (id)initWithIdentifier:(id)identifier configure:(id /* block */)configure;
- (id)unconfiguredEntriesForDateInterval:(id)interval previousEntry:(id)entry;
@end

#endif /* PUICAlwaysOnEveryMinuteTimeline_h */