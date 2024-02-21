//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef _TtC15PreviewShellKit16ListenerDelegate_h
#define _TtC15PreviewShellKit16ListenerDelegate_h
@import Foundation;

#include "BSServiceConnectionListenerDelegate-Protocol.h"

@interface PreviewShellKit.ListenerDelegate : NSObject<BSServiceConnectionListenerDelegate> { // (Swift)
  /* instance variables */
   connectionHandler;
}

/* instance methods */
- (void)listener:(id)listener didReceiveConnection:(id)connection withContext:(id)context;
- (id)init;
@end

#endif /* _TtC15PreviewShellKit16ListenerDelegate_h */