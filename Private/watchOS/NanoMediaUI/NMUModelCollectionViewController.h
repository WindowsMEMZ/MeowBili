//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUModelCollectionViewController_h
#define NMUModelCollectionViewController_h
@import Foundation;

#include "PUICCollectionViewController.h"
#include "NMUModelCollectionDataSource-Protocol.h"
#include "NMUModelCollectionDelegate-Protocol.h"

@class NSArray, NSHashTable;

@interface NMUModelCollectionViewController : PUICCollectionViewController {
  /* instance variables */
  NSHashTable *_registeredCellClasses;
}

@property (weak, nonatomic) NSObject<NMUModelCollectionDataSource> *dataSource;
@property (weak, nonatomic) NSObject<NMUModelCollectionDelegate> *delegate;
@property (retain, nonatomic) NSArray *topItems;
@property (retain, nonatomic) NSArray *bottomItems;
@property (readonly, nonatomic) NSArray *visibleTopItems;
@property (readonly, nonatomic) NSArray *visibleBottomItems;

/* instance methods */
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (id)dataSourceIndexPathForCollectionIndexPath:(id)path;
- (id)dataSourceIndexPathsForCollectionIndexPaths:(id)paths;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)_setNeedsVisibleTopItemsUpdate;
- (void)_setNeedsVisibleBottomItemsUpdate;
@end

#endif /* NMUModelCollectionViewController_h */