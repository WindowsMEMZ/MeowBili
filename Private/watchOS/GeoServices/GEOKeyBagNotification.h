//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOKeyBagNotification_h
#define GEOKeyBagNotification_h
@import Foundation;

@interface GEOKeyBagNotification : NSObject {
  /* instance variables */
  int _currentState;
  int _notifyTokenBeforeFirstUnlock;
  int _notifyTokenAfterFirstUnlock;
}

@property (readonly, nonatomic) int state;

/* class methods */
+ (id)sharedObject;
+ (BOOL)canAccessFilesWithProtection:(unsigned long long)protection;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)canAccessFilesWithProtection:(unsigned long long)protection;
- (BOOL)addDataDidBecomeAvailableAfterFirstUnlockObserver:(id)observer;
- (void)runAfterFirstUnlock:(id)unlock block:(id /* block */)block;
- (void)updateState;
@end

#endif /* GEOKeyBagNotification_h */