//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIChoiceViewElement_h
#define RUIChoiceViewElement_h
@import Foundation;

#include "RUIElement.h"
#include "RUIChoiceView.h"
#include "RUIElement.h"
#include "RUIObjectModel.h"
#include "RUIPage.h"
#include "RUISubHeaderElement.h"
#include "RUITopLevelPageElement-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIImage;

@interface RUIChoiceViewElement : RUIElement<RUITopLevelPageElement> {
  /* instance variables */
  RUIChoiceView *_view;
  UIImage *_image;
}

@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) RUIPage *page;
@property (retain, nonatomic) RUIElement *header;
@property (retain, nonatomic) RUISubHeaderElement *subHeader;
@property (retain, nonatomic) RUIElement *helpLinkElement;
@property (readonly, nonatomic) NSArray *choices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAttributes:(id)attributes parent:(id)parent;
- (void)viewDidAppear:(BOOL)appear;
- (id)view;
- (id)viewForElementIdentifier:(id)identifier;
- (void)populatePostbackDictionary:(id)dictionary;
- (void)setTitle:(id)title;
- (void)setImage:(id)image;
- (void)setImageSize:(struct CGSize { double x0; double x1; })size;
- (void)setImageAlignment:(int)alignment;
- (void)addChoiceElement:(id)element;
- (id)_bigChoiceColor;
- (id)_smallChoiceColor;
- (id)_choiceColorWithAttribute:(id)attribute atIndex:(int)index;
- (void)choiceView:(id)view tappedChoiceAtIndex:(unsigned long long)index;
- (void)choiceViewTappedHelpLink:(id)link;
- (void)performAction:(int)action forElement:(id)element completion:(id /* block */)completion;
- (id)sourceURL;
@end

#endif /* RUIChoiceViewElement_h */