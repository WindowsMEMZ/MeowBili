//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLPISensorActivityIndicatorState_Protocol_h
#define CSLPISensorActivityIndicatorState_Protocol_h
@import Foundation;

@protocol CSLPISensorActivityIndicatorState <NSObject>

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;

/* instance methods */
- (BOOL)isHidden;
@end

#endif /* CSLPISensorActivityIndicatorState_Protocol_h */