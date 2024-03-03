//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRVoiceProfileStoreCleaner_h
#define SSRVoiceProfileStoreCleaner_h
@import Foundation;

@interface SSRVoiceProfileStoreCleaner : NSObject
/* instance methods */
- (id)filterDuplicatedSiriProfilesFrom:(id)from;
- (id)filterInvalidSiriProfilesFrom:(id)from;
- (id)cleanupProfileStore;
- (id)deleteInvalidSiriProfilesFromPersonalDevicesForLanguage:(id)language appDomain:(id)domain;
- (id)_cleanupAppDomain:(id)domain;
- (id)_cleanuplanguageCodePath:(id)path forAppDomain:(id)domain;
- (id)_cleanupImplicitUtteranceCacheForProfile:(id)profile;
- (id)_cleanupOrphanedMetafilesForProfile:(id)profile payloadUtteranceLifeTimeInDays:(long long)days;
- (id)_cleanupContentsOfSatFolder:(id)folder;
- (id)_cleanupInvalidAudioFiles:(id)files;
- (id)_cleanupOrphanedMetafilesAtURL:(id)url;
- (id)_cleanupPayloadUtterancesFromProfile:(id)profile forModelType:(unsigned long long)type exceedingLifeTimeInDays:(long long)days;
- (void)cleanupInvalidModelsForProfile:(id)profile withAssetArray:(id)array;
- (void)_cleanupModelFilesAtDir:(id)dir forAssetArray:(id)array;
@end

#endif /* SSRVoiceProfileStoreCleaner_h */