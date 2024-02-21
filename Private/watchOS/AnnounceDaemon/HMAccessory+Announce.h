//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef HMAccessory_Announce_h
#define HMAccessory_Announce_h
@import Foundation;

@interface HMAccessory (Announce)
/* class methods */
+ (id)accessoriesWithAnnounceEnabledFromAccessories:(id)accessories;
+ (id)announceAccessoriesFromAccessories:(id)accessories;
+ (id)announceAccessoriesWithAnnounceEnabledFromAccessories:(id)accessories;
+ (id)appleAnnounceAccessoriesFromAccessories:(id)accessories;
+ (id)appleAnnounceHostAccessoriesFromAccessories:(id)accessories;

/* instance methods */
- (BOOL)an_isAnnounceEnabled;
- (BOOL)an_isAnnounceAccessory;
- (BOOL)an_isAppleAnnounceAccessory;
- (BOOL)an_isAppleAnnounceHostAccessory;
@end

#endif /* HMAccessory_Announce_h */