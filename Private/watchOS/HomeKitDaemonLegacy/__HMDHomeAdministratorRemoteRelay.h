//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef __HMDHomeAdministratorRemoteRelay_h
#define __HMDHomeAdministratorRemoteRelay_h
@import Foundation;

#include "__HMDHomeAdministratorReceiver.h"

@interface __HMDHomeAdministratorRemoteRelay : __HMDHomeAdministratorReceiver
/* class methods */
+ (id)logCategory;

/* instance methods */
- (void)__handleXPCMessage:(id)xpcmessage;
@end

#endif /* __HMDHomeAdministratorRemoteRelay_h */