//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSFeatureFlag_h
#define AMSFeatureFlag_h
@import Foundation;

@class NSArray, NSDictionary, NSString;

@interface AMSFeatureFlag : NSObject

@property (nonatomic) BOOL codeComplete;
@property (copy, nonatomic) NSString *ITFE;
@property (nonatomic) BOOL testable;
@property (nonatomic) BOOL hidden;
@property (copy, nonatomic) NSString *associatedGroup;
@property (nonatomic) BOOL defaultEnabled;
@property (nonatomic) long long developmentPhase;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *feature;
@property (retain, nonatomic) NSDictionary *flagData;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *featureDescription;
@property (copy, nonatomic) NSString *flagGroup;
@property (retain, nonatomic) NSArray *itfes;
@property (nonatomic) BOOL userEnabled;
@property (readonly, nonatomic) BOOL remote;

/* class methods */
+ (id)allFlagGroups;
+ (id)flagGroupWithName:(id)name;
+ (BOOL)enableFlagGroup:(id)group error:(id *)error;
+ (BOOL)disableFlagGroup:(id)group error:(id *)error;
+ (id)flagForFeature:(id)feature domain:(id)domain;
+ (id)flagForFeature:(id)feature domain:(id)domain searchDirectory:(id)directory;
+ (BOOL)enableFlagForFeature:(id)feature domain:(id)domain error:(id *)error;
+ (BOOL)disableFlagForFeature:(id)feature domain:(id)domain error:(id *)error;

/* instance methods */
- (BOOL)isCodeComplete;
- (BOOL)isTestable;
- (id)initWithFlagData:(id)data mutableFeatures:(id)features profileFeatures:(id)features feature:(id)feature domain:(id)domain;
- (BOOL)isRemote;
- (void)_activateFlag;
- (void)_updateInternalEnabledState;
- (void)_updateDevelopmentPhase;
- (long long)_developmentPhaseFromGroupType:(long long)type;
- (void)_updateUserEnabled:(BOOL)enabled;
- (long long)groupType;
- (void)activateITFEs;
- (BOOL)hasITFEs;
- (BOOL)hasITFEWithName:(id)name;
- (void)_enableITFEs;
- (void)_disableITFEs;
- (id)itfesFromString:(id)string mutableFeatures:(id)features profileFeatures:(id)features;
- (BOOL)isDefaultEnabled;
- (BOOL)isEnabled;
- (BOOL)isUserEnabled;
- (BOOL)isHidden;
@end

#endif /* AMSFeatureFlag_h */