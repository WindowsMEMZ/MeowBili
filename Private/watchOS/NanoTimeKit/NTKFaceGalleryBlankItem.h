//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceGalleryBlankItem_h
#define NTKFaceGalleryBlankItem_h
@import Foundation;

#include "NTKFaceGalleryItem.h"

@class CLKDevice;

@interface NTKFaceGalleryBlankItem : NTKFaceGalleryItem {
  /* instance variables */
  CLKDevice *_device;
}

@property (nonatomic) double height;

/* instance methods */
- (struct CGSize { double x0; double x1; })cellSize;
- (BOOL)containsFaceDescriptor:(id)descriptor;
- (id)initWithIdentifier:(id)identifier forDevice:(id)device;
@end

#endif /* NTKFaceGalleryBlankItem_h */