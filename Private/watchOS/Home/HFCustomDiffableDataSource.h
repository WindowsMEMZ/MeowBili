//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCustomDiffableDataSource_h
#define HFCustomDiffableDataSource_h
@import Foundation;

#include "HFCustomDiffableDataSourceSnapshot.h"
#include "HFDiffableDataSource-Protocol.h"

@class NSArray, NSString;

@interface HFCustomDiffableDataSource : NSObject<HFDiffableDataSource>

@property (retain, nonatomic) HFCustomDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) NSArray *sections;
@property (copy, nonatomic) id /* block */ supplementaryViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)applySnapshot:(id)snapshot animatingDifferences:(BOOL)differences completion:(id /* block */)completion;
- (void)applySnapshot:(id)snapshot toSection:(id)section animatingDifferences:(BOOL)differences completion:(id /* block */)completion;
- (id)itemIdentifierForIndexPath:(id)path;
- (id)indexPathForItemIdentifier:(id)identifier;
- (unsigned long long)_sectionForItem:(id)item;
- (unsigned long long)_sectionForItem:(id)item assertOnNotFound:(BOOL)found;
- (id)_indexPathForItem:(id)item inDisplayedItemsArray:(id)array;
@end

#endif /* HFCustomDiffableDataSource_h */