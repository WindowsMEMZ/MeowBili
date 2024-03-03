//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDeferredMenuElementGroup_h
#define WFDeferredMenuElementGroup_h
@import Foundation;

#include "WFMenuElement-Protocol.h"
#include "WFMenuElementGroup-Protocol.h"

@class NSString;

@interface WFDeferredMenuElementGroup : NSObject<WFMenuElement, WFMenuElementGroup>

@property (readonly, nonatomic) id /* block */ itemProvider;
@property (nonatomic) long long estimatedItemCount;
@property (nonatomic) BOOL mayContainSelectedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL onlyDisplayTitleWhenCollapsed;

/* instance methods */
- (id)initWithProvider:(id /* block */)provider;
- (BOOL)shouldCollapse;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* WFDeferredMenuElementGroup_h */