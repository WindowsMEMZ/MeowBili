//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKNotificationObserver_h
#define VKNotificationObserver_h
@import Foundation;

#include "VKNotificationObserverDelegate-Protocol.h"

@protocol OS_dispatch_source;

@interface VKNotificationObserver : NSObject {
  /* instance variables */
  NSObject<VKNotificationObserverDelegate> *_target;
  SEL _selector;
  NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

/* instance methods */
- (id)initWithTarget:(id)target taskContext:(const void *)context;
- (void)dealloc;
- (void)_receivedMemoryNotification;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedLocalChangedNotification;
- (void)_receivedThermalStateDidChangeNotification;
- (void)_receivedPowerStateDidChangeNotification;
@end

#endif /* VKNotificationObserver_h */