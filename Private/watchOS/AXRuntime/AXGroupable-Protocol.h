//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXGroupable_Protocol_h
#define AXGroupable_Protocol_h
@import Foundation;

@protocol AXGroupable <NSObject>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) AXElementGroup *parentGroup;

/* instance methods */
- (id)highestAncestorGroup;
- (BOOL)isGroup;
- (id)keyboardContainer;
@end

#endif /* AXGroupable_Protocol_h */