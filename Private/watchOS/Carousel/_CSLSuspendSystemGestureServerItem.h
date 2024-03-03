//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef _CSLSuspendSystemGestureServerItem_h
#define _CSLSuspendSystemGestureServerItem_h
@import Foundation;

@class CSLSSuspendSystemGestureAssertionConfiguration;
@protocol BSXPCServerClient;

@interface _CSLSuspendSystemGestureServerItem : NSObject

@property (retain, nonatomic) NSObject<BSXPCServerClient> *owningClient;
@property (readonly, nonatomic) CSLSSuspendSystemGestureAssertionConfiguration *configuration;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
@end

#endif /* _CSLSuspendSystemGestureServerItem_h */