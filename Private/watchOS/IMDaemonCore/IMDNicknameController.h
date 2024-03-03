//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDNicknameController_h
#define IMDNicknameController_h
@import Foundation;

#include "IDSServiceDelegate-Protocol.h"
#include "IMUnlockMonitorListener-Protocol.h"

@class IDSKVStore, IDSService, IMNickname, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IMDNicknameController : NSObject<IMUnlockMonitorListener, IDSServiceDelegate>

@property (retain, nonatomic) IDSKVStore *cloudkitRecordsKVStore;
@property (nonatomic) double lastMeContactStoreSync;
@property (retain, nonatomic) IDSKVStore *pendingNicknameUpdatesKVStore;
@property (retain, nonatomic) IDSKVStore *handledNicknamesKVStore;
@property (retain, nonatomic) IDSKVStore *archivedNicknamesKVStore;
@property (retain, nonatomic) IDSKVStore *handleSharingKVStore;
@property (retain, nonatomic) IDSKVStore *nicknameRecordsKVStore;
@property (retain, nonatomic) NSMutableDictionary *pendingNicknameUpdates;
@property (retain, nonatomic) NSMutableSet *handleTransitionedList;
@property (retain, nonatomic) NSMutableDictionary *activeNicknameRecords;
@property (retain, nonatomic) NSMutableDictionary *ignoredNicknameRecords;
@property (retain, nonatomic) NSMutableDictionary *handledNicknames;
@property (retain, nonatomic) NSMutableDictionary *archivedNicknames;
@property (retain, nonatomic) NSMutableSet *handleAllowList;
@property (retain, nonatomic) NSMutableSet *handleDenyList;
@property (retain, nonatomic) IMNickname *personalNickname;
@property (nonatomic) BOOL needToLoadMapsInfoFromDisk;
@property (retain, nonatomic) NSMutableArray *chatsToSendNicknameInfoTo;
@property (nonatomic) BOOL nicknameIsUploadingToCK;
@property (retain, nonatomic) IDSService *nicknameService;
@property (readonly, nonatomic) NSSet *allowListedHandlesForSharing;
@property (readonly, nonatomic) NSSet *denyListedHandlesForSharing;
@property (readonly, nonatomic) NSSet *transitionedHandles;
@property (readonly, nonatomic) NSDictionary *activeRecords;
@property (readonly, nonatomic) NSDictionary *ignoredRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)defaults;
- (BOOL)_nicknameFeatureEnabled;
- (void)_ckAccountChanged:(id)changed;
- (BOOL)evaluateAccountStateForFeatureEligibility;
- (void)aliasesDidChange:(BOOL)change;
- (void)_evaluateIfAccountHasMultiplePhoneNumbers;
- (unsigned long long)_reuploadLocalProfileVersionNumber;
- (void)_tryToReuploadPersonalNicknameWithRetryCount:(unsigned long long)count reuploadVersion:(unsigned long long)version;
- (void)reuploadProfileIfNeeded;
- (void)newDeviceDidSignIntoiMessage;
- (void)_retryPeerRequestWithRetry:(unsigned long long)retry;
- (void)_newDeviceDidSignIntoiMessageWithRetryCount:(unsigned long long)count;
- (void)deviceSignedOutOfiMessage;
- (void)verifyTruncatedRecordIDMatchesPersonalNickname:(id)nickname forChat:(id)chat;
- (void)_beginNicknameUpload:(id)upload;
- (void)_endNicknameUpload;
- (void)setPersonalNickname:(id)nickname completionBlock:(id /* block */)block;
- (void)_uploadPendingNicknameIfNecessary;
- (void)_resetHandleSharingList;
- (void)_clearSharingLists;
- (void)_clearTransitionedList;
- (void)_clearActiveNicknameRecords;
- (void)_clearIgnoredNicknameRecords;
- (void)currentPersonalNicknamewithCompletionBlock:(id /* block */)block;
- (void)currentPersonalNicknameWithRecordID:(id)id decryptionKey:(id)key wallpaperDataTag:(id)tag wallpaperLowResDataTag:(id)tag wallpaperMetadataTag:(id)tag completionBlock:(id /* block */)block;
- (void)getNicknameWithRecordID:(id)id decryptionKey:(id)key wallpaperDataTag:(id)tag wallpaperLowResDataTag:(id)tag wallpaperMetadataTag:(id)tag isKnownSender:(BOOL)sender completionBlock:(id /* block */)block;
- (void)NicknameWithRecordID:(id)id URI:(id)uri decryptionKey:(id)key wallpaperDataTag:(id)tag wallpaperLowResDataTag:(id)tag wallpaperMetadataTag:(id)tag hasWallpaperUpdate:(BOOL)update withCompletionBlock:(id /* block */)block;
- (void)deleteAllPersonalNicknames:(BOOL)nicknames withCompletion:(id /* block */)completion;
- (void)_updateSharingPreferencesIfNeededFromMadridMessage:(id)message;
- (void)_updateMessageDictionaryWithPendingNicknameUpdates:(id)updates;
- (void)_updateMessageDictionaryWithNicknameUpdateRecordIDs:(id)ids;
- (id)messageDictionaryWithPersonalRecordIDAndVersion;
- (void)acceptPendingNicknameForHandleID:(id)id updateType:(unsigned long long)type;
- (void)_updateNicknameListsIfNeeded:(id)needed;
- (void)_showDebugAlertWithHeader:(id)header message:(id)message;
- (void)_updateCloudKitRecordIDAndDecryptionKeyIfNeeded:(id)needed;
- (void)_updateHandleDenyAllowListIfNeeded:(id)needed;
- (void)_updateHandleTransitionedListIfNeeded:(id)needed;
- (void)_updateActiveNicknameRecordsListIfNeeded:(id)needed;
- (void)_updateIgnoredNicknameRecordsListIfNeeded:(id)needed;
- (id)_diffActiveRecords:(id)records againstPrevious:(id)previous;
- (void)_saveWallpaperForActiveNicknames:(id)nicknames;
- (void)_updateDenyAllowListHandlesVersion;
- (void)_updateTransitionedListHandlesVersion;
- (void)_updateIsActiveListHandlesVersion;
- (void)_updateIsIgnoredListHandlesVersion;
- (void)_syncHandleAllowDenyListToOtherDevices;
- (void)_syncHandleTransitionedListToOtherDevices;
- (void)_syncActiveNicknameRecordsToOtherDevices;
- (void)_syncIgnoredNicknameRecordsToOtherDevices;
- (BOOL)_requestingToSendLocalNicknameInfo:(id)info;
- (void)handleNicknameUpdatesFromPeerDevice:(id)device fromPeerDevice:(id)device;
- (void)_updateNameOnlyUpdateForMessage:(id)message fromHandleID:(id)id;
- (void)sendPendingNicknameUpdatesDidChange;
- (BOOL)_isNicknamesSharingEnabled;
- (void)sendNicknamePreferencesDidChange;
- (void)sendPersonalNicknameRecordIDAndVersionRequestedByDevice:(id)device;
- (void)sendPersonalNicknameRecordIDAndVersionToAllPeers;
- (BOOL)_sendMessageDictionary:(id)dictionary toDevice:(id)device;
- (BOOL)_sendMessageDictionary:(id)dictionary toDevice:(id)device sendType:(unsigned long long)type;
- (void)sendNameOnlyToHandleIDs:(id)ids fromHandleID:(id)id;
- (void)queueChatToSendNicknamePostUploadIfNeeded:(id)needed;
- (void)_getDevicesForBothNicknameServices:(id)services removeNewServiceURIsFromIMessageList:(BOOL)list completionHandler:(id /* block */)handler;
- (void)sendPersonalNicknameToRecipients:(id)recipients chatGUID:(id)guid fromHandle:(id)handle;
- (void)sendPersonalNicknameToRecipients:(id)recipients chatGUID:(id)guid fromHandle:(id)handle onlyUseNicknameSendingService:(BOOL)service;
- (void)sendPersonalNicknameToRecipients:(id)recipients chatGUID:(id)guid fromHandle:(id)handle onlySendToThoseLoggedOutOfIMessage:(BOOL)imessage;
- (void)sendPersonalNicknameToRecipients:(id)recipients chatGUID:(id)guid fromHandle:(id)handle onlyUseNicknameSendingService:(BOOL)service onlySendToThoseLoggedOutOfIMessage:(BOOL)imessage;
- (id)_typeOfNicknameUpdateToShare;
- (id)newNicknameInfoToSend;
- (id)_idsDeviceFromPushToken:(id)token;
- (void)service:(id)service account:(id)account incomingMessage:(id)message fromID:(id)id context:(id)context;
- (void)broadcastHandlesSharingNicknamesDidChange;
- (void)broadcastTransitionedHandlesDidChange;
- (void)allowHandlesForSharing:(id)sharing onChatGUIDs:(id)guids fromHandle:(id)handle forceSend:(BOOL)send;
- (void)markHandlesAsAllowed:(id)allowed;
- (void)denyHandlesForSharing:(id)sharing;
- (void)markNicknamesAsTransitionedForHandleIDs:(id)ids isAutoUpdate:(BOOL)update;
- (void)markProfileRecords:(id)records asActive:(BOOL)active;
- (void)markProfileRecordsAsIgnored:(id)ignored broadcastUpdates:(BOOL)updates;
- (void)_updateHandleList:(id)list withHandles:(id)handles forKey:(id)key broadcastUpdates:(BOOL)updates;
- (void)_updateTransitionList:(id)list withHandles:(id)handles forKey:(id)key broadcastUpdates:(BOOL)updates;
- (void)_updateActiveList:(id)list withRecords:(id)records broadcastUpdates:(BOOL)updates;
- (void)_updateIgnoredList:(id)list withRecords:(id)records broadcastUpdates:(BOOL)updates;
- (void)_removeFromTransitionedList:(id)list;
- (void)_removeFromList:(id)list withKey:(id)key;
- (void)_updatePendingNicknameVersion;
- (void)saveNicknameForRecordID:(id)id handleID:(id)id userNickname:(id)nickname;
- (void)clearPendingNicknameForHandleID:(id)id;
- (void)ignorePendingNicknameForHandleID:(id)id;
- (void)clearPendingNicknamePhotoForHandleID:(id)id;
- (void)_markNicknamePhotoAsUpdated:(id)updated;
- (void)_broadcastNicknamesMapChanged;
- (void)_broadcastActiveListChanged;
- (void)addNicknameToPendingUpdates:(id)updates;
- (BOOL)replacedNicknameForHandleIDInHandledMapIfNeeded:(id)needed nickname:(id)nickname;
- (void)_markPendingNicknameAsCurrent:(id)current incrementPendingNicknameVersion:(BOOL)version updateType:(unsigned long long)type broadcastUpdates:(BOOL)updates;
- (void)_markCurrentNicknameAsArchived:(id)archived incrementPendingNicknameVersion:(BOOL)version;
- (void)_deleteOnDiskDataIfNeededForNickname:(id)nickname withNewNickname:(id)nickname;
- (void)_updateNicknameInHandledMap:(id)map updateType:(unsigned long long)type broadcastUpdates:(BOOL)updates;
- (void)_updateNicknameInArchivedMap:(id)map;
- (BOOL)_isActiveForNickname:(id)nickname;
- (void)markNicknameAsUpdated:(id)updated;
- (void)_writeNicknameToKVStore:(id)kvstore nickname:(id)nickname;
- (void)_deleteNicknameFromPendingMap:(id)map;
- (void)_deleteHandleIDFromPendingMap:(id)map;
- (void)_deleteHandleIDFromHandledMap:(id)map;
- (void)_deleteHandleIDFromArchivedMap:(id)map;
- (void)cleanUpNicknameForID:(id)id;
- (BOOL)_deviceUnderFirstUnlock;
- (BOOL)_isUnderScrutiny;
- (void)_setUnderScrutiny:(BOOL)scrutiny;
- (void)_deleteDataUnderScrutiny;
- (void)_loadAllInfoFromDiskIfAble;
- (void)loadPersonalNicknameIfNeeded;
- (void)loadNicknamesFromKVStore;
- (void)loadHandledTransitioned;
- (id)loadListForKey:(id)key list:(id)list;
- (void)loadSharingHandlesPrefs;
- (BOOL)_populateNicknameDictionary:(id)dictionary forKVStore:(id)kvstore limitToLoad:(unsigned long long)load;
- (void)_makeAllNicknameContentsClassC;
- (void)_storePublicNickname:(id)nickname nicknameLocation:(id)location encryptionKey:(id)key wallpaperDataTag:(id)tag wallpaperLowResDataTag:(id)tag wallpaperMetadataTag:(id)tag;
- (void)_storePendingNicknameForUpload:(id)upload;
- (id)_getPendingNicknameForUpload;
- (void)_deletePendingNicknameForUpload;
- (void)_deletePublicNicknameLocationAndKey;
- (id)nickNameDecryptionKey;
- (id)wallpaperDataTag;
- (id)lowResWallpaperDataTag;
- (id)wallpaperMetadataTag;
- (id)nickNameRecordID;
- (id)storedPersonalNickname;
- (id)pendingPersonalNickname;
- (void)_deleteAvatarForNickname:(id)nickname;
- (id)allNicknames;
- (id)nicknameForRecordID:(id)id;
- (id)nicknameForRecordID:(id)id handle:(id)handle;
- (id)nicknameForHandleURI:(id)uri;
- (id)nicknameForHandle:(id)handle;
- (id)substringRecordIDForNickname:(id)nickname;
- (id)transferServicesController;
- (void)systemDidLeaveFirstDataProtectionLock;
- (void)markAllNicknamesAsPending;
@end

#endif /* IMDNicknameController_h */