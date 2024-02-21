//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTSetSpeechProfile_h
#define FTSetSpeechProfile_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTUserAcousticProfile.h"
#include "FTUserLanguageProfile.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableDictionary, NSString;

@interface FTSetSpeechProfile : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct SetSpeechProfile { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) FTUserLanguageProfile *user_language_profile;
@property (readonly, nonatomic) FTUserAcousticProfile *user_acoustic_profile;
@property (readonly, nonatomic) NSString *language;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct SetSpeechProfile { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct SetSpeechProfile { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct Offset<siri::speech::schema_fb::SetSpeechProfile> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTSetSpeechProfile_h */