//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAlertBackgroundProvider_h
#define CSLAlertBackgroundProvider_h
@import Foundation;

#include "CUISAlertBackgroundProvider-Protocol.h"

@class CUISAlertBackground, UIImage, UIView, _UIBackdropViewSettings;

@interface CSLAlertBackgroundProvider : NSObject<CUISAlertBackgroundProvider> {
  /* instance variables */
  UIView *_view;
  UIImage *_image;
}

@property (retain, nonatomic) _UIBackdropViewSettings *backdropViewSettings;
@property (weak, nonatomic) CUISAlertBackground *background;

/* class methods */
+ (id)carouselBackgroundProviderIncludingAlertWindow:(BOOL)window;
+ (id)backgroundProviderWithScreen:(id)screen;
+ (id)backgroundProviderWithWindows:(id)windows;
+ (id)sceneAlertsBackgroundProvider;

/* instance methods */
- (id)view;
- (id)image;
@end

#endif /* CSLAlertBackgroundProvider_h */