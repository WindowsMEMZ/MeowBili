//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebBookmarkChange_h
#define WebBookmarkChange_h
@import Foundation;

#include "WBChange-Protocol.h"
#include "WebBookmark.h"

@class NSArray, NSDictionary, NSString;

@interface WebBookmarkChange : NSObject<WBChange>

@property (nonatomic) int bookmarkID;
@property (nonatomic) int parentID;
@property (nonatomic) int associatedBookmarkID;
@property (nonatomic) int specialFolderID;
@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) WebBookmark *bookmark;
@property (nonatomic) unsigned long long modifiedAttributes;
@property (copy, nonatomic) NSArray *bookmarks;
@property (readonly, nonatomic) BOOL shouldSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (id)bookmarkAddChangeWithBookmark:(id)bookmark;
+ (id)bookmarkModifyChangeWithBookmark:(id)bookmark;
+ (id)deleteChangeWithBookmark:(id)bookmark;
+ (id)moveChangeWithBookmark:(id)bookmark toFolderWithID:(int)id;
+ (id)reorderChangeWithBookmark:(id)bookmark afterBookmark:(id)bookmark;
+ (id)replaceChangeWithBookmarks:(id)bookmarks inFolderWithID:(int)id;
+ (id)replaceChangeWithBookmarks:(id)bookmarks inFolderWithSpecialID:(int)id;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBookmarks:(id)bookmarks parentID:(int)id changeType:(long long)type;
- (id)initWithBookmarks:(id)bookmarks specialFolderID:(int)id changeType:(long long)type;
- (id)initWithBookmarks:(id)bookmarks parentID:(int)id specialFolderID:(int)id changeType:(long long)type;
- (id)initWithBookmarkID:(int)id parentID:(int)id changeType:(long long)type;
- (id)initWithBookmarkID:(int)id parentID:(int)id associatedBookmarkID:(int)id changeType:(long long)type;
- (id)initWithBookmark:(id)bookmark bookmarkID:(int)id parentID:(int)id changeType:(long long)type;
- (id)initWithBookmark:(id)bookmark bookmarkID:(int)id parentID:(int)id associatedBookmarkID:(int)id changeType:(long long)type;
- (id)initWithDictionaryRepresentation:(id)representation;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (void)applyModificationsToBookmark:(id)bookmark;
- (void)_setModifiedAttributesIfSupported;
- (BOOL)attributesMarkedAsModify:(unsigned long long)modify;
- (void)updateChangeAfterUpdatingInMemoryID:(int)id withDatabaseID:(int)id;
- (id)_stringForType:(long long)type;
@end

#endif /* WebBookmarkChange_h */