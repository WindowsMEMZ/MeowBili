//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWebFormDelegate_h
#define UIWebFormDelegate_h
@import Foundation;

#include "UIWebBrowserView.h"
#include "WebFormDelegate-Protocol.h"
#include "_UIWebFormDelegateEditedFormsMap.h"

@class NSString;

@interface UIWebFormDelegate : NSObject<WebFormDelegate> {
  /* instance variables */
  UIWebBrowserView *_webBrowserView;
  _UIWebFormDelegateEditedFormsMap *_editedForms;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_didEditFormElement:(id)element inFrame:(id)frame;
- (BOOL)_shouldIgnoreFormTextChangesInFrame:(id)frame;
- (void)_clearEditedFormsInFrame:(id)frame;
- (void)dealloc;
- (void)frame:(id)frame sourceFrame:(id)frame willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;
- (void)textDidChangeInTextArea:(id)area inFrame:(id)frame;
- (void)textDidChangeInTextField:(id)field inFrame:(id)frame;
- (void)textFieldDidBeginEditing:(id)editing inFrame:(id)frame;
- (void)textFieldDidEndEditing:(id)editing inFrame:(id)frame;
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;
- (void)didFocusTextField:(id)field inFrame:(id)frame;
- (void)willSendSubmitEventToForm:(id)form inFrame:(id)frame withValues:(id)values;
- (id)initWithWebBrowserView:(id)view;
- (void)dataSourceHasChangedForFrame:(id)frame;
- (BOOL)formWasEdited;
- (struct { id x0; unsigned long long x1; })suggestionsForString:(id)string inputIndex:(unsigned int)index;
- (BOOL)hasCurrentSuggestions;
- (void)acceptedAutoFillWord:(id)word;
@end

#endif /* UIWebFormDelegate_h */