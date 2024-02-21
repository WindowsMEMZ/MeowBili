//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef _TtC16CarouselServices24CSLSSessionActionService_CarouselServices_h
#define _TtC16CarouselServices24CSLSSessionActionService_CarouselServices_h
@import Foundation;

@interface CarouselServices.CSLSSessionActionService (CarouselServices) <CSLSXPCRemoteInterface, CSLSXPCServiceDelegate>
/* instance methods */
- (void)handleInterruption:(id)interruption;
- (void)handleInvalidation:(id)invalidation;
- (void)connect:(id)connect completion:(id /* block */)completion;
@end

#endif /* _TtC16CarouselServices24CSLSSessionActionService_CarouselServices_h */