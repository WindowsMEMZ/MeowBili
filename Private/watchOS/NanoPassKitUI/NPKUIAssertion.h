//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKUIAssertion_h
#define NPKUIAssertion_h
@import Foundation;

@class BrightnessSystemClient, CSLSAlertSuppressionAssertion, CSLSBacklightAssertion, NSString, NSTimer, NSUUID;
@protocol OS_dispatch_queue;

@interface NPKUIAssertion : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (nonatomic) BOOL assertionTaken;
@property (nonatomic) BOOL assertionInvalidated;
@property (retain, nonatomic) BrightnessSystemClient *brightnessClient;
@property (retain, nonatomic) CSLSBacklightAssertion *noScreenOffAssertion;
@property (retain, nonatomic) CSLSAlertSuppressionAssertion *alertSuppressionAssertion;
@property (retain, nonatomic) NSTimer *invalidationTimer;
@property (retain, nonatomic) NSString *assertionReason;
@property (nonatomic) double miniumumNits;
@property (nonatomic) BOOL preventScreenOff;
@property (nonatomic) BOOL preventGestures;
@property (nonatomic) BOOL preventAlerts;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL recreateOnAppBackgroundAndForeground;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, nonatomic) NSUUID *UUID;

/* class methods */
+ (id)takeFullScreenPassAccessoryAssertionWithInvalidationHandler:(id /* block */)handler;
+ (id)takeFullScreenPassAccessoryAssertionWithBrightnessClient:(id)client withInvalidationHandler:(id /* block */)handler;
+ (id)takeTransactionAssertionWithIdentifier:(id)identifier timeout:(double)timeout invalidationHandler:(id /* block */)handler;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_take;
- (void)invalidate;
- (void)renew;
- (void)_handleInvalidationTimerFired;
- (void)_handleApplicationDidEnterBackground:(id)background;
- (void)_handleApplicationWillEnterForeground:(id)foreground;
- (void)_inQueue_raiseDeviceBrightnessForPassIfNecessary;
- (void)_inQueue_backlightMinimumNitsEnabled:(BOOL)enabled;
- (BOOL)_inQueue_currentDisplayBacklightMinimumNitsIsEqualTo:(id)to;
- (void)_inQueue_buildAssertionObjects;
@end

#endif /* NPKUIAssertion_h */