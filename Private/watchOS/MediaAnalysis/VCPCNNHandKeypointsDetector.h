//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPCNNHandKeypointsDetector_h
#define VCPCNNHandKeypointsDetector_h
@import Foundation;

@protocol {Scaler="pool_"{CF<__CVPixelBufferPool *>="value_"^{__CVPixelBufferPool}}"width_"i"height_"i"format_"I"transfer_session_"{CF<OpaqueVTPixelTransferSession *>="value_"^{OpaqueVTPixelTransferSession}}};

@interface VCPCNNHandKeypointsDetector : NSObject {
  /* instance variables */
  float _std;
  float _mean;
  struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

/* class methods */
+ (id)detector:(BOOL)detector sharedModel:(BOOL)model modelName:(id)name;

/* instance methods */
- (int)copyImage:(struct __CVBuffer *)image toData:(float *)data;
- (int)createInput:(float *)input withBuffer:(struct __CVBuffer *)buffer cnnInputHeight:(int)height cnnInputWidth:(int)width box:(id)box;
- (int)generateHandKeypoints:(struct CGPoint { double x0; double x1; } *)keypoints keypointConfidence:(float *)confidence offset:(float)offset;
- (float *)getInputBuffer:(int)buffer srcWidth:(int)width cnnInputHeight:(int *)height cnnInputWidth:(int *)width offset:(float *)offset;
- (int)cvtHeatmaps2Keypoints:(float *)keypoints outHeight:(int)height outWidth:(int)width inHeight:(int)height inWidth:(int)width outChannel:(int)channel keypoints:(struct CGPoint { double x0; double x1; } *)keypoints keypointConfidence:(float *)confidence offset:(float)offset;
- (int)handKeypointsDetection:(struct __CVBuffer *)detection box:(id)box keypoints:(struct CGPoint { double x0; double x1; } x[21])keypoints keypointConfidence:(float x[21])confidence;
@end

#endif /* VCPCNNHandKeypointsDetector_h */