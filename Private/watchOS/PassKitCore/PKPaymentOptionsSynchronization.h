//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentOptionsSynchronization_h
#define PKPaymentOptionsSynchronization_h
@import Foundation;

#include "PKPaymentOptionsSynchronizationDelegate-Protocol.h"

@interface PKPaymentOptionsSynchronization : NSObject

@property (nonatomic) BOOL shouldSyncToCloud;
@property (weak, nonatomic) NSObject<PKPaymentOptionsSynchronizationDelegate> *delegate;

/* class methods */
+ (BOOL)shouldSyncToCloud;

/* instance methods */
- (id)init;
- (void)_updateSynchronizationBehavior;
- (void)_localeDidChangeNotification:(id)notification;
@end

#endif /* PKPaymentOptionsSynchronization_h */