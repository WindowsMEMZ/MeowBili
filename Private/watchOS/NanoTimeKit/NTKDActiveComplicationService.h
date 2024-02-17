//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKDActiveComplicationService_h
#define NTKDActiveComplicationService_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"
#include "NTKActiveComplicationServer-Protocol.h"
#include "NTKDLoadOnceCollectionObserver.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface NTKDActiveComplicationService : NSObject<NSXPCListenerDelegate, NTKActiveComplicationServer> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  unsigned long long _state;
  NSMutableArray *_completionWrappers;
  NTKDLoadOnceCollectionObserver *_collectionObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedService;

/* instance methods */
- (void)start;
- (void)activeFaceContainsComplicationForApplicationWithBundleIdentifier:(id)identifier completion:(id /* block */)completion;
- (id)_init;
- (void)_queue_invokeCallbacksOnWrappersWithLoadedCollection:(id)collection;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)_queue_checkLibraryWithWrapper:(id)wrapper;
- (void)_queue_appendWrapper:(id)wrapper;
- (void)_queue_startFetchingLibrary;
@end

#endif /* NTKDActiveComplicationService_h */