//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef CUISAlertSwipeToDismissViewDataSource_Protocol_h
#define CUISAlertSwipeToDismissViewDataSource_Protocol_h
@import Foundation;

@protocol CUISAlertSwipeToDismissViewDataSource <NSObject>
/* instance methods */
- (id)contentViewForAlertView:(id)view;
@optional
/* instance methods */
- (BOOL)shouldHaveBackgroundViewForAlertView:(id)view;
- (id)labelTextInChevronForAlertView:(id)view;
@end

#endif /* CUISAlertSwipeToDismissViewDataSource_Protocol_h */