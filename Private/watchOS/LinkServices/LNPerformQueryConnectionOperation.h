//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNPerformQueryConnectionOperation_h
#define LNPerformQueryConnectionOperation_h
@import Foundation;

#include "LNInterfaceConnectionOperation.h"
#include "LNQueryOutput.h"
#include "LNQueryRequest.h"

@interface LNPerformQueryConnectionOperation : LNInterfaceConnectionOperation

@property (readonly, nonatomic) LNQueryRequest *queryRequest;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) LNQueryOutput *output;

/* instance methods */
- (id)initWithConnectionInterface:(id)interface query:(id)query queue:(id)queue completionHandler:(id /* block */)handler;
- (void)start;
- (void)finishWithError:(id)error;
@end

#endif /* LNPerformQueryConnectionOperation_h */