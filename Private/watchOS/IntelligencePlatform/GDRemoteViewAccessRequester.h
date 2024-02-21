//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 75.3.6.0.1
//
#ifndef GDRemoteViewAccessRequester_h
#define GDRemoteViewAccessRequester_h
@import Foundation;

#include "GDViewAccessRequester-Protocol.h"

@class NSString, _PASLock;

@interface GDRemoteViewAccessRequester : NSObject<GDViewAccessRequester> {
  /* instance variables */
  _PASLock *_lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)currentProcessIsSandboxed;

/* instance methods */
- (id)init;
- (id)_requestAssertionForViewName:(id)name error:(id *)error;
- (id)requestAssertionForViewName:(id)name error:(id *)error;
@end

#endif /* GDRemoteViewAccessRequester_h */