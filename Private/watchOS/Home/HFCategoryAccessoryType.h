//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCategoryAccessoryType_h
#define HFCategoryAccessoryType_h
@import Foundation;

#include "HFAccessoryType.h"

@class NSString;

@interface HFCategoryAccessoryType : HFAccessoryType

@property (readonly, nonatomic) NSString *categoryType;

/* class methods */
+ (id)na_identity;

/* instance methods */
- (id)initWithCategoryType:(id)type;
- (id)localizedCategory;
- (id)description;
- (id)debugDescription;
@end

#endif /* HFCategoryAccessoryType_h */