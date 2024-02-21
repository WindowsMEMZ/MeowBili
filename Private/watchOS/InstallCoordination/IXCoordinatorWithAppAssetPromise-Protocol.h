//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXCoordinatorWithAppAssetPromise_Protocol_h
#define IXCoordinatorWithAppAssetPromise_Protocol_h
@import Foundation;

@protocol IXCoordinatorWithAppAssetPromise <NSObject>

@property (readonly, nonatomic) BOOL hasAppAssetPromise;

/* instance methods */
- (BOOL)setAppAssetPromise:(id)promise error:(id *)error;
- (id)appAssetPromiseWithError:(id *)error;
- (BOOL)setAppAssetPromiseResponsibleClient:(unsigned long long)client error:(id *)error;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id *)error;
- (BOOL)appAssetPromiseHasBegunFulfillment:(BOOL *)fulfillment error:(id *)error;
@end

#endif /* IXCoordinatorWithAppAssetPromise_Protocol_h */