//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.101.0.0
//
#ifndef _TUIKeyboardEmojiDraggableViewDelegate_Protocol_h
#define _TUIKeyboardEmojiDraggableViewDelegate_Protocol_h
@import Foundation;

@protocol _TUIKeyboardEmojiDraggableViewDelegate <NSObject>
@optional
/* instance methods */
- (void)dragWillBegin:(id)begin;
- (void)dragDidEnd:(id)end withOperation:(unsigned long long)operation;
@end

#endif /* _TUIKeyboardEmojiDraggableViewDelegate_Protocol_h */