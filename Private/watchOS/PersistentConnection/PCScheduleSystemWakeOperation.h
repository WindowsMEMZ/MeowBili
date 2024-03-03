//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 543.100.1.0.0
//
#ifndef PCScheduleSystemWakeOperation_h
#define PCScheduleSystemWakeOperation_h
@import Foundation;

#include "NSOperation.h"

@class NSDate, NSString;

@interface PCScheduleSystemWakeOperation : NSOperation {
  /* instance variables */
  BOOL _scheduleOrCancel;
  BOOL _userVisible;
  NSDate *_wakeDate;
  double _acceptableDelay;
  NSString *_serviceIdentifier;
  void * _unqiueIdentifier;
}

/* instance methods */
- (id)initForScheduledWake:(BOOL)wake wakeDate:(id)date acceptableDelay:(double)delay userVisible:(BOOL)visible serviceIdentifier:(id)identifier uniqueIdentifier:(void *)identifier;
- (void)main;
@end

#endif /* PCScheduleSystemWakeOperation_h */