//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUserCloudShareRepairRequest_h
#define HMDUserCloudShareRepairRequest_h
@import Foundation;

#include "HMDUserCloudShareRequest.h"

@class HMUserCloudShareRepairInfo;

@interface HMDUserCloudShareRepairRequest : HMDUserCloudShareRequest

@property (readonly) HMUserCloudShareRepairInfo *repairInfo;

/* instance methods */
- (id)initWithStartDate:(id)date containerID:(id)id home:(id)home repairInfo:(id)info;
- (id)description;
@end

#endif /* HMDUserCloudShareRepairRequest_h */