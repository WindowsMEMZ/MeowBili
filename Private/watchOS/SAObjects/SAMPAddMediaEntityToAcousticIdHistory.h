//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAMPAddMediaEntityToAcousticIdHistory_h
#define SAMPAddMediaEntityToAcousticIdHistory_h
@import Foundation;

#include "SABaseClientBoundCommand.h"

@class NSString;

@interface SAMPAddMediaEntityToAcousticIdHistory : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *adamId;
@property (copy, nonatomic) NSString *affiliateId;

/* class methods */
+ (id)addMediaEntityToAcousticIdHistory;
+ (id)addMediaEntityToAcousticIdHistoryWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SAMPAddMediaEntityToAcousticIdHistory_h */