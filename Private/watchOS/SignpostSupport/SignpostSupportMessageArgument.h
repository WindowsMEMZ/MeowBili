//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostSupportMessageArgument_h
#define SignpostSupportMessageArgument_h
@import Foundation;

@class NSObject;

@interface SignpostSupportMessageArgument : NSObject

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSObject *argumentObject;

/* instance methods */
- (id)initWithArgumentObject:(id)object;
- (BOOL)isEqual:(id)equal;
@end

#endif /* SignpostSupportMessageArgument_h */