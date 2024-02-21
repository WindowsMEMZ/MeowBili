//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoAckowledgmentPickerViewControllerDelegate_Protocol_h
#define CKNanoAckowledgmentPickerViewControllerDelegate_Protocol_h
@import Foundation;

@protocol CKNanoAckowledgmentPickerViewControllerDelegate <NSObject>
/* instance methods */
- (void)acknowledgmentPickerViewController:(id)controller sendMessageAcknowledgment:(long long)acknowledgment forChatItem:(id)item;
- (BOOL)acknowledgmentPickerViewControllerShouldShowReplyButton;
@optional
/* instance methods */
- (void)acknowledgmentPickerViewControllerCancelled;
- (void)acknowledgmentPickerViewController:(id)controller replyButtonPressedForChatItem:(id)item;
- (void)acknowledgmentPickerViewController:(id)controller shareButtonPressedForChatItem:(id)item;
- (void)acknowledgmentPickerViewController:(id)controller highlightButtonPressedForChatItem:(id)item;
- (void)acknowledgmentPickerViewController:(id)controller retractButtonPressedForChatItem:(id)item;
- (void)acknowledgmentPickerViewController:(id)controller confirmedEditWithComposition:(id)composition forChatItem:(id)item;
@end

#endif /* CKNanoAckowledgmentPickerViewControllerDelegate_Protocol_h */