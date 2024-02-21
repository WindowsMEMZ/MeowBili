//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASTStockComparisonItem_h
#define SASTStockComparisonItem_h
@import Foundation;

#include "AceObject.h"
#include "SASTTemplateItem-Protocol.h"
#include "SAUIDecoratedText.h"

@class NSString;

@interface SASTStockComparisonItem : AceObject<SASTTemplateItem>

@property (copy, nonatomic) NSString *stockValueFacet;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (retain, nonatomic) SAUIDecoratedText *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)stockComparisonItem;
+ (id)stockComparisonItemWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SASTStockComparisonItem_h */