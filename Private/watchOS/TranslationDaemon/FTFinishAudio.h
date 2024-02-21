//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTFinishAudio_h
#define FTFinishAudio_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableDictionary;

@interface FTFinishAudio : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct FinishAudio { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) int packet_count;
@property (readonly, nonatomic) float total_audio_recorded_seconds;
@property (readonly, nonatomic) NSArray *features_at_endpoint;
@property (readonly, nonatomic) NSArray *server_feature_latency_distribution;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct FinishAudio { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct FinishAudio { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)features_at_endpoint_objectAtIndex:(unsigned long long)index;
- (unsigned long long)features_at_endpoint_count;
- (void)features_at_endpoint_enumerateObjectsUsingBlock:(id /* block */)block;
- (id)server_feature_latency_distribution_objectAtIndex:(unsigned long long)index;
- (unsigned long long)server_feature_latency_distribution_count;
- (void)server_feature_latency_distribution_enumerateObjectsUsingBlock:(id /* block */)block;
- (struct Offset<siri::speech::schema_fb::FinishAudio> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTFinishAudio_h */