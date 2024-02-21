//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIVectorTextLayoutRun_Protocol_h
#define _UIVectorTextLayoutRun_Protocol_h
@import Foundation;

#include "_UIVectorTextLayoutInfo.h"
#include "_UIVectorTextLayoutRun-Protocol.h"

@class NSAttributedString, NSString;

@protocol _UIVectorTextLayoutRun <NSObject>

@property (readonly, nonatomic) unsigned long long lineIndex;
@property (readonly, nonatomic) double baseline;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } usedRunRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } lineRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } usedLineRect;

/* instance methods */
- (unsigned long long)glyphCount;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })stringRange;
- (id)string;
- (id)font;
- (BOOL)shouldRender;
- (void)renderInContext:(struct CGContext *)context;
- (void)enumerateGlyphsUsingBlock:(id /* block */)block;
@end

#endif /* _UIVectorTextLayoutRun_Protocol_h */