//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef MTAlarmDataSourceObserver_Protocol_h
#define MTAlarmDataSourceObserver_Protocol_h
@import Foundation;

@protocol MTAlarmDataSourceObserver 
/* instance methods */
- (void)dataSourceDidReload:(id)reload;
@optional
/* instance methods */
- (void)dataSource:(id)source didAddAlarms:(id)alarms;
- (void)dataSource:(id)source didUpdateAlarms:(id)alarms;
- (void)dataSource:(id)source didRemoveAlarms:(id)alarms;
@end

#endif /* MTAlarmDataSourceObserver_Protocol_h */