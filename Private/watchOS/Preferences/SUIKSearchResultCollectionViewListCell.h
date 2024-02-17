//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef SUIKSearchResultCollectionViewListCell_h
#define SUIKSearchResultCollectionViewListCell_h
@import Foundation;

#include "UICollectionViewListCell.h"

@class CSSearchableItem;

@interface SUIKSearchResultCollectionViewListCell : UICollectionViewListCell

@property (retain, nonatomic) CSSearchableItem *searchableItem;

/* class methods */
+ (id)reuseIdentifier;

/* instance methods */
- (void)prepareForReuse;
- (void)updateConfigurationUsingState:(id)state;
- (void)configureWithSearchableItem:(id)item;
@end

#endif /* SUIKSearchResultCollectionViewListCell_h */