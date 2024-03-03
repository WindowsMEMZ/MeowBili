//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFMatchTextIntent_h
#define WFMatchTextIntent_h
@import Foundation;

#include "INIntent.h"

@class NSNumber, NSString;

@interface WFMatchTextIntent : INIntent

@property (copy, @dynamic, nonatomic) NSString *text;
@property (copy, @dynamic, nonatomic) NSString *pattern;
@property (copy, @dynamic, nonatomic) NSNumber *caseSensitive;

@end

#endif /* WFMatchTextIntent_h */