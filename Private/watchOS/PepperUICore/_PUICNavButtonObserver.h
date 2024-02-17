//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef _PUICNavButtonObserver_h
#define _PUICNavButtonObserver_h
@import Foundation;

@class UINavigationController;

@interface _PUICNavButtonObserver : NSObject {
  /* instance variables */
  BOOL isObserving;
}

@property (weak, nonatomic) UINavigationController *currentNavController;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)_configureObserving;
- (void)_navBackButtonPressed:(id)pressed;
@end

#endif /* _PUICNavButtonObserver_h */