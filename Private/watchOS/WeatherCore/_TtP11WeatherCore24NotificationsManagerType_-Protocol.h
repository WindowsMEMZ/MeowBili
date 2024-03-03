//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 513.0.0.0.0
//
#ifndef _TtP11WeatherCore24NotificationsManagerType__Protocol_h
#define _TtP11WeatherCore24NotificationsManagerType__Protocol_h
@import Foundation;

@protocol WeatherCore.NotificationsManagerType 
/* instance methods */
- (void)scheduleWith:(id /* block */)with;
- (void)evaluateWith:(id /* block */)with;
- (void)unregisterWith:(id /* block */)with;
- (void)validateWith:(id /* block */)with;
@end

#endif /* _TtP11WeatherCore24NotificationsManagerType__Protocol_h */