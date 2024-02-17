//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFUserHandle_h
#define HFUserHandle_h
@import Foundation;

#include "NAIdentifiable-Protocol.h"

@class NSString;

@interface HFUserHandle : NSObject<NAIdentifiable>

@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)na_identity;

/* instance methods */
- (id)init;
- (id)initWithType:(unsigned long long)type userID:(id)id;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFUserHandle_h */