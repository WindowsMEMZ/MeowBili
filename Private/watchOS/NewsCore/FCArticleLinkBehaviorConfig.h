//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCArticleLinkBehaviorConfig_h
#define FCArticleLinkBehaviorConfig_h
@import Foundation;

@class NSString;

@interface FCArticleLinkBehaviorConfig : NSObject

@property (readonly, nonatomic) BOOL openArticlesAsModals;
@property (readonly, nonatomic) BOOL lohAnimationEnabled;
@property (readonly, nonatomic) BOOL lohAnimationCompletesInArticle;
@property (readonly, nonatomic) NSString *animationTitleLine1;
@property (readonly, nonatomic) NSString *animationTitleLine2;
@property (readonly, nonatomic) NSString *animationBody;
@property (readonly, nonatomic) long long animationQuiescenceInterval;
@property (readonly, nonatomic) int animationMaxCount;
@property (readonly, nonatomic) int animationCampaignVersion;

/* instance methods */
- (id)initWithConfigDictionary:(id)dictionary;
@end

#endif /* FCArticleLinkBehaviorConfig_h */