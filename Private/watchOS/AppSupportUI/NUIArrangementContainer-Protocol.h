//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef NUIArrangementContainer_Protocol_h
#define NUIArrangementContainer_Protocol_h
@import Foundation;

@protocol NUIArrangementContainer <NSObject>
/* instance methods */
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size forArrangedSubview:(id)subview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)subview withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@optional
/* instance methods */
- (double)displayScale;
- (long long)effectiveUserInterfaceLayoutDirection;
@end

#endif /* NUIArrangementContainer_Protocol_h */