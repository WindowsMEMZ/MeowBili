//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKDaVinciGestureCameraController_h
#define VKDaVinciGestureCameraController_h
@import Foundation;

#include "VKGestureCameraBehavior.h"

@interface VKDaVinciGestureCameraController : VKGestureCameraBehavior {
  /* instance variables */
  void * _cameraManager;
  double _beganDoublePanPitch;
  double _currentDoublePanPitch;
  BOOL _isPitchIncreasing;
}

/* instance methods */
- (id)initWithCameraController:(id)controller cameraManager:(void *)manager;
- (void)beginZoom:(struct CGPoint { double x0; double x1; })zoom;
- (void)updateZoom:(struct CGPoint { double x0; double x1; })zoom oldFactor:(double)factor newFactor:(double)factor;
- (void)endZoom:(struct CGPoint { double x0; double x1; })zoom;
- (void)beginPan:(struct CGPoint { double x0; double x1; })pan;
- (void)updatePan:(struct CGPoint { double x0; double x1; })pan lastScreenPoint:(struct CGPoint { double x0; double x1; })point;
- (void)endPan:(struct CGPoint { double x0; double x1; })pan;
- (void)beginRotate:(struct CGPoint { double x0; double x1; })rotate;
- (void)updateRotate:(double)rotate atScreenPoint:(struct CGPoint { double x0; double x1; })point;
- (void)endRotate:(struct CGPoint { double x0; double x1; })rotate;
- (void)beginPitch:(struct CGPoint { double x0; double x1; })pitch;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })pitch translation:(double)translation;
- (void)updatePitch:(struct CGPoint { double x0; double x1; })pitch degrees:(double)degrees;
- (void)endPitch:(struct CGPoint { double x0; double x1; })pitch;
- (BOOL)isPitchIncreasing;
- (void)updateWithTimestamp:(double)timestamp withContext:(void *)context;
@end

#endif /* VKDaVinciGestureCameraController_h */