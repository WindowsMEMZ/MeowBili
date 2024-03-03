//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICPlayActivityServerProtocol_Protocol_h
#define ICPlayActivityServerProtocol_Protocol_h
@import Foundation;

@protocol ICPlayActivityServerProtocol <NSObject>
/* instance methods */
- (void)insertPlayActivityEvents:(id)events shouldFlush:(BOOL)flush withCompletionHandler:(id /* block */)handler;
- (void)flushPendingPlayActivityEventsWithCompletionHandler:(id /* block */)handler;
@end

#endif /* ICPlayActivityServerProtocol_Protocol_h */