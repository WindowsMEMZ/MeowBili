//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFServerMessagePersistenceFactory_iOS_h
#define MFServerMessagePersistenceFactory_iOS_h
@import Foundation;

#include "EDServerMessagePersistenceFactory.h"
#include "MFMailMessageLibrary.h"

@class BOOL *;

@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory

@property (weak, nonatomic) MFMailMessageLibrary *library;

/* instance methods */
- (id)initWithLibrary:(id)library database:(id)database;
- (long long)mailboxIDForMailboxURL:(id)url useNumericSearch:(BOOL *)search supportsLabels:(BOOL *)labels;
@end

#endif /* MFServerMessagePersistenceFactory_iOS_h */