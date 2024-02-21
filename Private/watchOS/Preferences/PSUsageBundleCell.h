//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSUsageBundleCell_h
#define PSUsageBundleCell_h
@import Foundation;

#include "PSTableCell.h"

@interface PSUsageBundleCell : PSTableCell
/* instance methods */
- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)specifier;
- (void)layoutSubviews;
@end

#endif /* PSUsageBundleCell_h */