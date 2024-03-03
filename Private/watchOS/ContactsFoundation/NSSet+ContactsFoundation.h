//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef NSSet_ContactsFoundation_h
#define NSSet_ContactsFoundation_h
@import Foundation;

@interface NSSet (ContactsFoundation)
/* instance methods */
- (BOOL)_cn_any:(id /* block */)_cn_any;
- (id)_cn_map:(id /* block */)_cn_map;
- (id)_cn_filter:(id /* block */)_cn_filter;
- (id)_cn_firstObjectPassingTest:(id /* block */)test;
- (id)_cn_indexBy:(id /* block */)by;
@end

#endif /* NSSet_ContactsFoundation_h */