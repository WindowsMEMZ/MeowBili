//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIImageCGImageContent_h
#define _UIImageCGImageContent_h
@import Foundation;

#include "_UIImageContent.h"

@interface _UIImageCGImageContent : _UIImageContent {
  /* instance variables */
  atomic struct CGImage * _imageRef;
}

/* instance methods */
- (id)initWithCGImageSource:(struct CGImageSource *)source CGImage:(struct CGImage *)cgimage scale:(double)scale;
- (id)initWithCGImage:(struct CGImage *)cgimage scale:(double)scale;
- (id)initWithCGImageSource:(struct CGImageSource *)source scale:(double)scale;
- (void)dealloc;
- (id)typeName;
- (BOOL)isCGImage;
- (BOOL)hasCGImage;
- (BOOL)isHDR;
- (struct CGImage *)CGImage;
- (id)makeSDRVersion;
- (id)imageRendererFormat;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)renditionApplyingEffect:(id)effect;
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })size scale:(double)scale inContext:(struct CGContext *)context effect:(id)effect;
- (id)contentWithCGImage:(struct CGImage *)cgimage;
- (id)contentPreparedForDisplay;
- (BOOL)prepareContentForDisplayWithCompletionHandler:(id /* block */)handler;
- (id)contentOptimizedForImageSize:(struct CGSize { double x0; double x1; })size;
- (BOOL)optimizeContentForImageSize:(struct CGSize { double x0; double x1; })size completionHandler:(id /* block */)handler;
@end

#endif /* _UIImageCGImageContent_h */