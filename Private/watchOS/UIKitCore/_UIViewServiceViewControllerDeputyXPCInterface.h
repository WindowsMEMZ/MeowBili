//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIViewServiceViewControllerDeputyXPCInterface_h
#define _UIViewServiceViewControllerDeputyXPCInterface_h
@import Foundation;

#include "_UIViewServiceDeputyXPCInterface-Protocol.h"

@class NSString, NSXPCInterface;

@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject<_UIViewServiceDeputyXPCInterface> {
  /* instance variables */
  NSXPCInterface *_exportedInterface;
  NSXPCInterface *_remoteViewControllerInterface;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)interfaceWithExportedInterface:(id)interface remoteViewControllerInterface:(id)interface;

/* instance methods */
- (id)exportedInterface;
- (id)hostObjectInterface;
- (id)connectionProtocol;
- (SEL)connectionSelector;
- (id)connectionInvocation;
@end

#endif /* _UIViewServiceViewControllerDeputyXPCInterface_h */