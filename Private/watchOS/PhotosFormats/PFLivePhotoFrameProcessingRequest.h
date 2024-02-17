//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFLivePhotoFrameProcessingRequest_h
#define PFLivePhotoFrameProcessingRequest_h
@import Foundation;

@class CIImage;

@interface PFLivePhotoFrameProcessingRequest : NSObject

@property (retain, nonatomic) CIImage *image;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (nonatomic) long long type;
@property (nonatomic) double renderScale;

/* instance methods */
@end

#endif /* PFLivePhotoFrameProcessingRequest_h */