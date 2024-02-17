//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 614.60.3.0.0
//
#ifndef OSAStateMonitor_h
#define OSAStateMonitor_h
@import Foundation;

@interface OSAStateMonitor : NSObject
/* class methods */
+ (void)evaluateState;
+ (void)recordEvent:(id)event;
+ (void)recordEvent:(id)event with:(id)with;
+ (void)checkCALogWrittenStatus;
+ (void)checkSubmissionStatus;
+ (void)postFailureWithReason:(id)reason;
+ (void)checkAndReportCALogStates;
+ (id)keyForEvent:(id)event;
+ (BOOL)processCALogEvent:(id)event eventPayload:(id)payload into:(id *)into;
+ (id)evaluateCALogStates:(id)states;
+ (id)CALogStateToString:(long long)string;
+ (id)dateForEvent:(id)event;
@end

#endif /* OSAStateMonitor_h */