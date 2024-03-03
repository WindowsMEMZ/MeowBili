//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOOfflineRemoteDataAccess_h
#define GEOOfflineRemoteDataAccess_h
@import Foundation;

#include "GEOOfflineDataAccessor-Protocol.h"
#include "GEOXPCConnection.h"

@class NSString;

@interface GEOOfflineRemoteDataAccess : NSObject<GEOOfflineDataAccessor> {
  /* instance variables */
  struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _createdConnection;
  GEOXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)_ensureConnection;
- (id)offlineTileMetadataWithError:(id *)error;
@end

#endif /* GEOOfflineRemoteDataAccess_h */