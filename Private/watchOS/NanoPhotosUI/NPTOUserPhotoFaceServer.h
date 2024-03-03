//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOUserPhotoFaceServer_h
#define NPTOUserPhotoFaceServer_h
@import Foundation;

#include "NPTOUserPhotoFaceServer-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSString;
@protocol NPTOUserPhotoFaceServerDelegateProtocol;

@interface NPTOUserPhotoFaceServer : NSObject<NSXPCListenerDelegate, NPTOUserPhotoFaceServer> {
  /* instance variables */
  NSObject<NPTOUserPhotoFaceServerDelegateProtocol> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)runWithDelegate:(id)delegate;

/* instance methods */
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)userPhotoFaceDirectory:(id /* block */)directory;
- (void)clockFaceCounts:(id /* block */)counts;
- (void)createUserPhotoFaceFromPath:(id)path completion:(id /* block */)completion;
- (void)createKaleidoscopeFaceFromPath:(id)path completion:(id /* block */)completion;
@end

#endif /* NPTOUserPhotoFaceServer_h */