//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SUIShareActivity_h
#define SUIShareActivity_h
@import Foundation;

#include "UIActivity.h"

@interface SUIShareActivity : UIActivity
/* class methods */
+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

/* instance methods */
- (id)activityType;
- (long long)_defaultSortGroup;
- (id)_systemImageName;
- (id)activityTitle;
- (BOOL)canPerformWithActivityItems:(id)items;
- (BOOL)ss_shouldExecuteInShareSheet;
- (BOOL)ss_shouldDismissHostsPresentationBeforePerforming;
@end

#endif /* SUIShareActivity_h */