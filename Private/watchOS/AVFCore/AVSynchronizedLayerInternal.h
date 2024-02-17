//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVSynchronizedLayerInternal_h
#define AVSynchronizedLayerInternal_h
@import Foundation;

#include "AVPlayerItem.h"

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface AVSynchronizedLayerInternal : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *serialQueue;
  NSObject<OS_dispatch_queue> *ivarAccessQueue;
  AVPlayerItem *playerItem;
  NSMutableSet *oldPlayerItems;
  BOOL isVisible;
}

@end

#endif /* AVSynchronizedLayerInternal_h */