//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2904.0.0.0.0
//
#ifndef REMSaveRequestNotifyChangeDelegate_Protocol_h
#define REMSaveRequestNotifyChangeDelegate_Protocol_h
@import Foundation;

@protocol REMSaveRequestNotifyChangeDelegate 

@property (readonly, nonatomic) OS_dispatch_queue *callbackQueue;

/* instance methods */
- (void)notifyEventFromSaveRequest:(id)request;
@end

#endif /* REMSaveRequestNotifyChangeDelegate_Protocol_h */