//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUArtistListHeaderView_h
#define NMUArtistListHeaderView_h
@import Foundation;

#include "NMUCollectionHeaderView.h"
#include "NMUCollectionConfiguring-Protocol.h"
#include "NMUCollectionSizing-Protocol.h"

@class NMCKeyValueObserver, NSString, UIImageView;

@interface NMUArtistListHeaderView : NMUCollectionHeaderView<NMUCollectionConfiguring, NMUCollectionSizing> {
  /* instance variables */
  UIImageView *_artworkRadiosityImageView;
  NMCKeyValueObserver *_artworkImageObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)artworkFormat;
+ (double)estimatedHeight;

/* instance methods */
- (long long)preferredContentAlignment;
- (double)preferredContentSpacing;
- (BOOL)prefersBaselineRelativeAlignement;
- (id)preferredItemOrder;
- (id)artworkImageView;
- (void)configureWithObject:(id)object context:(id)context;
- (void)_createRadiosityImageViewIfNeededWithArtworkImageView:(id)view;
@end

#endif /* NMUArtistListHeaderView_h */