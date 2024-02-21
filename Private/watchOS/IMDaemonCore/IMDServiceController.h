//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDServiceController_h
#define IMDServiceController_h
@import Foundation;

@class NSArray, NSMutableDictionary;

@interface IMDServiceController : NSObject

@property (retain, nonatomic) NSMutableDictionary *services;
@property (readonly, nonatomic) NSArray *allServices;

/* class methods */
+ (id)sharedController;

/* instance methods */
- (id)init;
- (void)registerSessionClassWithBundle:(id)bundle;
- (id)serviceWithName:(id)name;
- (id)serviceWithReplicationSourceID:(long long)id;
@end

#endif /* IMDServiceController_h */