//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef ISContinuousRoundedRect_h
#define ISContinuousRoundedRect_h
@import Foundation;

#include "ISShapeCompositorResource.h"

@interface ISContinuousRoundedRect : ISShapeCompositorResource
/* instance methods */
- (id)init;
- (double)_cornerRadiusForSize:(struct CGSize { double x0; double x1; })size;
- (id)imageForSize:(struct CGSize { double x0; double x1; })size scale:(double)scale;
@end

#endif /* ISContinuousRoundedRect_h */