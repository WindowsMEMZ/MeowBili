//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 48.26.0.0.0
//
#ifndef RTCReportingAVCDeprecatedPeriodic_h
#define RTCReportingAVCDeprecatedPeriodic_h
@import Foundation;

#include "RTCReporting.h"

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RTCReportingAVCDeprecatedPeriodic : NSObject {
  /* instance variables */
  int _counter;
  NSMutableDictionary *_periodicServiceDict;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_periodicTaskQueue;
  NSObject<OS_dispatch_source> *_timer;
  RTCReporting *_session;
}

/* instance methods */
- (id)initWithSession:(id)session;
- (void)dealloc;
- (void)_myPeriodicTask:(unsigned short)task type:(unsigned short)type intervalMultiplier:(int)multiplier updateTimeout:(unsigned long long)timeout;
- (void)startLogTimerWithInterval:(int)interval reportingMultiplier:(int)multiplier category:(unsigned short)category type:(unsigned short)type;
- (void)stopLogTimer;
- (BOOL)registerPeriodicTaskForModule:(unsigned int)module needToUpdate:(BOOL)update needToReport:(BOOL)report serviceBlock:(id /* block */)block;
- (BOOL)unregisterPeriodTaskForModule:(unsigned int)module;
@end

#endif /* RTCReportingAVCDeprecatedPeriodic_h */