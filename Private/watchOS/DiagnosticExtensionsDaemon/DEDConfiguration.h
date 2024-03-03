//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDConfiguration_h
#define DEDConfiguration_h
@import Foundation;

@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)errorDomain;
- (const char *)loggingSubsystem;
- (id)machServiceName;
- (unsigned long long)connectionType;
- (id)identifier;
- (id)dedDirectory;
- (id)sharedAnonymousListener;
- (void)invalidateTestListeners;
@end

#endif /* DEDConfiguration_h */