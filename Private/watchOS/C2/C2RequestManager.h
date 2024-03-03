//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2RequestManager_h
#define C2RequestManager_h
@import Foundation;

#include "C2SessionPool.h"

@interface C2RequestManager : NSObject

@property (readonly, nonatomic) C2SessionPool *sessionPool;

/* class methods */
+ (void)initialize;
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (id)createDataTaskWithRequest:(id)request options:(id)options delegate:(id)delegate;
- (id)createDataTaskWithRequest:(id)request options:(id)options delegate:(id)delegate sessionHandle:(id *)handle;
- (id)testUtility_sessionForTask:(id)task;
- (id)testUtility_sessionTaskForTask:(id)task;
- (void)_testUtility_forTask:(id)task sessionHandle:(id *)handle taskHandle:(id *)handle;
@end

#endif /* C2RequestManager_h */