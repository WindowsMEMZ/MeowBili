//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPCFUserNotification_h
#define HDSPCFUserNotification_h
@import Foundation;

@class NSString;

@interface HDSPCFUserNotification : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) struct __CFUserNotification * notification;
@property (readonly, copy, nonatomic) id /* block */ actionHandler;

/* class methods */
+ (id)userNotificationWithIdentifier:(id)identifier notification:(struct __CFUserNotification *)notification actionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithIdentifier:(id)identifier notification:(struct __CFUserNotification *)notification actionHandler:(id /* block */)handler;
@end

#endif /* HDSPCFUserNotification_h */