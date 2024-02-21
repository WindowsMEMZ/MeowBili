//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef NCClockIconViewController_h
#define NCClockIconViewController_h
@import Foundation;

#include "UIViewController.h"
#include "CSLUIIconView.h"
#include "NCClockIconView.h"
#include "NCClockIconViewZoomController-Protocol.h"

@class NSString;
@protocol UIViewController<NTKClockIconZoomAnimator;

@interface NCClockIconViewController : UIViewController<NCClockIconViewZoomController> {
  /* instance variables */
  NCClockIconView *_clockIconView;
  UIViewController<NTKClockIconZoomAnimator> *_zoomViewController;
}

@property (retain, @dynamic, nonatomic) CSLUIIconView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (void)dealloc;
- (void)addClockZoomViewController:(id)controller;
- (void)pauseClockIcon:(BOOL)icon;
- (void)clockIconViewPrepareZoom:(id)zoom;
- (void)clockIconView:(id)view setZoomDiameter:(double)diameter;
- (void)clockIconViewCleanupZoom:(id)zoom;
@end

#endif /* NCClockIconViewController_h */