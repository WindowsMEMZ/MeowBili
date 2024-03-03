//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLWristDetectionTimeoutSource_h
#define CSLWristDetectionTimeoutSource_h
@import Foundation;

#include "CSLDeviceLockManager.h"

@interface CSLWristDetectionTimeoutSource : NSObject {
  /* instance variables */
  BOOL _hasStartedUnlockedWristDetection;
  CSLDeviceLockManager *_lockManager;
}

/* instance methods */
- (id)init;
- (double)preferredTimeout;
- (void)wristDetectionDidBegin;
@end

#endif /* CSLWristDetectionTimeoutSource_h */