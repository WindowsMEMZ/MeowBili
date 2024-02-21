//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIAlertControllerTextFieldViewController_h
#define _UIAlertControllerTextFieldViewController_h
@import Foundation;

#include "UICollectionViewController.h"
#include "UIAlertControllerVisualStyle.h"
#include "UICollectionViewFlowLayout.h"
#include "_UIAlertControllerTextFieldViewControllerContaining-Protocol.h"

@class NSArray, NSMutableArray;

@interface _UIAlertControllerTextFieldViewController : UICollectionViewController {
  /* instance variables */
  NSMutableArray *textFieldViews;
  UICollectionViewFlowLayout *_collectionViewLayout;
}

@property (weak, nonatomic) NSObject<_UIAlertControllerTextFieldViewControllerContaining> *container;
@property (nonatomic) BOOL textFieldsCanBecomeFirstResponder;
@property (nonatomic) UIAlertControllerVisualStyle *visualStyle;
@property (readonly) NSArray *textFields;
@property (nonatomic) BOOL hidden;

/* instance methods */
- (id)init;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (double)_bottomMarginForTextFields;
- (id)addTextFieldWithPlaceholder:(id)placeholder;
- (void)_returnKeyPressedInTextField:(id)field;
- (void)_updatePreferredContentSize;
- (id)textFieldAtIndex:(long long)index;
- (id)textFieldContainerViews;
- (long long)numberOfTextFields;
- (void)removeAllTextFields;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)updateTextFieldStyle;
- (BOOL)resignFirstResponder;
- (BOOL)collectionView:(id)view canFocusItemAtIndexPath:(id)path;
- (BOOL)_canShowWhileLocked;
- (BOOL)isHidden;
@end

#endif /* _UIAlertControllerTextFieldViewController_h */