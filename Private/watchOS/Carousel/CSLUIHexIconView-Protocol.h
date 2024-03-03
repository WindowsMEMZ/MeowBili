//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIHexIconView_Protocol_h
#define CSLUIHexIconView_Protocol_h
@import Foundation;

@protocol CSLUIHexIconView <NSObject>

@property (nonatomic) BOOL jiggling;
@property (retain, nonatomic) CSLHexAppNode *node;
@property (nonatomic) struct { double x0; } layoutAttributes;

/* instance methods */
- (void)applyLayoutAttributes:(struct { double x0; })attributes;
- (void)beginDraggingAtPoint:(struct CGPoint { double x0; double x1; })point;
- (void)dragToPoint:(struct CGPoint { double x0; double x1; })point;
- (void)endDraggingToLayoutAttributes:(struct { double x0; })attributes;
- (void)setAlpha:(double)alpha forReason:(unsigned long long)reason;
- (BOOL)isJiggling;
@end

#endif /* CSLUIHexIconView_Protocol_h */