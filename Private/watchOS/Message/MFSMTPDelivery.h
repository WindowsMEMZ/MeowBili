//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFSMTPDelivery_h
#define MFSMTPDelivery_h
@import Foundation;

#include "MFMailDelivery.h"
#include "MFSMTPConnection.h"

@interface MFSMTPDelivery : MFMailDelivery {
  /* instance variables */
  MFSMTPConnection *_connection;
}

/* class methods */
+ (id)log;

/* instance methods */
- (Class)deliveryClass;
- (void)_openConnection;
- (void)setAccount:(id)account;
- (id)deliverMessageData:(id)data toRecipients:(id)recipients;
@end

#endif /* MFSMTPDelivery_h */