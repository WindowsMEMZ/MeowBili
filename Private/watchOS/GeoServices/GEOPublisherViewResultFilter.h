//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPublisherViewResultFilter_h
#define GEOPublisherViewResultFilter_h
@import Foundation;

#include "GEOPDPublisherViewResultFilter.h"
#include "GEOPublisherViewResultFilterAddress.h"
#include "GEOPublisherViewResultFilterKeyword.h"

@class NSArray;

@interface GEOPublisherViewResultFilter : NSObject {
  /* instance variables */
  GEOPDPublisherViewResultFilter *_resultFilter;
  NSArray *_places;
}

@property (readonly, nonatomic) long long filterType;
@property (readonly, nonatomic) GEOPublisherViewResultFilterAddress *addressFilter;
@property (readonly, nonatomic) GEOPublisherViewResultFilterKeyword *keywordFilter;

/* instance methods */
- (id)initWithPublisherViewResultFilter:(id)filter withPlaces:(id)places;
@end

#endif /* GEOPublisherViewResultFilter_h */