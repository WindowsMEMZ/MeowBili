//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 243.0.0.0.0
//
#ifndef FLAlertControllerAction_h
#define FLAlertControllerAction_h
@import Foundation;

@class NSString;

@interface FLAlertControllerAction : NSObject

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;

/* class methods */
+ (id)actionWithTitle:(id)title style:(long long)style handler:(id /* block */)handler;

/* instance methods */
@end

#endif /* FLAlertControllerAction_h */