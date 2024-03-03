//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef SKEvent_h
#define SKEvent_h
@import Foundation;

@class NSError;

@interface SKEvent : NSObject

@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic) int eventType;

/* instance methods */
- (id)initWithEventType:(int)type;
- (id)initWithEventType:(int)type error:(id)error;
- (id)description;
- (id)descriptionWithLevel:(int)level;
@end

#endif /* SKEvent_h */