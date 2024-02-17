//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSSearchClientConnection_h
#define CSSearchClientConnection_h
@import Foundation;

#include "SDConnectionConfiguration.h"

@class NSMutableDictionary, NSMutableOrderedSet;

@interface CSSearchClientConnection : NSObject

@property (readonly, nonatomic) unsigned int outBatchCount;
@property (retain, nonatomic) NSMutableDictionary *queryTasks;
@property (retain, nonatomic) SDConnectionConfiguration *configuration;
@property (retain, nonatomic) NSMutableOrderedSet *pausedTasks;

/* instance methods */
- (id)initWithConnectionConfiguration:(id)configuration;
- (id)initWithConnection:(id)connection;
- (void)cancelQueryTask:(long long)task;
- (void)cancelQueryTask:(long long)task wasCanceledByClient:(BOOL)client;
- (void)pollResultsForQueryTask:(long long)task;
- (id)queryTask:(long long)task;
- (void)setQueryTask:(id)task forQueryID:(long long)id;
- (void)cancelQueryTasks;
- (void)dealloc;
- (void)_willSendResultsBatch:(id)batch qid:(long long)qid;
- (void)_didReceiveResultsBatchCompletion;
- (id)bundleID;
- (void)overrideMailHitCounts:(id)counts;
- (BOOL)searchInternal;
- (id)protectionClass;
- (id)allowedBundleIDs;
@end

#endif /* CSSearchClientConnection_h */