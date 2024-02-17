//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTTodayResultOperation_h
#define NTTodayResultOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCFeedPersonalizerFactoryType-Protocol.h"
#include "NFCopying-Protocol.h"

@class NTPBTodayResultOperationInfo;
@protocol FCContentContext;

@interface NTTodayResultOperation : FCOperation

@property (retain, nonatomic) NSObject<FCContentContext> *contentContext;
@property (retain, nonatomic) NSObject<FCFeedPersonalizerFactoryType> *feedPersonalizerFactory;
@property (copy, nonatomic) NTPBTodayResultOperationInfo *operationInfo;
@property (copy, nonatomic) NSObject<NFCopying> *prefetchedContent;
@property (copy, nonatomic) id /* block */ headlineResultCompletionHandler;

/* instance methods */
- (id)init;
@end

#endif /* NTTodayResultOperation_h */