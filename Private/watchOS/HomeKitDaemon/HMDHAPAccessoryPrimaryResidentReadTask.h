//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHAPAccessoryPrimaryResidentReadTask_h
#define HMDHAPAccessoryPrimaryResidentReadTask_h
@import Foundation;

#include "HMDHAPAccessoryPrimaryResidentOperationTask.h"

@interface HMDHAPAccessoryPrimaryResidentReadTask : HMDHAPAccessoryPrimaryResidentOperationTask
/* instance methods */
- (id)_makeRemoteWithFallbackTaskWithRequests:(id)requests delegateDevice:(id)device completion:(id /* block */)completion;
- (id)_makeLocalTaskWithRequests:(id)requests completion:(id /* block */)completion;
@end

#endif /* HMDHAPAccessoryPrimaryResidentReadTask_h */