//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNObservableSkipUntilSignalObserver_h
#define _CNObservableSkipUntilSignalObserver_h
@import Foundation;

#include "CNObserver-Protocol.h"
#include "_CNObservableSkipUntilSignalObserverDelegate-Protocol.h"

@class NSString;

@interface _CNObservableSkipUntilSignalObserver : NSObject<CNObserver>

@property (readonly, weak) NSObject<_CNObservableSkipUntilSignalObserverDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)observerDidReceiveResult:(id)result;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)error;
@end

#endif /* _CNObservableSkipUntilSignalObserver_h */