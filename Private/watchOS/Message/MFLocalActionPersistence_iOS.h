//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFLocalActionPersistence_iOS_h
#define MFLocalActionPersistence_iOS_h
@import Foundation;

#include "EDLocalActionPersistence.h"
#include "MFMailMessageLibrary.h"

@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence

@property (weak, nonatomic) MFMailMessageLibrary *library;

/* instance methods */
- (id)initWithDatabase:(id)database gmailLabelPersistence:(id)persistence;
- (id)initWithLibrary:(id)library database:(id)database;
- (id)initWithDatabase:(id)database;
- (id)messageForDatabaseID:(long long)id;
- (BOOL)moveSupportedFromMailboxURL:(id)url toURL:(id)url;
- (id)mailboxURLForDatabaseID:(long long)id;
- (long long)mailboxDatabaseIDForURL:(id)url;
- (id)labelNameForLabelID:(long long)id;
- (void)handledFailedCopyForMessages:(id)messages;
@end

#endif /* MFLocalActionPersistence_iOS_h */