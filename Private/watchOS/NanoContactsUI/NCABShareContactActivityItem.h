//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 378.2.12.0.0
//
#ifndef NCABShareContactActivityItem_h
#define NCABShareContactActivityItem_h
@import Foundation;

#include "UIActivityItemLinkPresentationSource-Protocol.h"
#include "UIActivityItemSource-Protocol.h"
#include "UIActivityItemSourceAttachment-Protocol.h"

@class CNContact, LPFileMetadata, LPLinkMetadata, NSString;

@interface NCABShareContactActivityItem : NSObject<UIActivityItemSource, UIActivityItemSourceAttachment, UIActivityItemLinkPresentationSource>

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) LPLinkMetadata *linkMetadata;
@property (retain, nonatomic) LPFileMetadata *fileMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)descriptorForRequiredKeys;

/* instance methods */
- (id)initWithContact:(id)contact;
- (id)thumbnailImage;
- (id)activityViewControllerLinkPresentationMetadata:(id)metadata;
- (id)activityViewControllerPlaceholderItem:(id)item;
- (id)activityViewController:(id)controller itemForActivityType:(id)type;
- (id)activityViewController:(id)controller subjectForActivityType:(id)type;
- (id)activityViewController:(id)controller thumbnailImageForActivityType:(id)type suggestedSize:(struct CGSize { double x0; double x1; })size;
- (id)activityViewController:(id)controller dataTypeIdentifierForActivityType:(id)type;
- (id)activityViewController:(id)controller attachmentNameForActivityType:(id)type;
@end

#endif /* NCABShareContactActivityItem_h */