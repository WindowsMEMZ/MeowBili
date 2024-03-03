//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarStyleDelegate_SpringBoardOnly_Protocol_h
#define UIStatusBarStyleDelegate_SpringBoardOnly_Protocol_h
@import Foundation;

@protocol UIStatusBarStyleDelegate_SpringBoardOnly <UIStatusBarStyleDelegate>
@optional
/* instance methods */
- (unsigned long long)statusBar:(id)bar effectiveStyleOverridesForRequestedStyle:(long long)style overrides:(unsigned long long)overrides;
- (long long)overriddenRequestedStyleFromStyle:(long long)style;
- (BOOL)statusBarShouldDisableRegionActions:(id)actions;
@end

#endif /* UIStatusBarStyleDelegate_SpringBoardOnly_Protocol_h */