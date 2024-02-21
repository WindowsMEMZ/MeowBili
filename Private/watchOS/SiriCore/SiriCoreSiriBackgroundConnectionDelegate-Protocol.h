//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.4.1.0.0
//
#ifndef SiriCoreSiriBackgroundConnectionDelegate_Protocol_h
#define SiriCoreSiriBackgroundConnectionDelegate_Protocol_h
@import Foundation;

@protocol SiriCoreSiriBackgroundConnectionDelegate <NSObject>
/* instance methods */
- (void)siriBackgroundConnection:(id)connection willStartWithConnectionType:(id)type;
- (void)siriBackgroundConnection:(id)connection didOpenWithConnectionType:(id)type routeId:(id)id delay:(double)delay;
- (void)siriBackgroundConnection:(id)connection didReceiveAceObject:(id)object;
- (void)siriBackgroundConnectionDidClose:(id)close;
- (void)siriBackgroundConnection:(id)connection didEncounterError:(id)error analysisInfo:(id)info;
- (void)siriBackgroundConnection:(id)connection didEncounterIntermediateError:(id)error;
@optional
/* instance methods */
- (void)siriBackgroundConnection:(id)connection willStartConnectionWithHTTPHeader:(id)httpheader;
@end

#endif /* SiriCoreSiriBackgroundConnectionDelegate_Protocol_h */