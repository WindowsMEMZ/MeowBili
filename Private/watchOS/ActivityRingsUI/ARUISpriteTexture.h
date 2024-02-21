//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 211.1.0.0.0
//
#ifndef ARUISpriteTexture_h
#define ARUISpriteTexture_h
@import Foundation;

#include "NSCopying-Protocol.h"

@protocol MTLTexture;

@interface ARUISpriteTexture : NSObject<NSCopying>

@property (readonly, nonatomic) float height;
@property (readonly, nonatomic) float width;
@property (readonly, nonatomic) NSObject<MTLTexture> *texture;

/* instance methods */
- (id)initWithImage:(id)image;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* ARUISpriteTexture_h */