//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef PETConfig_h
#define PETConfig_h
@import Foundation;

@class NSDictionary;

@interface PETConfig : NSObject {
  /* instance variables */
  NSDictionary *_messageGroups;
}

@property (readonly) unsigned long long version;
@property (readonly) NSDictionary *configDictionary;

/* instance methods */
- (id)initWithFile:(id)file;
- (void)writeToFile:(id)file;
- (id)initWithDictionary:(id)dictionary;
- (unsigned long long)samplingLimitForMessageGroup:(id)group;
- (void)_enumerateGroupConfigsWithBlock:(id /* block */)block;
- (id)groupForMessageName:(id)name;
- (id)_configForMessageName:(id)name;
- (id)_groupConfigForMessageName:(id)name;
- (id)_whitelistHelper:(id)helper;
- (id)whitelistForMessageName:(id)name;
- (id)_nestedFieldsHelper:(id)helper;
- (id)nestedFieldsForMessageName:(id)name;
- (double)deviceSamplingForMessageName:(id)name isSeed:(BOOL)seed;
- (double)messageSamplingForMessageName:(id)name isSeed:(BOOL)seed;
- (id)bucketsForMessageName:(id)name;
- (unsigned long long)sigFigsForMessageName:(id)name;
- (BOOL)isAggregatedForMessageName:(id)name;
- (BOOL)isTVOSEnabledForMessageName:(id)name messageGroup:(id)group;
- (BOOL)isChinaEnabledForMessageName:(id)name messageGroup:(id)group;
- (BOOL)shouldUploadToParsec;
- (BOOL)shouldUploadToFBFv2;
- (BOOL)shouldUploadToFBFv2ForCarryAndSeed;
@end

#endif /* PETConfig_h */