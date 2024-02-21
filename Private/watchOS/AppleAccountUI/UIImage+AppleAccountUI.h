//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef UIImage_AppleAccountUI_h
#define UIImage_AppleAccountUI_h
@import Foundation;

@interface UIImage (AppleAccountUI)
/* class methods */
+ (id)imageForDataclassWithType:(id)type;
+ (id)imageForDataclassWithBundleID:(id)id;
+ (id)descriptorForDataclassWithSize:(double)size;
+ (id)imageForTableUIWithType:(id)type;
+ (id)aaui_imageFromColor:(id)color;
+ (id)circularImageForBundleID:(id)id size:(double)size scale:(double)scale;
+ (id)_circularImageFromIcon:(id)icon size:(double)size scale:(double)scale;
+ (id)circularImageFromCGImage:(struct CGImage *)cgimage size:(struct CGSize { double x0; double x1; })size scale:(double)scale;
+ (id)addBackgroundForImage:(id)image withBackgroundColor:(id)color;

/* instance methods */
- (id)imageByCroppingToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)_imageByCroppingCGImageToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)_imageByCroppingCIImageToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_cropRectForRawImageOrientation:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })orientation;
@end

#endif /* UIImage_AppleAccountUI_h */