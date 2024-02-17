//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHOffersNetworkRequester_h
#define SHOffersNetworkRequester_h
@import Foundation;

#include "SHStorefront.h"

@interface SHOffersNetworkRequester : NSObject

@property (readonly, nonatomic) SHStorefront *storefront;

/* instance methods */
- (void)offersWithCompletion:(id /* block */)completion;
- (id)endpointURLWithHost:(id)host path:(id)path storefront:(id)storefront;
- (void)fetchOffersAtURL:(id)url completionHandler:(id /* block */)handler;
@end

#endif /* SHOffersNetworkRequester_h */