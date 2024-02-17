//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 895.0.11.0.2
//
#ifndef SMInitiatorContact_h
#define SMInitiatorContact_h
@import Foundation;

#include "SMContact.h"
#include "SMCache.h"
#include "SMHandle.h"
#include "SMLocation.h"

@class NSData, NSDate, NSString, RTLocation;

@interface SMInitiatorContact : SMContact

@property (retain, nonatomic) SMHandle *receiverHandle;
@property (copy, nonatomic) NSDate *shouldBeCleanedUpDate;
@property (retain, nonatomic) NSDate *keyReleaseMessageSendDate;
@property (nonatomic) BOOL cloudkitShareZoneCleanedUpSuccessfully;
@property (copy, nonatomic) NSDate *scheduledSendExpiryDate;
@property (copy, nonatomic) NSString *scheduleSendMessageGUID;
@property (retain, nonatomic) SMLocation *unlockLocation;
@property (retain, nonatomic) SMLocation *lockLocation;
@property (retain, nonatomic) SMLocation *startingLocation;
@property (retain, nonatomic) SMLocation *offWristLocation;
@property (retain, nonatomic) SMLocation *parkedCarLocation;
@property (copy, nonatomic) NSData *destinationMapItem;
@property (retain, nonatomic) SMCache *cache;
@property (copy, nonatomic) NSDate *timeCacheUploadCompletion;
@property (retain, nonatomic) RTLocation *locationOfTrigger;
@property (copy, nonatomic) NSDate *triggerDate;
@property (copy, nonatomic) NSDate *cacheUpdateBackstopExpiryDate;
@property (nonatomic) double maxCacheSize;
@property (nonatomic) long long maxLocationsInTrace;
@property (nonatomic) double maxTimeBetweenCacheUpdates;
@property (nonatomic) long long numCacheUpdates;
@property (nonatomic) double timeTilCacheRelease;
@property (nonatomic) long long numberOfSuccessfulCacheUpdates;
@property (nonatomic) long long numberOfMessageCancelling;
@property (nonatomic) long long numberOfSuccessfulMessageCancelling;
@property (nonatomic) long long numberOfMessageScheduling;
@property (nonatomic) long long numberOfSuccessfulMessageScheduling;
@property (nonatomic) BOOL wasCacheReleased;
@property (nonatomic) BOOL wasScheduledSendTriggered;
@property (nonatomic) BOOL lockState;

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier receiverHandle:(id)handle shouldBeCleanedUpDate:(id)date cloudkitShareZoneCleanedUpSuccessfully:(BOOL)successfully syncDate:(id)date keyReleaseMessageSendDate:(id)date scheduledSendExpiryDate:(id)date cache:(id)cache sessionID:(id)id safetyCacheKey:(id)key allowReadToken:(id)token scheduleSendMessageGUID:(id)guid unlockLocation:(id)location lockLocation:(id)location startingLocation:(id)location offWristLocation:(id)location parkedCarLocation:(id)location destinationMapItem:(id)item timeCacheUploadCompletion:(id)completion maxCacheSize:(double)size maxLocationsInTrace:(long long)trace maxTimeBetweenCacheUpdates:(double)updates numCacheUpdates:(long long)updates timeTilCacheRelease:(double)release numberOfSuccessfulCacheUpdates:(long long)updates numberOfMessageCancelling:(long long)cancelling numberOfSuccessfulMessageCancelling:(long long)cancelling numberOfMessageScheduling:(long long)scheduling numberOfSuccessfulMessageScheduling:(long long)scheduling wasCacheReleased:(BOOL)released wasScheduledSendTriggered:(BOOL)triggered locationOfTrigger:(id)trigger triggerDate:(id)date lockState:(BOOL)state cacheUpdateBackstopExpiryDate:(id)date;
- (id)description;
@end

#endif /* SMInitiatorContact_h */