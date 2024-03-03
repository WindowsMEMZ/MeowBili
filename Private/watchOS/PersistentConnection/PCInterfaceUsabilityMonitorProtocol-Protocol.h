//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 543.100.1.0.0
//
#ifndef PCInterfaceUsabilityMonitorProtocol_Protocol_h
#define PCInterfaceUsabilityMonitorProtocol_Protocol_h
@import Foundation;

@protocol PCInterfaceUsabilityMonitorProtocol <PCInterfaceMonitorProtocol>

@property (readonly, nonatomic) BOOL isRadioHot;
@property (nonatomic) NSObject<PCInterfaceUsabilityMonitorDelegate> *delegate;

/* instance methods */
- (void)setTrackedTimeInterval:(double)interval;
- (void)setThresholdOffTransitionCount:(unsigned long long)count;
- (void)setTrackUsability:(BOOL)usability;
@end

#endif /* PCInterfaceUsabilityMonitorProtocol_Protocol_h */