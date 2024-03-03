//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 707.0.47.0.0
//
#ifndef SRDaemonNotification_h
#define SRDaemonNotification_h
@import Foundation;

#include "SRDaemonNotificationDelegate-Protocol.h"

@class NSString;

@interface SRDaemonNotification : NSObject {
  /* instance variables */
  int _registrationToken;
  int _significantTimeChangeToken;
  int _resetDatastoreToken;
  NSObject<SRDaemonNotificationDelegate> *_delegate;
  NSString *_sensorIdentifier;
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (void)dealloc;
@end

#endif /* SRDaemonNotification_h */