//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFUIActivityImageRequest_h
#define SFUIActivityImageRequest_h
@import Foundation;

#include "SFUIImageRequest.h"

@class NSString, UIActivity, UIImageSymbolConfiguration;

@interface SFUIActivityImageRequest : SFUIImageRequest

@property (readonly, nonatomic) long long activityCategory;
@property (readonly, nonatomic) NSString *contentSizeCategory;
@property (readonly, nonatomic) int iconFormat;
@property (readonly, nonatomic) UIActivity *activity;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;

/* instance methods */
- (id)initWithRequestID:(int)id identifier:(id)identifier activityCategory:(long long)category contentSizeCategory:(id)category iconFormat:(int)format synchronous:(BOOL)synchronous resultHandler:(id /* block */)handler;
- (id)initWithRequestID:(int)id activity:(id)activity contentSizeCategory:(id)category imageSymbolConfiguration:(id)configuration synchronous:(BOOL)synchronous resultHandler:(id /* block */)handler;
@end

#endif /* SFUIActivityImageRequest_h */