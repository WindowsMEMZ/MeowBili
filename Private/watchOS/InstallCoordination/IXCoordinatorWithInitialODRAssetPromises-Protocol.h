//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXCoordinatorWithInitialODRAssetPromises_Protocol_h
#define IXCoordinatorWithInitialODRAssetPromises_Protocol_h
@import Foundation;

@protocol IXCoordinatorWithInitialODRAssetPromises <NSObject>

@property (readonly, nonatomic) BOOL hasInitialODRAssetPromises;

/* instance methods */
- (BOOL)setInitialODRAssetPromises:(id)promises error:(id *)error;
- (id)initialODRAssetPromisesWithError:(id *)error;
@end

#endif /* IXCoordinatorWithInitialODRAssetPromises_Protocol_h */