//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInlineTextCompletionControllerDelegate_Protocol_h
#define UIInlineTextCompletionControllerDelegate_Protocol_h
@import Foundation;

@protocol UIInlineTextCompletionControllerDelegate 

@property (readonly, nonatomic) UIKBInputDelegateManager *inputDelegateManager;
@property (readonly, nonatomic) NSObject<UIInlineTextCompletionLearning> *inlineTextCompletionLearner;
@property (readonly, nonatomic) UITextInputTraits *textInputTraits;
@property (readonly, nonatomic) TIDocumentState *documentState;
@property (readonly, nonatomic) TIKeyboardState *keyboardState;
@property (readonly, nonatomic) TIKeyboardInputManagerState *inputManagerState;
@property (readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;
@property (readonly, nonatomic) UIView *inputOverlayContainer;
@property (readonly, nonatomic) BOOL delegateSupportsCorrectionUI;
@property (readonly, nonatomic) BOOL inlineTextCompletionAllowedForAutocorrectionType;
@property (readonly, nonatomic) BOOL isSelecting;
@property (readonly, nonatomic) BOOL showingEmojiSearch;

/* instance methods */
- (id)autocorrectionController;
- (void)acceptPredictiveInput:(id)input;
- (void)acceptPredictiveInput:(id)input appendSeparator:(BOOL)separator executionContext:(id)context;
- (void)refreshKeyboardState;
- (void)updateKeyboardConfigurations;
- (void)removeAutocorrectPrompt;
- (void)generateCandidates;
- (id)rangeForTextCompletionInput:(id)input;
- (id)textCompletionInputRectsFromFirstRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect lastRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (BOOL)presentTextCompletionAsMarkedText:(id)text;
- (void)removeTextCompletionFromMarkedText:(id)text;
@end

#endif /* UIInlineTextCompletionControllerDelegate_Protocol_h */