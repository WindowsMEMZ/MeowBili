//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextSelectionRect_h
#define UITextSelectionRect_h
@import Foundation;

#include "UIBezierPath.h"
#include "UISelectionGrabberCustomPath.h"
#include "UITextSelectionRectCustomHandleInfo.h"
#include "UITextSelectionRectImpl.h"

@class NSValue;

@interface UITextSelectionRect : NSObject

@property (readonly, nonatomic) UITextSelectionRectImpl *isImpl;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _startEdgeRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } _endEdgeRect;
@property (readonly, nonatomic) UISelectionGrabberCustomPath *_startCustomSelectionPath;
@property (readonly, nonatomic) UISelectionGrabberCustomPath *_endCustomSelectionPath;
@property (readonly, nonatomic) BOOL _drawsOwnHighlight;
@property (readonly, nonatomic) UIBezierPath *_path;
@property (readonly, nonatomic) UITextSelectionRectCustomHandleInfo *_customHandleInfo;
@property (retain, nonatomic) NSValue *_transform;
@property (nonatomic) double baselineOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rect;
@property (readonly, nonatomic) long long writingDirection;
@property (readonly, nonatomic) BOOL containsStart;
@property (readonly, nonatomic) BOOL containsEnd;
@property (readonly, nonatomic) BOOL isVertical;

/* class methods */
+ (id)startRectFromRects:(id)rects;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startEdgeFromRects:(id)rects;
+ (id)endRectFromRects:(id)rects;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endEdgeFromRects:(id)rects;
+ (id)startCustomSelectionPathFromRects:(id)rects;
+ (id)endCustomSelectionPathFromRects:(id)rects;
+ (BOOL)startIsHorizontal:(id)horizontal;
+ (BOOL)endIsHorizontal:(id)horizontal;

/* instance methods */
- (id)range;
- (id)_isImpl;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)mutableCopy;
@end

#endif /* UITextSelectionRect_h */