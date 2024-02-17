//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISwipeOccurrence_h
#define UISwipeOccurrence_h
@import Foundation;

#include "UIContextualAction.h"
#include "UISwipeActionController.h"
#include "UISwipeActionPullView.h"
#include "UISwipeActionPullViewDelegate-Protocol.h"
#include "_UISwipeViewManipulator-Protocol.h"

@class NSIndexPath, NSString;
@protocol UIView<_UISwipedView;

@interface UISwipeOccurrence : NSObject<UISwipeActionPullViewDelegate> {
  /* instance variables */
  struct { unsigned int x :1 isTransitioning; unsigned int x :1 didNotifyWillFinish; unsigned int x :1 didNotifyDidFinish; unsigned int x :1 shouldReenableUserInteraction; unsigned int x :1 isRTL; unsigned int x :1 hasAmbiguousIndexPath; unsigned int x :1 didReloadData; } _flags;
  unsigned long long _actionExecutionCounter;
  UISwipeActionController *_controller;
  unsigned long long _style;
  unsigned long long _defaultStyle;
  double _roundedStyleCornerRadius;
  UISwipeActionPullView *_leadingPullView;
  UISwipeActionPullView *_trailingPullView;
  NSObject<_UISwipeViewManipulator> *_manipulator;
}

@property (copy, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) unsigned long long configuredDirection;
@property (nonatomic) struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; } currentSwipeInfo;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } extraInsets;
@property (retain, nonatomic) UIView<_UISwipedView> *swipedView;
@property (nonatomic) BOOL swipedViewMaskWasRemoved;
@property (retain, nonatomic) UIContextualAction *currentAction;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) long long direction;
@property (nonatomic) double offset;
@property (readonly, nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithController:(id)controller indexPath:(id)path defaultStyle:(unsigned long long)style;
- (void)setupManipulatorWithController:(id)controller;
- (unsigned long long)_styleForConfiguration:(id)configuration;
- (struct { unsigned long long x0; BOOL x1; BOOL x2; double x3; double x4; })prepareWithSwipeDirection:(unsigned long long)direction configuration:(id)configuration;
- (void)resetWhilePreparing;
- (double)velocity;
- (void)beginSwipeTracking:(BOOL)tracking;
- (void)_forceTeardown;
- (void)endSwipe;
- (void)updateOffsetWithSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })info isTracking:(BOOL)tracking completion:(id /* block */)completion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })swipedViewRestingFrame;
- (void)_moveItemWithSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })info alongsideAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)resetAnimated:(BOOL)animated completion:(id /* block */)completion;
- (void)resetForReconfiguration;
- (void)_resetItemWithSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })info animated:(BOOL)animated deletion:(BOOL)deletion completion:(id /* block */)completion;
- (void)updateLayout;
- (void)_updateLayoutUsingCurrentSwipeInfo:(BOOL)info;
- (void)updateSwipedView;
- (void)_updateSwipedStateOnSwipedView:(BOOL)view;
- (void)_freezeSwipedViewInsets;
- (void)_unfreezeSwipedViewInsets;
- (void)performPrimaryActionWithSwipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })info;
- (BOOL)shouldDismissWithTouchLocation:(struct CGPoint { double x0; double x1; })location;
- (void)_transitionToState:(long long)state;
- (void)_setHasAmbiguousIndexPath;
- (BOOL)_hasAmbiguousIndexPath;
- (void)_setDidReloadData;
- (BOOL)_didReloadData;
- (unsigned long long)_style;
- (void)_executeLifecycleForPerformedAction:(id)action sourceView:(id)view completionHandler:(id /* block */)handler;
- (void)_performSwipeAction:(id)action inPullView:(id)view swipeInfo:(struct { unsigned long long x0; unsigned long long x1; BOOL x2; double x3; double x4; double x5; })info;
- (double)_extraOffsetForOffset:(double)offset withDirection:(unsigned long long)direction;
- (BOOL)_isSwipeDirectionExposingLeadingEdgePullView:(unsigned long long)view;
- (id)_pullViewForSwipeDirection:(unsigned long long)direction;
- (unsigned long long)_swipeDirectionForPullView:(id)view;
- (id)_pullViewForLeadingEdge:(BOOL)edge;
- (void)_updatePullView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForPullView:(id)view inSwipedItem:(id)item withContainer:(id)container;
- (void)_removeAndResetPullViewImmediately:(id)immediately;
- (id)_actionView;
- (id)actionView;
- (id)lockActionViewForAnimation;
- (void)unlockActionViewForAnimation:(id)animation;
- (void)swipeActionPullView:(id)view tappedAction:(id)action;
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)view;
@end

#endif /* UISwipeOccurrence_h */