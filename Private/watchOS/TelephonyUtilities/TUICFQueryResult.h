//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUICFQueryResult_h
#define TUICFQueryResult_h
@import Foundation;

@interface TUICFQueryResult : NSObject

@property (nonatomic) BOOL allowCallForDestinationID;
@property (nonatomic) BOOL fromBlockList;

/* instance methods */
- (id)description;
- (BOOL)isFromBlockList;
@end

#endif /* TUICFQueryResult_h */