//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUFeedbackActionItem_Protocol_h
#define NMUFeedbackActionItem_Protocol_h
@import Foundation;

@protocol NMUFeedbackActionItem 

@property (nonatomic) BOOL active;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL visible;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ actionBlock;

/* instance methods */
- (BOOL)isActive;
- (BOOL)isEnabled;
- (BOOL)isVisible;
@end

#endif /* NMUFeedbackActionItem_Protocol_h */