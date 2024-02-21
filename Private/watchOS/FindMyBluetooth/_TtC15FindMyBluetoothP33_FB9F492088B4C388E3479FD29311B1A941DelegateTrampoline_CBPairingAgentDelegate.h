//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 28.3.0.0.0
//
#ifndef _TtC15FindMyBluetoothP33_FB9F492088B4C388E3479FD29311B1A941DelegateTrampoline_CBPairingAgentDelegate_h
#define _TtC15FindMyBluetoothP33_FB9F492088B4C388E3479FD29311B1A941DelegateTrampoline_CBPairingAgentDelegate_h
@import Foundation;

#include "CBPairingAgentDelegate-Protocol.h"

@interface FindMyBluetooth.(DelegateTrampoline_CBPairingAgentDelegate in _FB9F492088B4C388E3479FD29311B1A9) : NSObject<CBPairingAgentDelegate> { // (Swift)
  /* instance variables */
   delegateQueue;
   pairingAgent;
}

/* instance methods */
- (void)pairingAgent:(id)agent peerDidCompletePairing:(id)pairing;
- (void)pairingAgent:(id)agent peerDidFailToCompletePairing:(id)pairing error:(id)error;
- (void)pairingAgent:(id)agent peerDidUnpair:(id)unpair;
- (void)pairingAgent:(id)agent peerDidRequestPairing:(id)pairing type:(long long)type passkey:(id)passkey;
- (id)init;
@end

#endif /* _TtC15FindMyBluetoothP33_FB9F492088B4C388E3479FD29311B1A941DelegateTrampoline_CBPairingAgentDelegate_h */