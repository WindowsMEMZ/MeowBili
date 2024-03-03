//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLWatchGesturesActionHandler_h
#define CSLWatchGesturesActionHandler_h
@import Foundation;

#include "PUICWatchGesturesSceneHostComponentDelegate-Protocol.h"
#include "WAGUIBSActionProxyClientDelegate-Protocol.h"

@class NSString, WAGUIBSActionProxyClient;

@interface CSLWatchGesturesActionHandler : NSObject<PUICWatchGesturesSceneHostComponentDelegate, WAGUIBSActionProxyClientDelegate> {
  /* instance variables */
  WAGUIBSActionProxyClient *_actionProxyClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (BOOL)_handleAction:(id)action forOptionalScene:(id)scene;
- (BOOL)handleAction:(id)action forScene:(id)scene;
- (void)actionProxyClient:(id)client didReceiveAction:(id)action;
@end

#endif /* CSLWatchGesturesActionHandler_h */