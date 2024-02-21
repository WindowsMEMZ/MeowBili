//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBConcreteTargeting_Protocol_h
#define RBConcreteTargeting_Protocol_h
@import Foundation;

@protocol RBConcreteTargeting <NSObject>

@property (readonly, nonatomic) RBProcess *process;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, nonatomic) BOOL system;

/* instance methods */
- (id)createRBSTarget;
- (BOOL)isSystem;
@end

#endif /* RBConcreteTargeting_Protocol_h */