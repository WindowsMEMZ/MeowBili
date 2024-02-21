//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentVerificationObserver_h
#define PKPaymentVerificationObserver_h
@import Foundation;

#include "OS_dispatch_source-Protocol.h"
#include "PKPaymentPass.h"
#include "PKVerificationChannel.h"

@class IMOneTimeCodeAccelerator, NSString;
@protocol OS_dispatch_queue, PKPaymentVerificationObserverDelegate;

@interface PKPaymentVerificationObserver : NSObject {
  /* instance variables */
  BOOL _observing;
  NSObject<OS_dispatch_queue> *_internalQueue;
  NSObject<OS_dispatch_source> *_timer;
  IMOneTimeCodeAccelerator *_oneTimeCodeObserver;
}

@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) PKPaymentPass *pass;
@property (readonly, retain, nonatomic) PKVerificationChannel *verificationChannel;
@property (weak, nonatomic) NSObject<PKPaymentVerificationObserverDelegate> *delegate;
@property (nonatomic) BOOL skipSourceCheck;

/* instance methods */
- (id)initWithPaymentPass:(id)pass verificationChannel:(id)channel identifier:(id)identifier;
- (void)dealloc;
- (void)startObservingVerificationSourceWithTimeout:(double)timeout;
- (void)stop;
- (void)_queue_stop;
@end

#endif /* PKPaymentVerificationObserver_h */