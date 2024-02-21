//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MLTrackImportChapter_h
#define MLTrackImportChapter_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject<NSCopying> {
  /* instance variables */
  NSURL *_url;
  NSString *_urlTitle;
}

@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imageCacheKey;
@property (nonatomic) unsigned long long startTimeInMilliseconds;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *URLTitle;

/* instance methods */
- (void)normalizeProperties;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (long long)compare:(id)compare;
- (BOOL)isEqualIgnoringTimesAndTitle:(id)title;
@end

#endif /* MLTrackImportChapter_h */