//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSAttSiriEndpointerNodeDelegate_Protocol_h
#define CSAttSiriEndpointerNodeDelegate_Protocol_h
@import Foundation;

@protocol CSAttSiriEndpointerNodeDelegate <NSObject>
/* instance methods */
- (void)attSiriNode:(id)node didDetectHardEndpointAtTime:(double)time withMetrics:(id)metrics usesAutomaticEndPointing:(BOOL)pointing;
- (void)attSiriNode:(id)node didDetectStartpointAtTime:(double)time;
@optional
/* instance methods */
- (void)attSiriNode:(id)node didDetectEndpointEventAtTime:(double)time eventType:(long long)type withMetrics:(id)metrics useEndpointerSignal:(BOOL)signal;
- (void)attSiriNode:(id)node registerEndpointerProxy:(id)proxy;
@end

#endif /* CSAttSiriEndpointerNodeDelegate_Protocol_h */