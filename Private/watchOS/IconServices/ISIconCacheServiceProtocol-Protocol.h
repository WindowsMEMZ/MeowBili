//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISIconCacheServiceProtocol_Protocol_h
#define ISIconCacheServiceProtocol_Protocol_h
@import Foundation;

@protocol ISIconCacheServiceProtocol <NSObject>
/* instance methods */
- (void)clearCachedItemsForBundeID:(id)id reply:(id /* block */)reply;
- (void)fetchCacheConfigurationWithReply:(id /* block */)reply;
- (void)generateImageWithRequest:(id)request reply:(id /* block */)reply;
@end

#endif /* ISIconCacheServiceProtocol_Protocol_h */