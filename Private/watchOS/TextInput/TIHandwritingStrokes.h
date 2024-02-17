//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIHandwritingStrokes_h
#define TIHandwritingStrokes_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@protocol {vector<std::vector<TIHandwritingPoint>, std::allocator<std::vector<TIHandwritingPoint>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::vector<TIHandwritingPoint> *, std::allocator<std::vector<TIHandwritingPoint>>>="__value_"^v}};

@interface TIHandwritingStrokes : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  struct vector<std::vector<TIHandwritingPoint>, std::allocator<std::vector<TIHandwritingPoint>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<TIHandwritingPoint> *, std::allocator<std::vector<TIHandwritingPoint>>> { void *__value_; } __end_cap_; } _strokes;
  BOOL _continuePreviousStroke;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (void)addPoint:(struct CGPoint { double x0; double x1; })point;
- (void)endStroke;
- (void)removeStrokeAtIndex:(unsigned long long)index;
- (void)removeAllStrokes;
- (unsigned long long)numberOfStrokes;
- (unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)index;
- (struct CGPoint { double x0; double x1; })pointAtIndex:(unsigned long long)index inStrokeAtIndex:(unsigned long long)index;
- (unsigned long long)totalNumberOfPoints;
@end

#endif /* TIHandwritingStrokes_h */