//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVItemWithRecurrenceChildren_h
#define CalDAVItemWithRecurrenceChildren_h
@import Foundation;

#include "CoreDAVItem.h"

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *recurrences;

/* instance methods */
- (void)addRecurrence:(id)recurrence;
- (id)copyParseRules;
@end

#endif /* CalDAVItemWithRecurrenceChildren_h */