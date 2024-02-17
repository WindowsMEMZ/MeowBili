//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFFakeMailboxUid_h
#define MFFakeMailboxUid_h
@import Foundation;

#include "MFMailboxUid.h"

@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid

@property (copy, nonatomic) NSString *fakeFullPath;
@property (copy, nonatomic) NSString *fakeURLString;
@property (nonatomic) BOOL fakeIsSpecialMailboxUid;
@property (retain, nonatomic) NSString *displayName;

/* instance methods */
- (id)initWithAccount:(id)account URLString:(id)urlstring fullPath:(id)path;
- (id)initWithAccount:(id)account URLString:(id)urlstring fullPath:(id)path isSpecial:(BOOL)special;
- (id)URLString;
- (id)fullPath;
- (BOOL)isSpecialMailboxUid;
- (BOOL)isStore;
- (id)store;
@end

#endif /* MFFakeMailboxUid_h */