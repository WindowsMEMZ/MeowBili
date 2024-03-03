//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextInputMultiDocument_Protocol_h
#define UITextInputMultiDocument_Protocol_h
@import Foundation;

@protocol UITextInputMultiDocument <NSObject>
@optional
/* instance methods */
- (void)_preserveFocusWithToken:(id)token destructively:(BOOL)destructively;
- (BOOL)_restoreFocusWithToken:(id)token;
- (void)_restoreFocusWithToken:(id)token completion:(id /* block */)completion;
- (void)_clearToken:(id)token;
@end

#endif /* UITextInputMultiDocument_Protocol_h */