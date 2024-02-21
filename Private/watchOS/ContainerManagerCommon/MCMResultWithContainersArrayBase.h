//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 582.60.2.0.0
//
#ifndef MCMResultWithContainersArrayBase_h
#define MCMResultWithContainersArrayBase_h
@import Foundation;

#include "MCMResultBase.h"
#include "MCMClientIdentity.h"
#include "MCMError.h"
#include "MCMResultWithContainersArray-Protocol.h"

@class NSArray, NSString;

@interface MCMResultWithContainersArrayBase : MCMResultBase<MCMResultWithContainersArray>

@property (readonly, nonatomic) MCMClientIdentity *clientIdentity;
@property (readonly, nonatomic) BOOL skipSandboxExtensions;
@property (readonly, nonatomic) NSArray *containerPaths;
@property (readonly, nonatomic) NSArray *containerIdentities;
@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) BOOL includePath;
@property (readonly, nonatomic) BOOL includeInfo;
@property (readonly, nonatomic) BOOL includeUserManagedAssetsRelPath;
@property (readonly, @dynamic, nonatomic) MCMError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)encodeResultOntoReply:(id)reply;
- (id)initWithContainerPaths:(id)paths containerIdentities:(id)identities includePath:(BOOL)path clientIdentity:(id)identity skipSandboxExtensions:(BOOL)extensions;
- (id)initWithContainers:(id)containers includePath:(BOOL)path includeInfo:(BOOL)info includeUserManagedAssetsRelPath:(BOOL)path clientIdentity:(id)identity skipSandboxExtensions:(BOOL)extensions;
@end

#endif /* MCMResultWithContainersArrayBase_h */