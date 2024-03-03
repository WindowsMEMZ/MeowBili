//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVSpeechItemRanker_Media_h
#define CKVSpeechItemRanker_Media_h
@import Foundation;

#include "CKVSpeechItemRanker.h"

@class NSDictionary, NSString, NSURL;

@interface CKVSpeechItemRanker_Media : CKVSpeechItemRanker {
  /* instance variables */
  NSString *_trialMediaRankingStrategy;
  NSURL *_rankedItemCacheDirectory;
  NSDictionary *_itemIdToRank;
  BOOL _trialTreatmentApplied;
  unsigned long long _playableLimit;
  unsigned long long _artistLimit;
}

/* class methods */
+ (BOOL)_isPlayableItem:(id)item;
+ (BOOL)_isArtistItem:(id)item;
+ (id)_itemIdsFromMediaEntities:(id)entities;
+ (id)_rankedItemIdsFromTopPlayables:(id)playables topArtists:(id)artists playableLimit:(unsigned long long)limit artistLimit:(unsigned long long)limit;
+ (id)_rankedItemCacheFileWithDirectory:(id)directory;
+ (id)queryTopPlayableIds;
+ (id)queryRecentMediaEntities;
+ (id)_performMediaCollectionsQuery:(id)query limit:(unsigned long long)limit orderingProperties:(id)properties orderingDirectionMappings:(id)mappings;
+ (id)_performMediaItemsQuery:(id)query limit:(unsigned long long)limit orderingProperties:(id)properties orderingDirectionMappings:(id)mappings;

/* instance methods */
- (id)initWithDatabase:(id)database rankedItemCacheDirectory:(id)directory;
- (id)initWithDatabase:(id)database rankedItemCacheDirectory:(id)directory playableLimit:(unsigned long long)limit artistLimit:(unsigned long long)limit itemIdToRank:(id)rank;
- (void)_activateEnrolledTrialExperiments;
- (id)getActiveTrialExperimentIds;
- (BOOL)trialTreatmentApplied;
- (BOOL)addDataset:(id)dataset;
- (BOOL)enumerateRankedItemsWithError:(id *)error usingBlock:(id /* block */)block;
- (BOOL)refreshRankedItemCacheWithDataProtectionClass:(int)class;
- (id)_queryAndRankMediaItems;
- (BOOL)_loadRankedItemCache;
@end

#endif /* CKVSpeechItemRanker_Media_h */