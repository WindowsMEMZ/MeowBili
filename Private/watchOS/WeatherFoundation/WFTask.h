//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFTask_h
#define WFTask_h
@import Foundation;

#include "WFTaskIdentifier.h"

@class NSProgress;

@interface WFTask : NSObject

@property (readonly, nonatomic) WFTaskIdentifier *identifier;
@property (readonly, nonatomic) BOOL requiresResponse;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

/* class methods */
+ (id)sharedServiceConnection;

/* instance methods */
- (id)init;
- (id)initWithResponseRequired:(BOOL)required;
- (void)start;
- (void)executeSynchronously;
- (void)startWithService:(id)service;
- (void)handleResponse:(id)response;
- (void)handleError:(id)error forResponseIdentifier:(id)identifier;
- (void)handleCancellation;
- (void)cleanup;
- (void)cancel;
@end

#endif /* WFTask_h */