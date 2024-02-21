//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBApplicationDataStoreRepositoryReadingDelegate_Protocol_h
#define FBApplicationDataStoreRepositoryReadingDelegate_Protocol_h
@import Foundation;

@protocol FBApplicationDataStoreRepositoryReadingDelegate <NSObject>
/* instance methods */
- (void)objectChangedForKeys:(id)keys application:(id)application;
- (void)storeInvalidatedForIdentifier:(id)identifier;
@end

#endif /* FBApplicationDataStoreRepositoryReadingDelegate_Protocol_h */