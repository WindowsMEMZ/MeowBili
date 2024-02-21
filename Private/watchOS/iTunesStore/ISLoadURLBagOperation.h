//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISLoadURLBagOperation_h
#define ISLoadURLBagOperation_h
@import Foundation;

#include "ISOperation.h"
#include "ISStoreURLOperationDelegate-Protocol.h"
#include "ISURLBag.h"

@class NSNumber, NSString, SSURLBagContext;

@interface ISLoadURLBagOperation : ISOperation<ISStoreURLOperationDelegate> {
  /* instance variables */
  ISURLBag *_outputBag;
}

@property (retain, nonatomic) NSNumber *accountDSID;
@property (readonly) SSURLBagContext *context;
@property (readonly) ISURLBag *URLBag;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)decrementNetworkCounterForBagContext:(id)context;
+ (void)incrementNetworkCounterForBagContext:(id)context;
+ (id)storeFrontHeaderSuffix;
+ (id)storeFrontHeaderSuffixForBundleIdentifier:(id)identifier;
+ (void)_addStoreFrontHeaderSuffix:(id)suffix forBundleIdentifier:(id)identifier;
+ (id)_executedNetworkRequests;
+ (id)_networkCounters;
+ (id)_networkSynchronyQueue;

/* instance methods */
- (id)init;
- (id)initWithBagContext:(id)context;
- (void)run;
- (id)uniqueKey;
- (BOOL)operation:(id)operation shouldSetStoreFrontID:(id)id;
- (void)operation:(id)operation willSendRequest:(id)request;
- (void)_addHeadersToRequestProperties:(id)properties;
- (void)_postBagDidLoadNotificationWithURLBag:(id)urlbag;
- (void)_sendPingsForURLBag:(id)urlbag;
- (void)_setOutputURLBag:(id)urlbag;
- (BOOL)_setURLBagWithDictionary:(id)dictionary response:(id)response error:(id *)error;
@end

#endif /* ISLoadURLBagOperation_h */