//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPersonInformationSectionProvider_h
#define NPKPersonInformationSectionProvider_h
@import Foundation;

#include "NPKCardInformationDetailCollectionViewSectionProvider.h"

@interface NPKPersonInformationSectionProvider : NPKCardInformationDetailCollectionViewSectionProvider
/* class methods */
+ (BOOL)passIsAppleAccess:(id)access;
+ (BOOL)showAccessInformationForPass:(id)pass;
+ (id)_personFieldsForPassFieldBuckets:(id)buckets;

/* instance methods */
- (id)sectionIdentifiers;
- (id)titleForSectionWithIdentifier:(id)identifier;
- (id)itemsForSectionWithIdentifier:(id)identifier;
@end

#endif /* NPKPersonInformationSectionProvider_h */