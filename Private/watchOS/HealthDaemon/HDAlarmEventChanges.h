//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDAlarmEventChanges_h
#define HDAlarmEventChanges_h
@import Foundation;

@class NSArray, NSSet;

@interface HDAlarmEventChanges : NSObject

@property (readonly, copy, nonatomic) NSArray *oldEvents;
@property (readonly, copy, nonatomic) NSArray *scheduledEvents;
@property (readonly, copy, nonatomic) NSSet *removedEvents;
@property (readonly, copy, nonatomic) NSSet *addedEvents;

/* instance methods */
- (id)initWithOldEvents:(id)events scheduledEvents:(id)events;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* HDAlarmEventChanges_h */