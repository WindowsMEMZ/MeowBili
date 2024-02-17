//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsGEOMapItemDeduper_h
#define MapsSuggestionsGEOMapItemDeduper_h
@import Foundation;

#include "MapsSuggestionsBaseDeduper.h"
#include "MapsSuggestionsDeduper-Protocol.h"

@class NSString;

@interface MapsSuggestionsGEOMapItemDeduper : MapsSuggestionsBaseDeduper<MapsSuggestionsDeduper> {
  /* instance variables */
  long long _type;
  NSString *_name;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isEnabled;

/* instance methods */
- (id)initWithSacrificedType:(long long)type;
- (BOOL)dedupeByEnrichingEntry:(id)entry withEntry:(id)entry;
@end

#endif /* MapsSuggestionsGEOMapItemDeduper_h */