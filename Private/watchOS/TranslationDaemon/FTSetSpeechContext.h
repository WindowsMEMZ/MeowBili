//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTSetSpeechContext_h
#define FTSetSpeechContext_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface FTSetSpeechContext : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct SetSpeechContext { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) NSArray *contextual_text;
@property (readonly, nonatomic) NSString *left_context;
@property (readonly, nonatomic) NSString *right_context;
@property (readonly, nonatomic) NSArray *context_with_pron_hints;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct SetSpeechContext { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct SetSpeechContext { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)contextual_text_objectAtIndex:(unsigned long long)index;
- (unsigned long long)contextual_text_count;
- (void)contextual_text_enumerateObjectsUsingBlock:(id /* block */)block;
- (id)context_with_pron_hints_objectAtIndex:(unsigned long long)index;
- (unsigned long long)context_with_pron_hints_count;
- (void)context_with_pron_hints_enumerateObjectsUsingBlock:(id /* block */)block;
- (struct Offset<siri::speech::schema_fb::SetSpeechContext> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTSetSpeechContext_h */