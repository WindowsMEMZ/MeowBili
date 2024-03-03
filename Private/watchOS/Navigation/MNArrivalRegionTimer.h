//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNArrivalRegionTimer_h
#define MNArrivalRegionTimer_h
@import Foundation;

#include "MNArrivalRegionTimerDelegate-Protocol.h"

@class GEOArrivalRegion, NSTimer;

@interface MNArrivalRegionTimer : NSObject {
  /* instance variables */
  GEOArrivalRegion *_arrivalRegion;
  NSTimer *_timer;
}

@property (weak, nonatomic) NSObject<MNArrivalRegionTimerDelegate> *delegate;

/* instance methods */
- (id)init;
- (id)initWithArrivalRegion:(id)region;
- (void)dealloc;
- (void)updateForLocation:(id)location;
@end

#endif /* MNArrivalRegionTimer_h */