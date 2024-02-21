//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKDatabaseEncryptionStartUpMiddleware_h
#define FCCKDatabaseEncryptionStartUpMiddleware_h
@import Foundation;

#include "FCCKDatabaseMigrator-Protocol.h"
#include "FCCKDatabaseStartUpMiddleware-Protocol.h"

@class NSString;

@interface FCCKDatabaseEncryptionStartUpMiddleware : NSObject<FCCKDatabaseStartUpMiddleware> {
  /* instance variables */
  NSObject<FCCKDatabaseMigrator> *_encryptionMigrator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)performStartUpForDatabase:(id)database completion:(id /* block */)completion;
@end

#endif /* FCCKDatabaseEncryptionStartUpMiddleware_h */