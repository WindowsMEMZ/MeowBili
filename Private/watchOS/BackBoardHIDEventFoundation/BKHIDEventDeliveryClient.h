//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDEventDeliveryClient_h
#define BKHIDEventDeliveryClient_h
@import Foundation;

#include "BKHIDEventClient.h"

@class BSContinuousMachTimer, NSArray, NSSet, NSString;

@interface BKHIDEventDeliveryClient : BKHIDEventClient {
  /* instance variables */
  NSString *_processDescription;
  NSArray *_deliveryRoots;
  NSArray *_keyCommandDeliveryRoots;
  NSArray *_deferringRules;
  NSSet *_keyCommandsRegistrations;
  NSSet *_resolutions;
  BSContinuousMachTimer *_bufferTimer;
}

/* instance methods */
- (void)invalidate;
@end

#endif /* BKHIDEventDeliveryClient_h */