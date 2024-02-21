//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCAssetDetail_Protocol_h
#define BCAssetDetail_Protocol_h
@import Foundation;

#include "BCCloudData.h"
#include "BCAssetDetail-Protocol.h"
#include "BCCloudDataPrivacyDelegate-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;

@protocol BCAssetDetail <BCCloudData>

@property (readonly, copy, nonatomic) NSString *assetID;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL notFinished;
@property (readonly, copy, nonatomic) NSDate *lastOpenDate;
@property (readonly, copy, nonatomic) NSDate *dateFinished;
@property (readonly, nonatomic) short taste;
@property (readonly, nonatomic) short tasteSyncedToStore;
@property (readonly, nonatomic) float readingProgress;
@property (readonly, nonatomic) float readingProgressHighWaterMark;
@property (readonly, copy, nonatomic) NSString *readingPositionCFIString;
@property (readonly, copy, nonatomic) NSString *readingPositionAnnotationVersion;
@property (readonly, copy, nonatomic) NSString *readingPositionAssetVersion;
@property (readonly, copy, nonatomic) NSData *readingPositionUserData;
@property (readonly, nonatomic) int readingPositionLocationRangeStart;
@property (readonly, nonatomic) int readingPositionLocationRangeEnd;
@property (readonly, nonatomic) int readingPositionAbsolutePhysicalLocation;
@property (readonly, copy, nonatomic) NSString *readingPositionStorageUUID;
@property (readonly, copy, nonatomic) NSDate *readingPositionLocationUpdateDate;
@property (readonly, copy, nonatomic) NSDate *datePlaybackTimeUpdated;
@property (readonly, nonatomic) double bookmarkTime;

@end

#endif /* BCAssetDetail_Protocol_h */