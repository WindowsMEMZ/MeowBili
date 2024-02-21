//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AARegionInfo_h
#define AARegionInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface AARegionInfo : NSObject<NSCopying> {
  /* instance variables */
  NSDictionary *_regionInfoDictionary;
}

@property (readonly, nonatomic) NSString *displayedHostname;

/* instance methods */
- (id)init;
- (id)initWithDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* AARegionInfo_h */