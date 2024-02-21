//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1222.300.51.0.0
//
#ifndef CHNotifyObserver_h
#define CHNotifyObserver_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue;

@interface CHNotifyObserver : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int token;
@property (readonly, copy, nonatomic) id /* block */ callback;

/* instance methods */
- (id)initWithName:(id)name queue:(id)queue callback:(id /* block */)callback;
- (void)dealloc;
@end

#endif /* CHNotifyObserver_h */