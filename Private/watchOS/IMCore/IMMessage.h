//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMMessage_h
#define IMMessage_h
@import Foundation;

#include "IMHandle.h"
#include "IMMessage.h"
#include "NSCopying-Protocol.h"

@class IMMessageItem, IMTapback, NSArray, NSAttributedString, NSData, NSDate, NSDictionary, NSError, NSIndexSet, NSString, TUConversationActivity;

@interface IMMessage : NSObject<NSCopying>

@property (readonly, nonatomic) BOOL isRichLinkMessage;
@property (readonly, copy, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) BOOL isAssociatedMessage;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, copy, nonatomic) NSDictionary *messageSummaryInfo;
@property (readonly, copy, nonatomic) IMTapback *tapback;
@property (retain, nonatomic) IMHandle *sender;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long flags;
@property (retain, nonatomic) NSDate *time;
@property (retain, nonatomic) NSDate *timeRead;
@property (retain, nonatomic) NSDate *timeDelivered;
@property (retain, nonatomic) NSDate *timePlayed;
@property (nonatomic) long long messageID;
@property (retain, nonatomic) NSString *guid;
@property (copy, nonatomic) NSString *associatedMessageGUID;
@property (nonatomic) long long associatedMessageType;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (copy, nonatomic) NSDictionary *messageSummaryInfo;
@property (retain, nonatomic) NSDictionary *bizIntent;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSAttributedString *text;
@property (retain, nonatomic) NSString *plainBody;
@property (copy, nonatomic) NSArray *syndicationRanges;
@property (copy, nonatomic) NSArray *syncedSyndicationRanges;
@property (retain, nonatomic) NSDate *dateEdited;
@property (nonatomic) BOOL isInvitationMessage;
@property (readonly, nonatomic) IMMessageItem *_imMessageItem;
@property (retain, nonatomic) TUConversationActivity *groupActivity;
@property (copy, nonatomic) NSArray *fileTransferGUIDs;
@property (nonatomic) unsigned long long sortID;
@property (readonly, nonatomic) IMHandle *subject;
@property (readonly, nonatomic) NSAttributedString *messageSubject;
@property (readonly, nonatomic) NSString *senderName;
@property (readonly, nonatomic) NSString *summaryString;
@property (retain, nonatomic) NSString *balloonBundleID;
@property (retain, nonatomic) NSData *payloadData;
@property (retain, nonatomic) NSString *associatedBalloonBundleID;
@property (retain, nonatomic) NSString *sourceApplicationID;
@property (retain, nonatomic) NSString *expressiveSendStyleID;
@property (retain, nonatomic) NSDate *timeExpressiveSendPlayed;
@property (readonly, nonatomic) BOOL hasInlineAttachments;
@property (readonly, nonatomic) NSArray *inlineAttachmentAttributesArray;
@property (readonly, nonatomic) BOOL isSent;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isTypingMessage;
@property (readonly, nonatomic) BOOL isLocatingMessage;
@property (readonly, nonatomic) BOOL isEmote;
@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL senderUnknown;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isDelayed;
@property (readonly, nonatomic) BOOL isAutoReply;
@property (readonly, nonatomic) BOOL isDelivered;
@property (readonly, nonatomic) BOOL isRead;
@property (readonly, nonatomic) BOOL isAudioMessage;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isAddressedToMe;
@property (readonly, nonatomic) BOOL isAlert;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) BOOL hasDataDetectorResults;
@property (nonatomic) BOOL hasMention;
@property (readonly, nonatomic) BOOL wasDowngraded;
@property (readonly, nonatomic) BOOL isTapToRetry;
@property (readonly, nonatomic) BOOL wasDataDetected;
@property (readonly, nonatomic) BOOL wasDeliveredQuietly;
@property (readonly, nonatomic) BOOL didNotifyRecipient;
@property (retain, nonatomic) NSData *customTypingIndicatorIcon;
@property (retain, nonatomic) NSString *notificationIDSTokenURI;
@property (readonly, nonatomic) BOOL isSOS;
@property (readonly, nonatomic) BOOL isCritical;
@property (nonatomic) BOOL useStandalone;
@property (nonatomic) BOOL shouldNotifyOnSend;
@property (copy, nonatomic) NSString *threadIdentifier;
@property (retain, nonatomic) IMMessage *threadOriginator;
@property (retain, nonatomic) NSDictionary *replyCountsByPart;
@property (retain, nonatomic) NSIndexSet *editedPartIndexes;
@property (retain, nonatomic) NSIndexSet *retractedPartIndexes;
@property (readonly, nonatomic) BOOL hasEditedParts;
@property (nonatomic) BOOL scheduled;
@property (readonly, nonatomic) BOOL wasDetonated;
@property (readonly, nonatomic) NSString *biaReferenceID;
@property (nonatomic) BOOL isKeyTransparencyVerifiedMessage;

/* class methods */
+ (id)instantMessageWithAssociatedMessageContent:(id)content flags:(unsigned long long)flags associatedMessageGUID:(id)guid associatedMessageType:(long long)type associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range messageSummaryInfo:(id)info threadIdentifier:(id)identifier;
+ (id)breadcrumbMessageWithText:(id)text associatedMessageGUID:(id)guid balloonBundleID:(id)id fileTransferGUIDs:(id)guids payloadData:(id)data threadIdentifier:(id)identifier;
+ (id)_vCardDataWithCLLocation:(id)cllocation;
+ (id)messageWithLocation:(id)location flags:(unsigned long long)flags error:(id)error guid:(id)guid;
+ (id)textMessageWithLocation:(id)location flags:(unsigned long long)flags error:(id)error guid:(id)guid;
+ (id)locatingMessageWithGuid:(id)guid error:(id)error;
+ (id)defaultInvitationMessageFromSender:(id)sender flags:(unsigned long long)flags;
+ (id)instantMessageWithText:(id)text flags:(unsigned long long)flags threadIdentifier:(id)identifier;
+ (id)instantMessageWithText:(id)text messageSubject:(id)subject flags:(unsigned long long)flags threadIdentifier:(id)identifier;
+ (id)instantMessageWithText:(id)text messageSubject:(id)subject flags:(unsigned long long)flags expressiveSendStyleID:(id)id;
+ (id)instantMessageWithText:(id)text messageSubject:(id)subject flags:(unsigned long long)flags expressiveSendStyleID:(id)id threadIdentifier:(id)identifier;
+ (id)instantMessageWithText:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags threadIdentifier:(id)identifier;
+ (id)instantMessageWithText:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags balloonBundleID:(id)id payloadData:(id)data expressiveSendStyleID:(id)id;
+ (id)fromMeIMHandle:(id)imhandle withText:(id)text fileTransferGUIDs:(id)guids flags:(unsigned long long)flags;
+ (id)messageFromIMMessageItem:(id)item sender:(id)sender subject:(id)subject;
+ (id)messageFromIMMessageItemDictionary:(id)dictionary body:(id)body sender:(id)sender subject:(id)subject;
+ (Class)richLinksDataSourceClass;
+ (BOOL)hasKnownSchemesForRichLinkURL:(id)url;
+ (BOOL)hasKnownSchemesForRichLinkURL:(id)url additionalSupportedSchemes:(id)schemes;
+ (BOOL)supportedRichLinkURL:(id)url additionalSupportedSchemes:(id)schemes;
+ (id)determineRichLinksInMessage:(id)message;
+ (id)determineRichLinksInMessage:(id)message additionalSupportedSchemes:(id)schemes;

/* instance methods */
- (BOOL)isIncomingTypingMessage;
- (BOOL)isCancelTypingMessage;
- (BOOL)isTypingOrCancelTypingMessage;
- (BOOL)isIncomingTypingOrCancelTypingMessage;
- (id)initWithSender:(id)sender time:(id)time text:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject associatedMessageGUID:(id)guid associatedMessageType:(long long)type associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range associatedMessageInfo:(id)info;
- (id)richLinkDataSourceWithChatContext:(id)context;
- (id)descriptionForPurpose:(long long)purpose;
- (id)descriptionForPurpose:(long long)purpose inChat:(id)chat;
- (id)descriptionForPurpose:(long long)purpose inChat:(id)chat senderDisplayName:(id)name;
- (id)tapbackSummaryForConversationList;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)_copyWithFlags:(unsigned long long)flags;
- (id)_initWithSender:(id)sender time:(id)time timeRead:(id)read timeDelivered:(id)delivered timePlayed:(id)played plainText:(id)text text:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid messageID:(long long)id subject:(id)subject balloonBundleID:(id)id payloadData:(id)data expressiveSendStyleID:(id)id timeExpressiveSendPlayed:(id)played associatedMessageGUID:(id)guid associatedMessageType:(long long)type associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range messageSummaryInfo:(id)info threadIdentifier:(id)identifier dateEdited:(id)edited scheduled:(BOOL)scheduled;
- (id)initWithSender:(id)sender time:(id)time text:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject;
- (id)initWithSender:(id)sender time:(id)time text:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject threadIdentifier:(id)identifier;
- (id)initWithSender:(id)sender time:(id)time text:(id)text fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject;
- (id)initWithSender:(id)sender time:(id)time text:(id)text fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject threadIdentifier:(id)identifier;
- (id)initWithSender:(id)sender time:(id)time text:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject balloonBundleID:(id)id payloadData:(id)data expressiveSendStyleID:(id)id;
- (id)initWithSender:(id)sender time:(id)time text:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject balloonBundleID:(id)id payloadData:(id)data expressiveSendStyleID:(id)id threadIdentifier:(id)identifier;
- (id)initWithSender:(id)sender time:(id)time text:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject balloonBundleID:(id)id payloadData:(id)data expressiveSendStyleID:(id)id threadIdentifier:(id)identifier scheduled:(BOOL)scheduled;
- (id)initWithSender:(id)sender time:(id)time text:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject associatedMessageGUID:(id)guid associatedMessageType:(long long)type associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range messageSummaryInfo:(id)info;
- (id)initWithSender:(id)sender time:(id)time text:(id)text messageSubject:(id)subject fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid subject:(id)subject associatedMessageGUID:(id)guid associatedMessageType:(long long)type associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range messageSummaryInfo:(id)info threadIdentifier:(id)identifier;
- (id)initWithSender:(id)sender fileTransfer:(id)transfer;
- (BOOL)isSenderUnknown;
- (void)addEditedPartIndex:(long long)index;
- (void)addRetractedPartIndex:(long long)index;
- (BOOL)isReply;
- (long long)compare:(id)compare;
- (long long)compare:(id)compare comparisonType:(long long)type;
- (id)messagesBySeparatingRichLinks;
- (id)messagesSeparatedByByteLength:(long long)length;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)_ovverrideGUIDForTest:(id)test;
- (void)_updateSender:(id)sender;
- (void)_updateTime:(id)time;
- (void)_updateText:(id)text;
- (void)_updateGUID:(id)guid;
- (void)_updateMessageID:(long long)id;
- (void)_updateFlags:(unsigned long long)flags;
- (void)_updateError:(id)error;
- (void)_updateFileTransferGUIDs:(id)guids;
- (void)_updateTimeDelivered:(id)delivered;
- (void)_updateTimeRead:(id)read;
- (void)_updateTimePlayed:(id)played;
- (void)_associatedMessageGUID:(id)guid;
- (void)_associatedMessageType:(long long)type;
- (void)_associatedMessageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)_messageSummaryInfo:(id)info;
- (void)_updateBizIntent:(id)intent;
- (void)_updateLocale:(id)locale;
- (void)_syndicationRanges:(id)ranges;
- (void)_syncedSyndicationRanges:(id)ranges;
- (void)_updatedDateEdited:(id)edited;
- (BOOL)isScheduled;
@end

#endif /* IMMessage_h */