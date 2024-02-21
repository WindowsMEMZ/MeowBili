//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SSUSystemState_h
#define SSUSystemState_h
@import Foundation;

#include "SSUCacheDirectoryProvider-Protocol.h"
#include "SSUInstalledAppProvider-Protocol.h"

@interface SSUSystemState : NSObject

@property (readonly, nonatomic) NSObject<SSUCacheDirectoryProvider> *cacheDirectoryProvider;
@property (readonly, nonatomic) NSObject<SSUInstalledAppProvider> *installedAppProvider;

/* instance methods */
- (id)initWithCacheDirectoryProviderDevice:(id)device installedAppProviderDevice:(id)device;
- (id)initWithCacheDirectoryProviderSandbox:(id)sandbox installedAppProviderSandbox:(id)sandbox;
- (id)initWithCacheDirectoryProviderTemporary:(id)temporary installedAppProviderSandbox:(id)sandbox;
- (id)initWithCacheDirectoryProvider:(id)provider installedAppProvider:(id)provider;
@end

#endif /* SSUSystemState_h */