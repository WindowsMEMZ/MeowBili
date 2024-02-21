//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStingActionConfiguration_h
#define CSLStingActionConfiguration_h
@import Foundation;

#include "CSLStingActionContext.h"
#include "CSLStingViewConfiguration.h"
#include "NSCopying-Protocol.h"

@interface CSLStingActionConfiguration : NSObject<NSCopying>

@property (readonly, nonatomic) CSLStingActionContext *context;
@property (readonly, nonatomic) CSLStingViewConfiguration *viewConfiguration;

/* class methods */
+ (id)configurationWithContext:(id)context viewConfiguration:(id)configuration;

/* instance methods */
- (id)initWithContext:(id)context viewConfiguration:(id)configuration;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLStingActionConfiguration_h */