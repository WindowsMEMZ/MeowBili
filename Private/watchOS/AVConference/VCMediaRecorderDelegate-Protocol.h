//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCMediaRecorderDelegate_Protocol_h
#define VCMediaRecorderDelegate_Protocol_h
@import Foundation;

@protocol VCMediaRecorderDelegate <NSObject>
/* instance methods */
- (void)streamToken:(long long)token didStartProcessingRequest:(id)request error:(id)error;
- (void)streamToken:(long long)token didEndProcessingRequest:(id)request stillImageURL:(id)url movieURL:(id)url error:(id)error;
- (void)streamToken:(long long)token didFinishRequest:(id)request didSucceed:(BOOL)succeed;
- (void)streamTokenDidCleanupAllRequests:(long long)requests;
- (void)streamToken:(long long)token didUpdateCapabilities:(unsigned int)capabilities;
@end

#endif /* VCMediaRecorderDelegate_Protocol_h */