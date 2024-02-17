//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKSyncPolicy_h
#define _DKSyncPolicy_h
@import Foundation;

@class NSArray;

@interface _DKSyncPolicy : NSObject {
  /* instance variables */
  unsigned long long _policyDownloadIntervalInDays;
}

@property (readonly, nonatomic) BOOL syncDisabled;
@property (readonly, nonatomic) BOOL alwaysSyncUpAndDown;
@property (readonly, nonatomic) unsigned long long assetThresholdInBytes;
@property (readonly, nonatomic) unsigned long long firstSyncPeriodInDays;
@property (readonly, nonatomic) unsigned long long maxSyncDownIntervalInDays;
@property (readonly, nonatomic) unsigned long long minSyncIntervalInSeconds;
@property (readonly, nonatomic) unsigned long long minSyncsPerDay;
@property (readonly, nonatomic) unsigned long long maxSyncsPerDay;
@property (readonly, nonatomic) unsigned long long numChangesTriggeringSync;
@property (readonly, nonatomic) BOOL pushTriggersSync;
@property (readonly, nonatomic) unsigned long long singleDeviceSyncIntervalInDays;
@property (readonly, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync;
@property (readonly, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync;
@property (readonly, nonatomic) unsigned long long syncTimeoutInSeconds;
@property (readonly, nonatomic) unsigned long long triggeredSyncDelayInSeconds;
@property (readonly, nonatomic) BOOL forceSync;

/* class methods */
+ (id)policy;
+ (id)forceSyncPolicy;

/* instance methods */
- (id)queryStartDateFromLastDaySyncDates:(id)dates lastSyncDate:(id)date isSingleDevice:(BOOL)device isTriggeredSync:(BOOL)sync;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)device;
- (id)description;
@end

#endif /* _DKSyncPolicy_h */