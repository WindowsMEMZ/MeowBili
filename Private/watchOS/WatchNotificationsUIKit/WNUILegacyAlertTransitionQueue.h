//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUILegacyAlertTransitionQueue_h
#define WNUILegacyAlertTransitionQueue_h
@import Foundation;

#include "WNUILegacyAlertTransitionItem.h"
#include "WNUILegacyAlertTransitionQueueDelegate-Protocol.h"

@class NSMutableArray;

@interface WNUILegacyAlertTransitionQueue : NSObject

@property (retain, nonatomic) WNUILegacyAlertTransitionItem *currentItem;
@property (readonly, nonatomic) NSMutableArray *transitionItems;
@property (weak, nonatomic) NSObject<WNUILegacyAlertTransitionQueueDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)enqueueTransition:(id)transition containerView:(id)view alertViewController:(id)controller;
- (void)enqueueTransitionWithContext:(id)context animator:(id)animator;
- (void)_startNextTransitionIfNeeded;
- (void)_startSingleAlertTransitionWithItem:(id)item;
- (void)_startAlertToAlertTransitionWithItem:(id)item;
- (void)didCompleteTransition:(id)transition;
- (void)didCompleteTransitionItem;
- (unsigned long long)transitionActionForTransition:(id)transition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })finalFrameForTransition:(id)transition inContainer:(id)container;
- (void)configureView:(id)view inContainerView:(id)view withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* WNUILegacyAlertTransitionQueue_h */