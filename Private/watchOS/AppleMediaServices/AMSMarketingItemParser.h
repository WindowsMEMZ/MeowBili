//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMarketingItemParser_h
#define AMSMarketingItemParser_h
@import Foundation;

@interface AMSMarketingItemParser : NSObject
/* class methods */
+ (id)selectionFromMarketingItems:(id)items;
+ (id)selectionFromRawMarketingItems:(id)items;
+ (id)selectionFromRawMarketingItems:(id)items serviceType:(id)type placement:(id)placement;
+ (id)_rawMarketingItemSelectionFromRawMarketingItems:(id)items serviceType:(id)type placement:(id)placement engagementService:(id)service;
@end

#endif /* AMSMarketingItemParser_h */