//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKUIPaymentSetupHeroView_h
#define NPKUIPaymentSetupHeroView_h
@import Foundation;

#include "UIView.h"
#include "PKPaymentHeroImageControllerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, PKImageSequenceView, PKPaymentHeroImageController;

@interface NPKUIPaymentSetupHeroView : UIView<PKPaymentHeroImageControllerDelegate> {
  /* instance variables */
  PKImageSequenceView *_cardCarouselView;
  PKPaymentHeroImageController *_heroImageController;
  NSMutableArray *_heroImageIdentifiers;
  NSMutableDictionary *_uiImagesByIdentifierDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHeroImageController:(id)controller heroImages:(id)images;
- (id)_sequenceUIImages;
- (BOOL)_addHeroImage:(id)image data:(id)data;
- (void)_initializeFromHeroImages:(id)images primaryImageIdentifier:(id)identifier;
- (void)_addSubViewsWithImages:(id)images;
- (void)_addConstraints;
- (void)_refreshSequenceUIImages;
- (void)_imageFailedToDownload:(id)download error:(id)error;
- (void)_configureForSize:(struct CGSize { double x0; double x1; })size;
- (void)layoutSubviews;
- (void)heroImageController:(id)controller didFinishDownloadingImageData:(id)data forImage:(id)image error:(id)error;
- (void)startAnimation;
- (void)stopAnimation;
@end

#endif /* NPKUIPaymentSetupHeroView_h */