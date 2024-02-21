//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKInboxModel_h
#define CKInboxModel_h
@import Foundation;

#include "CKInboxModelDelegate-Protocol.h"

@class NSArray, NSDictionary;

@interface CKInboxModel : NSObject

@property (retain, nonatomic) NSArray *sections;
@property (copy, nonatomic) id /* block */ footerAction;
@property (retain, nonatomic) NSDictionary *itemsMap;
@property (weak, nonatomic) NSObject<CKInboxModelDelegate> *delegate;
@property (copy, nonatomic) id /* block */ logInboxViewedMetric;

/* instance methods */
- (id)initWithSections:(id)sections footerAction:(id /* block */)action;
- (id)buildItemsMap:(id)map;
- (void)setIsCollapsed:(BOOL)collapsed;
@end

#endif /* CKInboxModel_h */