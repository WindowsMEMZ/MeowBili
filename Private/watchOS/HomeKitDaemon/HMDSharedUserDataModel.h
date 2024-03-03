//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSharedUserDataModel_h
#define HMDSharedUserDataModel_h
@import Foundation;

#include "HMDUserDataModel.h"

@class NSUUID;

@interface HMDSharedUserDataModel : HMDUserDataModel

@property (retain, @dynamic) NSUUID *assistantAccessControlModelUUID;
@property (retain, @dynamic) NSUUID *mediaContentProfileAccessControlModelUUID;

/* class methods */
+ (id)hmbProperties;
@end

#endif /* HMDSharedUserDataModel_h */