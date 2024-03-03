//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICTransactionCommitCoordinator_h
#define PUICTransactionCommitCoordinator_h
@import Foundation;

@class NSMutableArray;

@interface PUICTransactionCommitCoordinator : NSObject {
  /* instance variables */
  NSMutableArray *_commitHandlers;
}

/* class methods */
+ (BOOL)addImplicitTransactionCommitHandler:(id /* block */)handler;
+ (id)_sharedInstance;

/* instance methods */
- (id)init;
- (BOOL)_addImplicitTransactionCommitHandler:(id /* block */)handler;
- (void)_registerCATransactionCommitHandler;
@end

#endif /* PUICTransactionCommitCoordinator_h */