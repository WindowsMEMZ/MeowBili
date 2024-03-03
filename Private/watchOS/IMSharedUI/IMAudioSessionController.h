//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMAudioSessionController_h
#define IMAudioSessionController_h
@import Foundation;

@interface IMAudioSessionController : NSObject

@property BOOL active;
@property BOOL dirty;
@property unsigned long long options;
@property (readonly) BOOL shouldUseSpeaker;
@property (readonly) BOOL shouldStopPlayingWhenSilent;
@property (readonly) BOOL shouldDuckOthers;

/* class methods */
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)singleton__im;
+ (id)sharedInstance;
+ (id)queue;

/* instance methods */
- (void)activateWithOptions:(unsigned long long)options completion:(id /* block */)completion;
- (void)deactivate;
- (void)setActive:(BOOL)active options:(unsigned long long)options completion:(id /* block */)completion;
- (void)configureAudioSessionWithOptions:(unsigned long long)options;
- (BOOL)isActive;
- (BOOL)isDirty;
@end

#endif /* IMAudioSessionController_h */