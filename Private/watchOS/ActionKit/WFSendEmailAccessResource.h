//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSendEmailAccessResource_h
#define WFSendEmailAccessResource_h
@import Foundation;

#include "WFAccessResource.h"

@interface WFSendEmailAccessResource : WFAccessResource
/* class methods */
+ (BOOL)isSystemResource;

/* instance methods */
- (id)associatedAppIdentifier;
- (unsigned long long)status;
@end

#endif /* WFSendEmailAccessResource_h */