//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPRestrictionsMonitor_h
#define MusicKit_SoftLinking_MPRestrictionsMonitor_h
@import Foundation;

@class MPRestrictionsMonitor;

@interface MusicKit_SoftLinking_MPRestrictionsMonitor : NSObject {
  /* instance variables */
  MPRestrictionsMonitor *_underlyingRestrictionsMonitor;
}

@property (readonly, nonatomic) BOOL allowsDeletion;
@property (readonly, nonatomic) BOOL allowsExplicitContent;

/* class methods */
+ (id)sharedRestrictionsMonitor;
+ (id)allowsExplicitContentDidChangeNotification;

/* instance methods */
- (id)_initWithUnderlyingRestrictionsMonitor:(id)monitor;
- (void)dealloc;
- (void)_handleAllowsExplicitContentDidChangeNotification:(id)notification;
@end

#endif /* MusicKit_SoftLinking_MPRestrictionsMonitor_h */