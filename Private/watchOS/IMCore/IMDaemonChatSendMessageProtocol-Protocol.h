//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDaemonChatSendMessageProtocol_Protocol_h
#define IMDaemonChatSendMessageProtocol_Protocol_h
@import Foundation;

@protocol IMDaemonChatSendMessageProtocol <NSObject>
/* instance methods */
- (void)sendMessage:(id)message toChatID:(id)id identifier:(id)identifier style:(unsigned char)style account:(id)account;
- (void)sendJunkReportMessage:(id)message account:(id)account;
- (void)sendEditedMessage:(id)message previousMessage:(id)message partIndex:(long long)index editType:(unsigned long long)type toChatIdentifier:(id)identifier style:(unsigned char)style account:(id)account backwardCompatabilityText:(id)text;
- (void)sendRepositionStickerMessage:(id)message chatIdentifier:(id)identifier accountID:(id)id style:(unsigned char)style;
- (void)sendMappingPacket:(id)packet toHandle:(id)handle account:(id)account;
- (void)joinChatID:(id)id handleInfo:(id)info identifier:(id)identifier style:(unsigned char)style groupID:(id)id lastAddressedHandle:(id)handle lastAddressedSIMID:(id)simid joinProperties:(id)properties account:(id)account;
- (void)invitePersonInfo:(id)info withMessage:(id)message toChatID:(id)id identifier:(id)identifier style:(unsigned char)style account:(id)account;
- (void)invitePersonInfoToiMessageChat:(id)chat withMessage:(id)message toChatID:(id)id identifier:(id)identifier style:(unsigned char)style account:(id)account;
- (void)sendGroupPhotoUpdate:(id)update toChatID:(id)id identifier:(id)identifier style:(unsigned char)style account:(id)account;
- (void)retryGroupPhotoUpload:(id)upload toChatID:(id)id identifier:(id)identifier style:(unsigned char)style account:(id)account;
- (void)removePersonInfo:(id)info chatID:(id)id identifier:(id)identifier style:(unsigned char)style account:(id)account;
- (void)removePersonInfoFromiMessageChat:(id)chat chatID:(id)id identifier:(id)identifier style:(unsigned char)style account:(id)account;
- (void)_requestGroupPhotoResendForChatGUID:(id)guid fromIdentifier:(id)identifier toIdentifier:(id)identifier;
- (void)cancelScheduledMessageWithGUID:(id)guid;
- (void)cancelScheduledMessageWithGUID:(id)guid destination:(id)destination;
@end

#endif /* IMDaemonChatSendMessageProtocol_Protocol_h */