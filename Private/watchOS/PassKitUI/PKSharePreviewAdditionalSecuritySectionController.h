//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSharePreviewAdditionalSecuritySectionController_h
#define PKSharePreviewAdditionalSecuritySectionController_h
@import Foundation;

#include "PKPassShareSectionController.h"
#include "PKPassShareInitiationContext.h"
#include "PKSharePreviewAdditionalSecuritySectionControllerDelegate-Protocol.h"

@class NSString, PKPassShareActivationOptions;

@interface PKSharePreviewAdditionalSecuritySectionController : PKPassShareSectionController {
  /* instance variables */
  unsigned long long _mode;
  PKPassShareActivationOptions *_activationOptions;
  PKPassShareInitiationContext *_context;
  NSObject<PKSharePreviewAdditionalSecuritySectionControllerDelegate> *_delegate;
  NSString *_footerText;
}

/* instance methods */
- (id)init;
- (id)initWithInitiationContext:(id)context delegate:(id)delegate;
- (id)initWithMode:(unsigned long long)mode activationOptions:(id)options delegate:(id)delegate;
- (id)_initWithMode:(unsigned long long)mode activationOptions:(id)options context:(id)context delegate:(id)delegate;
- (void)setContext:(id)context;
- (void)reloadItemsAnimated:(BOOL)animated;
- (id)decorateListCell:(id)cell forRowItem:(id)item;
- (id)headerAttributedStringForIdentifier:(id)identifier;
- (id)footerAttributedStringForIdentifier:(id)identifier;
- (void)didSelectItem:(id)item;
- (void)_activationCodeSwitchValueChanged:(id)changed;
@end

#endif /* PKSharePreviewAdditionalSecuritySectionController_h */