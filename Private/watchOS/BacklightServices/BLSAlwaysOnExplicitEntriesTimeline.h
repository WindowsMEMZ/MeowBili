//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSAlwaysOnExplicitEntriesTimeline_h
#define BLSAlwaysOnExplicitEntriesTimeline_h
@import Foundation;

#include "BLSAlwaysOnTimeline.h"

@class NSArray;

@interface BLSAlwaysOnExplicitEntriesTimeline : BLSAlwaysOnTimeline {
  /* instance variables */
  NSArray *_explicitEntries;
}

/* instance methods */
- (id)initWithEntries:(id)entries identifier:(id)identifier configure:(id /* block */)configure;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)interval withPreviousEntry:(id)entry;
- (id)unconfiguredEntriesForDateInterval:(id)interval previousEntry:(id)entry;
@end

#endif /* BLSAlwaysOnExplicitEntriesTimeline_h */