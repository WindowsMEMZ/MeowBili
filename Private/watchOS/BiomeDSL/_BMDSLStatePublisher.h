//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef _BMDSLStatePublisher_h
#define _BMDSLStatePublisher_h
@import Foundation;

#include "BMBookmarkablePublisher.h"
#include "BMDSLState.h"

@protocol BMDSLStateValue, BPSPublisher;

@interface _BMDSLStatePublisher : BMBookmarkablePublisher

@property (readonly, nonatomic) NSObject<BPSPublisher> *upstream;
@property (retain, nonatomic) NSObject<BMDSLStateValue> *state;
@property (readonly, nonatomic) BMDSLState *DSLState;

/* class methods */
+ (id)publisherWithPublisher:(id)publisher upstreams:(id)upstreams bookmarkState:(id)state;
+ (id)new;

/* instance methods */
- (id)bookmarkableUpstreams;
- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (id)init;
- (id)initWithUpstream:(id)upstream state:(id)state DSLState:(id)dslstate;
- (void)subscribe:(id)subscribe;
- (id)upstreamPublishers;
- (id)nextEvent;
- (id)bookmark;
- (id)validateBookmark:(id)bookmark;
- (void)applyBookmark:(id)bookmark;
@end

#endif /* _BMDSLStatePublisher_h */