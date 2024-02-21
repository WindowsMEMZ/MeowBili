//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMMomentsEngagementSuggestionEvent_h
#define BMMomentsEngagementSuggestionEvent_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSDate, NSString;

@interface BMMomentsEngagementSuggestionEvent : BMEventBase<BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_timestamp;
  double _raw_timestamp;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *fullBundleOrderedSet;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *viewContainerName;
@property (readonly, nonatomic) double viewVisibleTime;
@property (nonatomic) BOOL hasViewVisibleTime;
@property (readonly, nonatomic) NSString *suggestionType;
@property (readonly, nonatomic) int viewVisibleSuggestionsCount;
@property (nonatomic) BOOL hasViewVisibleSuggestionsCount;
@property (readonly, nonatomic) int viewTotalSuggestionsCount;
@property (nonatomic) BOOL hasViewTotalSuggestionsCount;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithType:(int)type timestamp:(id)timestamp fullBundleOrderedSet:(id)set clientIdentifier:(id)identifier viewContainerName:(id)name viewVisibleTime:(id)time;
- (id)initWithType:(int)type timestamp:(id)timestamp fullBundleOrderedSet:(id)set clientIdentifier:(id)identifier viewContainerName:(id)name viewVisibleTime:(id)time suggestionType:(id)type viewVisibleSuggestionsCount:(id)count viewTotalSuggestionsCount:(id)count;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)_fullBundleOrderedSetJSONArray;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMMomentsEngagementSuggestionEvent_h */