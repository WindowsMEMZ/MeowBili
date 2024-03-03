//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2253.0.0.0.0
//
#ifndef MCEncryptedProfileServicePayload_h
#define MCEncryptedProfileServicePayload_h
@import Foundation;

#include "MCPayload.h"

@class NSString;

@interface MCEncryptedProfileServicePayload : MCPayload {
  /* instance variables */
  NSString *_urlString;
}

/* class methods */
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

/* instance methods */
- (id)initWithURLString:(id)urlstring profile:(id)profile;
- (id)verboseDescription;
- (id)title;
- (id)subtitle1Label;
- (id)subtitle1Description;
@end

#endif /* MCEncryptedProfileServicePayload_h */