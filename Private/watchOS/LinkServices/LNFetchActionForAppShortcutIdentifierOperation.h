//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNFetchActionForAppShortcutIdentifierOperation_h
#define LNFetchActionForAppShortcutIdentifierOperation_h
@import Foundation;

#include "LNInterfaceConnectionOperation.h"
#include "LNAppShortcutActionData.h"

@class NSString;

@interface LNFetchActionForAppShortcutIdentifierOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *appShortcutIdentifier;
@property (retain, nonatomic) LNAppShortcutActionData *result;

/* instance methods */
- (id)initWithConnectionInterface:(id)interface appShortcutIdentifier:(id)identifier queue:(id)queue completionHandler:(id /* block */)handler;
- (void)start;
- (void)finishWithError:(id)error;
@end

#endif /* LNFetchActionForAppShortcutIdentifierOperation_h */