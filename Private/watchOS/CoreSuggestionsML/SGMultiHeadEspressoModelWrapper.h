//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGMultiHeadEspressoModelWrapper_h
#define SGMultiHeadEspressoModelWrapper_h
@import Foundation;

@class NSDictionary, NSString, _PASLazyPurgeableResult;

@interface SGMultiHeadEspressoModelWrapper : NSObject

@property (retain, nonatomic) NSString *espressoModelFile;
@property (retain, nonatomic) NSString *inputName;
@property (retain, nonatomic) NSDictionary *headDimensionality;
@property (retain, nonatomic) _PASLazyPurgeableResult *model;

/* instance methods */
@end

#endif /* SGMultiHeadEspressoModelWrapper_h */