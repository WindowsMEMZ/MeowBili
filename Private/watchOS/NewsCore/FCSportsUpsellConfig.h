//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCSportsUpsellConfig_h
#define FCSportsUpsellConfig_h
@import Foundation;

@class NSString;

@interface FCSportsUpsellConfig : NSObject

@property (nonatomic) long long quiescenceInterval;
@property (nonatomic) long long engagedUserQuiescenceInterval;
@property (nonatomic) long long minNumberOfArticlesRead;
@property (nonatomic) long long maxNumberOfPresentations;
@property (nonatomic) NSString *landingPageArticleID;
@property (nonatomic) long long maxNumberOfTopics;

/* instance methods */
- (id)initWithConfigDictionary:(id)dictionary;
@end

#endif /* FCSportsUpsellConfig_h */