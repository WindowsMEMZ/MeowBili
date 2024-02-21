//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextFieldCanvasView_h
#define _UITextFieldCanvasView_h
@import Foundation;

#include "_UITextCanvasView.h"
#include "_UITextFieldCanvasContext-Protocol.h"

@interface _UITextFieldCanvasView : _UITextCanvasView

@property (weak, @dynamic, nonatomic) NSObject<_UITextFieldCanvasContext> *context;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (BOOL)_enableAutoConstraining;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* _UITextFieldCanvasView_h */