//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICRemoteStatusBarClient_h
#define PUICRemoteStatusBarClient_h
@import Foundation;

#include "PUICApplicationStatusBarItem.h"

@class NSString;
@protocol OS_xpc_object;

@interface PUICRemoteStatusBarClient : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) PUICApplicationStatusBarItem *statusBarItem;

/* instance methods */
@end

#endif /* PUICRemoteStatusBarClient_h */