//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextFormattingActionHostToClient_h
#define _UITextFormattingActionHostToClient_h
@import Foundation;

#include "_UISceneHostingActionHostToClient.h"

@interface _UITextFormattingActionHostToClient : _UISceneHostingActionHostToClient
/* class methods */
+ (id)actionForConfiguration:(id)configuration;
+ (id)actionForTextAttributesData:(id)data;

/* instance methods */
- (void)performActionForHostedWindowScene:(id)scene;
@end

#endif /* _UITextFormattingActionHostToClient_h */