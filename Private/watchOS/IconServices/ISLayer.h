//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISLayer_h
#define ISLayer_h
@import Foundation;

#include "ISEffect-Protocol.h"
#include "ISLayer.h"

@class NSArray, NSMutableArray, NSString;

@interface ISLayer : NSObject

@property (weak, nonatomic) ISLayer *internalSuperlayer;
@property (readonly, nonatomic) NSMutableArray *internalSublayers;
@property (nonatomic) unsigned long long coordinateSystem;
@property (nonatomic) unsigned long long flipped;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (retain, nonatomic) NSString *name;
@property (readonly, @dynamic, nonatomic) ISLayer *superlayer;
@property (readonly, copy, nonatomic) NSArray *sublayers;
@property (retain, nonatomic) ISLayer *mask;
@property (retain, nonatomic) NSObject<ISEffect> *effect;
@property (nonatomic) int blendMode;

/* instance methods */
- (id)init;
- (void)removeFromSuperlayer;
- (void)addSublayer:(id)sublayer;
- (void)insertSublayer:(id)sublayer atIndex:(unsigned int)index;
- (id)debugDescription;
@end

#endif /* ISLayer_h */