//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLButtonInstantTapFilter_h
#define CSLButtonInstantTapFilter_h
@import Foundation;

#include "CSLButtonEvent.h"
#include "CSLButtonEventPublisherDelegate-Protocol.h"
#include "CSLButtonEventPublishing-Protocol.h"

@class NSString, NSTimer;

@interface CSLButtonInstantTapFilter : NSObject<CSLButtonEventPublishing, CSLButtonEventPublisherDelegate> {
  /* instance variables */
  unsigned long long _buttonTapDelayMach;
  CSLButtonEvent *_pendingEvent;
  NSTimer *_tapDelayTimer;
}

@property (weak, nonatomic) NSObject<CSLButtonEventPublisherDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)eventPublisher:(id)publisher publishedEvent:(id)event;
- (void)publishWithDelay:(id)delay;
- (void)_tapDelayTimerFired:(id)fired;
@end

#endif /* CSLButtonInstantTapFilter_h */