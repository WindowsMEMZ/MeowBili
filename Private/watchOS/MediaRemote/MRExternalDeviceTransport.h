//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRExternalDeviceTransport_h
#define MRExternalDeviceTransport_h
@import Foundation;

#include "MRDeviceInfo.h"

@class NSArray, NSError, NSString;

@interface MRExternalDeviceTransport : NSObject

@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *hostname;
@property (readonly, nonatomic) long long port;
@property (readonly, nonatomic) BOOL requiresCustomPairing;
@property (@dynamic, nonatomic) BOOL shouldUseSystemAuthenticationPrompt;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long connectionType;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL supportsIdleDisconnection;
@property (readonly, nonatomic) BOOL supportsReconnection;
@property (readonly, nonatomic) NSArray *subscribedPlayerPaths;
@property (readonly, nonatomic) NSArray *allowedPlayerPaths;

/* instance methods */
- (id)createConnectionWithUserInfo:(id)info;
- (void)resetWithError:(id)error;
@end

#endif /* MRExternalDeviceTransport_h */