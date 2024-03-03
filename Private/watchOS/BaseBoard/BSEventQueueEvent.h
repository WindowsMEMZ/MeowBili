//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSEventQueueEvent_h
#define BSEventQueueEvent_h
@import Foundation;

@class NSString;

@interface BSEventQueueEvent : NSObject {
  /* instance variables */
  id /* block */ _handler;
}

@property (readonly, copy, nonatomic) NSString *name;

/* class methods */
+ (id)eventWithName:(id)name handler:(id /* block */)handler;

/* instance methods */
- (id)description;
- (void)execute;
@end

#endif /* BSEventQueueEvent_h */