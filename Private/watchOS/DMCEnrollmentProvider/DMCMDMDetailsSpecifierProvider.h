//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.26.3.6.0
//
#ifndef DMCMDMDetailsSpecifierProvider_h
#define DMCMDMDetailsSpecifierProvider_h
@import Foundation;

#include "DMCSpecifierProvider.h"

@interface DMCMDMDetailsSpecifierProvider : DMCSpecifierProvider
/* instance methods */
- (id)specifiers;
- (id)_specifierForMDMProfile;
- (void)_specifierForMDMProfileWasTapped:(id)tapped;
@end

#endif /* DMCMDMDetailsSpecifierProvider_h */