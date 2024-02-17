//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSTrackedFirstParty_h
#define WBSTrackedFirstParty_h
@import Foundation;

#include "WBSTrackingCapableFirstParty.h"

@class NSArray;

@interface WBSTrackedFirstParty : WBSTrackingCapableFirstParty

@property (copy, nonatomic) NSArray *blockedTrackers;
@property (copy, nonatomic) NSArray *preventedTrackers;
@property (readonly, copy, nonatomic) NSArray *trackers;

/* instance methods */
- (id)initWithDomain:(id)domain;
- (id)initWithDomain:(id)domain blockedTrackers:(id)trackers preventedTrackers:(id)trackers;
@end

#endif /* WBSTrackedFirstParty_h */