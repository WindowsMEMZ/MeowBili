//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUITemplateBaseItemGroup_h
#define SAUITemplateBaseItemGroup_h
@import Foundation;

#include "SAUITemplateBaseItem.h"
#include "SAUITemplateEdgeInsets.h"
#include "SAUITemplateItemGroup-Protocol.h"

@class NSArray, NSString;

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem<SAUITemplateItemGroup>

@property (copy, nonatomic) NSArray *templateItems;
@property (copy, @dynamic, nonatomic) NSArray *communicationOptions;
@property (retain, @dynamic, nonatomic) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (@dynamic, nonatomic) BOOL hasPriorityLayout;
@property (retain, @dynamic, nonatomic) SAUITemplateEdgeInsets *padding;
@property (copy, @dynamic, nonatomic) NSArray *presentationOptions;
@property (@dynamic, nonatomic) BOOL shouldBeOffscreenInPartial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)baseItemGroup;
+ (id)baseItemGroupWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUITemplateBaseItemGroup_h */