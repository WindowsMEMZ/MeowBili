//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyRadioPickerSectionController_h
#define PKApplyRadioPickerSectionController_h
@import Foundation;

#include "PKApplyCollectionViewSectionController.h"

@class PKPaymentSetupFieldPicker;

@interface PKApplyRadioPickerSectionController : PKApplyCollectionViewSectionController {
  /* instance variables */
  PKPaymentSetupFieldPicker *_picker;
}

/* instance methods */
- (id)initWithController:(id)controller applyPage:(id)page picker:(id)picker;
- (id)identifiers;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)environment sectionIdentifier:(id)identifier;
- (void)_configureContentSection:(id)section;
@end

#endif /* PKApplyRadioPickerSectionController_h */