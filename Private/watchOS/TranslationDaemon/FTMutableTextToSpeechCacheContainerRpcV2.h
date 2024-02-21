//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableTextToSpeechCacheContainerRpcV2_h
#define FTMutableTextToSpeechCacheContainerRpcV2_h
@import Foundation;

#include "FTTextToSpeechCacheContainerRpcV2.h"
#include "FTTextToSpeechRequest.h"
#include "FTTextToSpeechResponse.h"

@class NSString;

@interface FTMutableTextToSpeechCacheContainerRpcV2 : FTTextToSpeechCacheContainerRpcV2

@property (copy, nonatomic) NSString *original_session_id;
@property (copy, nonatomic) FTTextToSpeechRequest *cached_request;
@property (copy, nonatomic) FTTextToSpeechResponse *cached_response;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableTextToSpeechCacheContainerRpcV2_h */