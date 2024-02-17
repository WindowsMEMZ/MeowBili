//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSystemStateXPCServerDelegate_Protocol_h
#define CSLSystemStateXPCServerDelegate_Protocol_h
@import Foundation;

@protocol CSLSystemStateXPCServerDelegate <NSObject>
/* instance methods */
- (void)server:(id)server setType:(unsigned long long)type enabled:(BOOL)enabled completion:(id /* block */)completion;
- (void)server:(id)server type:(unsigned long long)type getEnabled:(id /* block */)enabled;
@end

#endif /* CSLSystemStateXPCServerDelegate_Protocol_h */