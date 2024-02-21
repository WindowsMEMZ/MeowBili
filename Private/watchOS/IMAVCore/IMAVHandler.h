//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 690.0.0.0.0
//
#ifndef IMAVHandler_h
#define IMAVHandler_h
@import Foundation;

@class NSMutableArray;

@interface IMAVHandler : NSObject {
  /* instance variables */
  NSMutableArray *_pendingChats;
  NSMutableArray *_pendingLookups;
}

/* class methods */
+ (void)initialize;
+ (void)ensureHandlerSetup;

/* instance methods */
- (void)_handleIncomingWithAccount:(id)account fromHandle:(id)handle conference:(id)conference properites:(id)properites;
- (void)account:(id)account conference:(id)conference receivedInvitationFrom:(id)from properties:(id)properties;
- (void)account:(id)account conference:(id)conference receivedResponseToInvitationFrom:(id)from properties:(id)properties;
- (void)account:(id)account conference:(id)conference receivedCancelInvitationFrom:(id)from properties:(id)properties;
- (void)account:(id)account conference:(id)conference receivedAVMessage:(unsigned int)avmessage from:(id)from sessionID:(unsigned int)id userInfo:(id)info;
- (void)account:(id)account conference:(id)conference peerIDChangedFromID:(id)id toID:(id)id;
- (void)account:(id)account conference:(id)conference changedToNewConferenceID:(id)id;
- (void)_notifyOfIncomingInvitationFor:(id)for notifyInvitationListeners:(BOOL)listeners;
- (void)_enqueueIMAVChatForNetworkActivation:(id)activation;
- (void)_handleIncomingAVChatForNotification:(id)notification;
- (void)account:(id)account avAction:(unsigned int)action withArguments:(id)arguments toAVChat:(id)avchat isVideo:(BOOL)video;
- (void)vcCapabilitiesChanged:(unsigned long long)changed;
- (void)pendingVCRequestComplete;
- (void)pendingACRequestComplete;
- (void)setupComplete;
- (void)account:(id)account conference:(id)conference peerID:(id)id propertiesUpdated:(id)updated;
- (void)property:(id)property changedTo:(id)to from:(id)from;
- (void)persistentProperty:(id)property changedTo:(id)to from:(id)from;
- (void)account:(id)account postedError:(id)error;
- (void)account:(id)account relay:(id)relay handleInitate:(id)initate fromPerson:(id)person;
- (void)account:(id)account relay:(id)relay handleUpdate:(id)update fromPerson:(id)person;
- (void)account:(id)account relay:(id)relay handleCancel:(id)cancel fromPerson:(id)person;
- (void)account:(id)account conference:(id)conference invitationSentSuccessfully:(BOOL)successfully;
@end

#endif /* IMAVHandler_h */