//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWebSelectMultiplePicker_h
#define UIWebSelectMultiplePicker_h
@import Foundation;

#include "UIPickerView.h"
#include "UIPickerViewDataSource-Protocol.h"
#include "UIPickerViewDelegate-Protocol.h"
#include "UIWebFormControl-Protocol.h"
#include "UIWebSelectedItemPrivate-Protocol.h"

@class DOMHTMLSelectElement, NSArray, NSString;

@interface UIWebSelectMultiplePicker : UIPickerView<UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
  /* instance variables */
  DOMHTMLSelectElement *_selectionNode;
  NSArray *_cachedItems;
  NSObject<UIWebSelectedItemPrivate> *_singleSelectionItem;
  unsigned long long _singleSelectionIndex;
  double _fontSize;
  double _maximumTextWidth;
  long long _textAlignment;
  double _layoutWidth;
}

@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode;
@property (retain, nonatomic) NSArray *_cachedItems;
@property (retain, nonatomic) NSObject<UIWebSelectedItemPrivate> *_singleSelectionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDOMHTMLSelectElement:(id)element cachedItems:(id)items singleSelectionItem:(id)item singleSelectionIndex:(unsigned long long)index multipleSelection:(BOOL)selection;
- (void)dealloc;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (void)layoutSubviews;
- (id)pickerView:(id)view viewForRow:(long long)row forComponent:(long long)component reusingView:(id)view;
- (long long)numberOfComponentsInPickerView:(id)view;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;
- (int)_itemIndexForRowIndex:(int)index;
- (void)pickerView:(id)view row:(int)row column:(int)column checked:(BOOL)checked;
@end

#endif /* UIWebSelectMultiplePicker_h */