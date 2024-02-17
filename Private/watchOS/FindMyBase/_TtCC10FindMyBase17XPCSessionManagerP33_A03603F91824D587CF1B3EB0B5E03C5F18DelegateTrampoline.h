//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 28.3.0.0.0
//
#ifndef _TtCC10FindMyBase17XPCSessionManagerP33_A03603F91824D587CF1B3EB0B5E03C5F18DelegateTrampoline_h
#define _TtCC10FindMyBase17XPCSessionManagerP33_A03603F91824D587CF1B3EB0B5E03C5F18DelegateTrampoline_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"

@interface FindMyBase.XPCSessionManager.(DelegateTrampoline in _A03603F91824D587CF1B3EB0B5E03C5F) : NSObject<NSXPCListenerDelegate> { // (Swift)
  /* instance variables */
   sessionManager;
}

/* instance methods */
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (id)init;
@end

#endif /* _TtCC10FindMyBase17XPCSessionManagerP33_A03603F91824D587CF1B3EB0B5E03C5F18DelegateTrampoline_h */