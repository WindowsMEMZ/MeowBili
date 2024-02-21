//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef FCTagRanking_Protocol_h
#define FCTagRanking_Protocol_h
@import Foundation;

@protocol FCTagRanking <NSObject>
/* instance methods */
- (id)rankTagIDsDescending:(id)descending;
- (id)scoresForTagIDs:(id)ids;
- (void)prepareForUseWithCompletionHandler:(id /* block */)handler;
@end

#endif /* FCTagRanking_Protocol_h */