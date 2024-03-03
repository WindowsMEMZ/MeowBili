//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDaemonAnyProtocol_Protocol_h
#define IMDaemonAnyProtocol_Protocol_h
@import Foundation;

@protocol IMDaemonAnyProtocol <NSObject>
/* instance methods */
- (void)requestSetupWithClientID:(id)id capabilities:(unsigned long long)capabilities context:(id)context reply:(id /* block */)reply;
- (void)requestSetupXPCObjectWithClientID:(id)id capabilities:(unsigned long long)capabilities context:(id)context reply:(id /* block */)reply;
- (void)setValue:(id)value ofProperty:(id)property;
- (void)setValue:(id)value ofPersistentProperty:(id)property;
- (void)markUnreadForMessageGUID:(id)guid IDs:(id)ids style:(unsigned char)style services:(id)services;
- (void)markMessageAsReadWithGUID:(id)guid callerOrigin:(long long)origin reply:(id /* block */)reply;
- (void)markPlayedForMessageGUID:(id)guid;
- (void)markPlayedForIDs:(id)ids style:(unsigned char)style onServices:(id)services message:(id)message;
- (void)playSendSoundForMessageGUID:(id)guid callerOrigin:(long long)origin;
- (void)requestNetworkDataAvailability;
- (void)requestBuddyPicturesAndPropertiesForAccount:(id)account;
- (void)forceReloadChatRegistryWithQueryID:(id)id;
- (void)requestOneTimeCodeStatus;
- (void)consumeCodeWithMessageGUID:(id)guid;
- (void)onboardDeleteVerificationCodesIfNeededWithReply:(id /* block */)reply;
- (void)onboardDeleteVerificationCodesIfNeededWithMessage:(id)message reply:(id /* block */)reply;
- (void)setAutoDeletionPreference:(BOOL)preference;
- (void)fetchAutoDeletionPreferenceWithReply:(id /* block */)reply;
- (void)simulateOneTimeCodeArriving:(id)arriving;
- (void)preWarm;
- (void)downloadPurgedAttachmentsForIDs:(id)ids style:(unsigned char)style onServices:(id)services chatID:(id)id;
- (void)initiateQuickSwitch;
- (void)requestQOSClassWhileServicingRequestsWithID:(id)id;
- (void)fetchGroupPhotoPathsForChatsWithGroupIDs:(id)ids completionHandler:(id /* block */)handler;
- (void)fetchNicknamesWithReply:(id /* block */)reply;
- (void)fetchHandleSharingStateWithReply:(id /* block */)reply;
- (void)fetchTransitionedNicknameHandlesWithReply:(id /* block */)reply;
- (void)fetchActiveNicknamesWithReply:(id /* block */)reply;
- (void)fetchIgnoredNicknameHandlesWithReply:(id /* block */)reply;
- (void)fetchiCloudAccountStatusWithReply:(id /* block */)reply;
- (void)clearPendingNicknameUpdatesForHandleIDs:(id)ids;
- (void)clearPendingNicknamePhotoUpdateForHandleIDs:(id)ids;
- (void)ignorePendingNicknameUpdatesForHandleIDs:(id)ids;
- (void)allowHandleIDsForNicknameSharing:(id)sharing onChatGUIDs:(id)guids fromHandle:(id)handle forceSend:(BOOL)send;
- (void)denyHandleIDsForNicknameSharing:(id)sharing;
- (void)markProfileRecords:(id)records asActive:(BOOL)active;
- (void)markProfileRecordsAsIgnored:(id)ignored;
- (void)nicknamePreferencesDidChange;
- (void)fetchPersonalNicknameWithReply:(id /* block */)reply;
- (void)setNewPersonalNickname:(id)nickname;
- (void)acceptPendingNicknameForHandleID:(id)id updateType:(unsigned long long)type;
- (void)markNicknamesAsTransitionedForHandleIDs:(id)ids isAutoUpdate:(BOOL)update;
- (void)sendNameOnlyToHandleIDs:(id)ids fromHandleID:(id)id;
- (void)markAllNicknamesAsPending;
- (void)eagerUploadTransfer:(id)transfer recipients:(id)recipients;
- (void)eagerUploadCancel:(id)cancel;
- (void)downloadStickerWithGUID:(id)guid;
- (void)downloadStickerPackWithGUID:(id)guid isIncomingMessage:(BOOL)message ignoreCache:(BOOL)cache;
- (void)holdBuddyUpdatesAccount:(id)account;
- (void)resumeBuddyUpdatesAccount:(id)account;
- (void)startWatchingBuddy:(id)buddy account:(id)account;
- (void)stopWatchingBuddy:(id)buddy account:(id)account;
- (void)requestProperty:(id)property ofPerson:(id)person account:(id)account;
- (void)setValue:(id)value ofProperty:(id)property ofPerson:(id)person account:(id)account;
- (void)requestGroupsAccount:(id)account;
- (void)sendNotificationMessageToUniqueID:(id)id withCommand:(long long)command;
- (void)inviteHandleIDToShareMyScreen:(id)screen isContact:(BOOL)contact;
- (void)askHandleIDToShareTheirScreen:(id)screen isContact:(BOOL)contact;
- (void)requestPendingVCInvites;
- (void)requestPendingACInvites;
- (void)conference:(id)conference account:(id)account notifyInvitationCancelledFromPerson:(id)person;
- (void)terminateForcingIfNeeded:(BOOL)needed;
- (void)sendNotice:(id)notice toHandles:(id)handles fromHandle:(id)handle reply:(id /* block */)reply;
- (void)sendClearNotice:(id)notice toHandles:(id)handles reply:(id /* block */)reply;
- (void)markReadForMessageGUID:(id)guid callerOrigin:(long long)origin queryID:(id)id;
@end

#endif /* IMDaemonAnyProtocol_Protocol_h */