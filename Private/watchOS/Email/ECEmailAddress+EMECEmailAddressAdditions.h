//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECEmailAddress_EMECEmailAddressAdditions_h
#define ECEmailAddress_EMECEmailAddressAdditions_h
@import Foundation;

@interface ECEmailAddress (EMECEmailAddressAdditions)
/* class methods */
+ (id)em_partiallyRedactedPeople:(id)people;

/* instance methods */
- (id)em_displayableString;
- (id)em_person;
@end

#endif /* ECEmailAddress_EMECEmailAddressAdditions_h */