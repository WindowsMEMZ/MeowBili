//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMCommandUserManagedAssetsPath_h
#define MCMCommandUserManagedAssetsPath_h
@import Foundation;

#include "MCMCommand.h"
#include "MCMContainerIdentity.h"
#include "MCMParametersUserManagedAssetsPath-Protocol.h"

@interface MCMCommandUserManagedAssetsPath : MCMCommand<MCMParametersUserManagedAssetsPath>

@property (readonly, nonatomic) BOOL relative;
@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

/* class methods */
+ (unsigned long long)command;
+ (Class)incomingMessageClass;

/* instance methods */
- (id)initWithMessage:(id)message context:(id)context reply:(id)reply;
- (BOOL)preflightClientAllowed;
- (void)execute;
- (BOOL)isRelative;
@end

#endif /* MCMCommandUserManagedAssetsPath_h */