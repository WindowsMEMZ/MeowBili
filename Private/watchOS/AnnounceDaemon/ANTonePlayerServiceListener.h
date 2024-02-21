//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANTonePlayerServiceListener_h
#define ANTonePlayerServiceListener_h
@import Foundation;

#include "ANTonePlayer.h"
#include "ANTonePlayerServiceInterface-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;

@interface ANTonePlayerServiceListener : NSObject<ANTonePlayerServiceInterface, NSXPCListenerDelegate>

@property (retain, nonatomic) ANTonePlayer *player;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)cleanForExit;
- (void)playTone:(unsigned long long)tone audioSessionID:(unsigned int)id endpointUUID:(id)uuid completionHandler:(id /* block */)handler;
- (id)_fileURLForTone:(unsigned long long)tone;
@end

#endif /* ANTonePlayerServiceListener_h */