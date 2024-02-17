//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLRawButtonEvent_h
#define CSLRawButtonEvent_h
@import Foundation;

@interface CSLRawButtonEvent : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) unsigned long long key;
@property (readonly, nonatomic) unsigned long long firstDownTime;
@property (readonly, nonatomic) unsigned long long lastUpTime;

/* class methods */
+ (id)eventWithType:(long long)type key:(unsigned long long)key firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;

/* instance methods */
- (id)initWithType:(long long)type key:(unsigned long long)key firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* CSLRawButtonEvent_h */