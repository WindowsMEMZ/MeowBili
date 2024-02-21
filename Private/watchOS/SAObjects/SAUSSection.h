//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAUSSection_h
#define SAUSSection_h
@import Foundation;

#include "SADomainObject.h"
#include "SAUIAppPunchOut.h"

@class NSArray, NSString;

@interface SAUSSection : SADomainObject

@property (copy, nonatomic) NSArray *cardResults;
@property (copy, nonatomic) NSArray *genericResults;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;
@property (copy, nonatomic) NSString *sectionTitle;

/* class methods */
+ (id)section;
+ (id)sectionWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
@end

#endif /* SAUSSection_h */