//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPublisher_h
#define GEOPublisher_h
@import Foundation;

#include "GEOCollectionPublisherAttribution-Protocol.h"
#include "GEOMapItemIdentifier.h"
#include "GEOPDPublisher.h"

@class NSString, NSURL;

@interface GEOPublisher : NSObject {
  /* instance variables */
  GEOPDPublisher *_publisher;
  NSString *_publisherAttributionIdentifierString;
}

@property (readonly, nonatomic) long long totalCollectionCount;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) NSString *publisherDescription;
@property (readonly, nonatomic) NSURL *publisherURL;
@property (readonly, nonatomic) BOOL suppressed;
@property (readonly, nonatomic) BOOL blocked;
@property (readonly, nonatomic) NSObject<GEOCollectionPublisherAttribution> *publisherAttribution;

/* instance methods */
- (id)initWithPublisher:(id)publisher usingAttribution:(id)attribution;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isSuppressed;
- (BOOL)isBlocked;
@end

#endif /* GEOPublisher_h */