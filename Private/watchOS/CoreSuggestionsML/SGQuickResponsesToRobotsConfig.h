//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGQuickResponsesToRobotsConfig_h
#define SGQuickResponsesToRobotsConfig_h
@import Foundation;

@class NSDictionary, NSSet;

@interface SGQuickResponsesToRobotsConfig : NSObject

@property (readonly, nonatomic) NSDictionary *supportedKeysAndContext;
@property (readonly, nonatomic) NSSet *generalContextWords;
@property (readonly, nonatomic) NSSet *triggerWords;
@property (readonly, nonatomic) unsigned long long leftContext;
@property (readonly, nonatomic) unsigned long long rightContext;
@property (readonly, nonatomic) unsigned long long generalContextLeft;
@property (readonly, nonatomic) unsigned long long generalContextRight;
@property (readonly, nonatomic) unsigned long long triggerContext;
@property (readonly, nonatomic) BOOL enableFeature;
@property (readonly, nonatomic) BOOL relaxContext;
@property (readonly, nonatomic) BOOL useGeneralContext;
@property (readonly, nonatomic) BOOL insignificantSender;
@property (readonly, nonatomic) float capsWordsRatioMax;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SGQuickResponsesToRobotsConfig_h */