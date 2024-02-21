//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMListGroceryContext_h
#define REMListGroceryContext_h
@import Foundation;

#include "REMList.h"

@class NSString;

@interface REMListGroceryContext : NSObject

@property (retain, nonatomic) REMList *list;
@property (readonly, nonatomic) BOOL shouldCategorizeGroceryItems;
@property (readonly, nonatomic) BOOL shouldSuggestConversionToGroceryList;
@property (readonly, nonatomic) NSString *groceryLocaleID;

/* instance methods */
- (id)initWithList:(id)list;
@end

#endif /* REMListGroceryContext_h */