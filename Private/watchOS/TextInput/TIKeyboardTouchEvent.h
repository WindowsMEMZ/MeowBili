//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIKeyboardTouchEvent_h
#define TIKeyboardTouchEvent_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface TIKeyboardTouchEvent : NSObject<NSSecureCoding> {
  /* instance variables */
  union { long long integerValue; struct { unsigned int x :4 continuousPathState; } fields; } _mask;
}

@property (readonly, nonatomic) int stage;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } location;
@property (readonly, nonatomic) double radius;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long pathIndex;
@property (readonly, nonatomic) int fingerID;
@property (readonly, nonatomic) long long forcedKeyCode;
@property (readonly, nonatomic) int continuousPathState;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)touchEventWithStage:(int)stage location:(struct CGPoint { double x0; double x1; })location radius:(double)radius timestamp:(double)timestamp pathIndex:(long long)index forcedKeyCode:(long long)code;
+ (id)touchEventWithStage:(int)stage location:(struct CGPoint { double x0; double x1; })location radius:(double)radius timestamp:(double)timestamp pathIndex:(long long)index fingerID:(int)id forcedKeyCode:(long long)code;
+ (id)touchEventWithStage:(int)stage location:(struct CGPoint { double x0; double x1; })location radius:(double)radius timestamp:(double)timestamp pathIndex:(long long)index fingerID:(int)id forcedKeyCode:(long long)code continuousPathState:(int)state;

/* instance methods */
- (id)initWithStage:(int)stage location:(struct CGPoint { double x0; double x1; })location radius:(double)radius timestamp:(double)timestamp pathIndex:(long long)index fingerID:(int)id forcedKeyCode:(long long)code continuousPathState:(int)state;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)shortDescription;
@end

#endif /* TIKeyboardTouchEvent_h */