//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef _CNObservableSkipUntilOperator_h
#define _CNObservableSkipUntilOperator_h
@import Foundation;

#include "CNObservable.h"
#include "CNCancelable-Protocol.h"
#include "CNObservable.h"
#include "_CNObservableSkipUntilInputObserverDelegate-Protocol.h"
#include "_CNObservableSkipUntilSignalObserverDelegate-Protocol.h"

@class NSString;

@interface _CNObservableSkipUntilOperator : CNObservable<_CNObservableSkipUntilSignalObserverDelegate, _CNObservableSkipUntilInputObserverDelegate>

@property (readonly) CNObservable *input;
@property (readonly) CNObservable *signal;
@property BOOL active;
@property (retain) NSObject<CNCancelable> *inputToken;
@property (retain) NSObject<CNCancelable> *signalToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithInput:(id)input signal:(id)signal;
- (id)subscribe:(id)subscribe;
- (void)cancel;
- (BOOL)shouldMirrorEvents;
- (void)inputDidTerminate;
- (void)signalDidGenerateEvent;
- (BOOL)isActive;
@end

#endif /* _CNObservableSkipUntilOperator_h */