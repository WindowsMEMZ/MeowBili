//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 936.60.10.0.0
//
#ifndef MAAssetQuery_h
#define MAAssetQuery_h
@import Foundation;

@class NSArray, NSDate, NSMutableArray, NSSet, NSString;

@interface MAAssetQuery : NSObject {
  /* instance variables */
  BOOL _isPallasResult;
}

@property (readonly, nonatomic) NSMutableArray *queryParams;
@property (readonly, nonatomic) NSString *assetType;
@property (nonatomic) BOOL doNotBlockBeforeFirstUnlock;
@property (nonatomic) BOOL doNotBlockOnNetworkStatus;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) long long resultCode;
@property (readonly, nonatomic) BOOL isDone;
@property (readonly, nonatomic) NSSet *assetIds;
@property (readonly, nonatomic) long long returnTypes;
@property (readonly, nonatomic) NSDate *lastFetchDate;
@property (readonly, nonatomic) NSDate *postedDate;
@property (retain, nonatomic) NSString *purpose;

/* instance methods */
- (id)initWithType:(id)type andPurpose:(id)purpose;
- (id)initWithType:(id)type;
- (void)augmentResultsWithState:(BOOL)state;
- (void)returnTypes:(long long)types;
- (long long)addKeyValueArray:(id)array with:(id)with;
- (long long)addKeyValueNull:(id)null;
- (long long)addKeyValuePair:(id)pair with:(id)with;
- (void)getResultsFromMessage:(id)message;
- (void)queryMetaData:(id /* block */)data;
- (void)queryMetaDataWithError:(id /* block */)error;
- (long long)queryInstalledAssetIds;
- (long long)queryMetaDataSync;
- (BOOL)isCatalogFetchedWithinThePastFewDays:(int)days;
- (BOOL)isCatalogFetchedFromLiveServer;
- (id)description;
@end

#endif /* MAAssetQuery_h */