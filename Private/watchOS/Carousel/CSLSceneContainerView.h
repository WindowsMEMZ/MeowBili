//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSceneContainerView_h
#define CSLSceneContainerView_h
@import Foundation;

#include "UIView.h"
#include "CSLActivateUIApplicationView.h"
#include "CSLModernStatusBarView.h"
#include "CSLUIApplicationIconDownloadProgressView.h"

@protocol UIView<UIScenePresentation;

@interface CSLSceneContainerView : UIView

@property (retain, nonatomic) UIView<UIScenePresentation> *contextHostView;
@property (retain, nonatomic) CSLActivateUIApplicationView *activationView;
@property (retain, nonatomic) CSLUIApplicationIconDownloadProgressView *downloadProgressView;
@property (readonly, nonatomic) CSLModernStatusBarView *statusBarView;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) BOOL displaysDebugFrames;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) long long interfaceOrientation;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_updateContextHostVisibilityForDisplayMode:(unsigned long long)mode;
- (void)_updateActivationVisibilityForDisplayMode:(unsigned long long)mode;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForInterfaceOrientation:(long long)orientation;
- (void)_updateDownloadProgressVisibilityForDisplayMode:(unsigned long long)mode;
- (void)_updateViewVisibilityForDisplayMode:(unsigned long long)mode;
- (void)updateDebugFramesWithDisplayMode:(unsigned long long)mode;
- (id)debugColorForDisplayMode:(unsigned long long)mode;
- (BOOL)isStatusBarHidden;
@end

#endif /* CSLSceneContainerView_h */