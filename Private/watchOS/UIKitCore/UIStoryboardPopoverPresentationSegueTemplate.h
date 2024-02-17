//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStoryboardPopoverPresentationSegueTemplate_h
#define UIStoryboardPopoverPresentationSegueTemplate_h
@import Foundation;

#include "UIStoryboardSegueTemplate.h"
#include "UIBarButtonItem.h"
#include "UIView.h"

@class NSArray;

@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate

@property (nonatomic) unsigned long long permittedArrowDirections;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (retain, nonatomic) UIView *anchorView;
@property (retain, nonatomic) UIBarButtonItem *anchorBarButtonItem;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id /* block */)newDefaultPrepareHandlerForSegue:(id)segue;
- (id /* block */)newDefaultPerformHandlerForSegue:(id)segue;
@end

#endif /* UIStoryboardPopoverPresentationSegueTemplate_h */