//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPConnectionMetrics_h
#define RPConnectionMetrics_h
@import Foundation;

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPConnectionMetrics : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _reportLock;
  NSObject<OS_dispatch_queue> *_reportQueue;
  NSObject<OS_dispatch_source> *_reportTimer;
  BOOL _sendReport;
  unsigned long long _eventCount;
}

@property (retain, nonatomic) NSMutableDictionary *rttMetrics;

/* class methods */
+ (id)sharedMetrics;

/* instance methods */
- (id)init;
- (unsigned char)lengthToBucketIndex:(unsigned long long)index;
- (unsigned char)linkTypeToBucketIndex:(int)index;
- (unsigned char)rttToBucketIndex:(unsigned long long)index;
- (void)logConnectionWithDeviceModelFrom:(id)from deviceModelTo:(id)to error:(id)error initiator:(id)initiator isOnDemand:(BOOL)demand isStereoPair:(BOOL)pair lifetime:(unsigned long long)lifetime linkType:(int)type;
- (void)logMessageForClient:(id)client length:(unsigned long long)length linkType:(int)type;
- (void)logRequestOnLinkType:(int)type length:(unsigned long long)length rtt:(unsigned long long)rtt;
- (void)reportMetrics;
@end

#endif /* RPConnectionMetrics_h */