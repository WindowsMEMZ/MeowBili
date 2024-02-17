//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKADatabaseReceivedInvitation_h
#define SKADatabaseReceivedInvitation_h
@import Foundation;

@class MPStatusKitIncomingRatchet, NSData, NSDate, NSString, SKHandle, SKInvitationPayload;

@interface SKADatabaseReceivedInvitation : NSObject

@property (readonly, nonatomic) SKHandle *invitedSKHandle;
@property (readonly, nonatomic) SKHandle *senderSKHandle;
@property (readonly, nonatomic) MPStatusKitIncomingRatchet *incomingRatchet;
@property (readonly, nonatomic) SKInvitationPayload *skInvitationPayload;
@property (readonly, nonatomic) long long invitationType;
@property (readonly, nonatomic) NSString *senderHandle;
@property (readonly, nonatomic) NSString *invitedHandle;
@property (readonly, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, nonatomic) NSString *presenceIdentifier;
@property (readonly, nonatomic) NSData *channelToken;
@property (readonly, nonatomic) NSData *peerKey;
@property (readonly, nonatomic) NSData *serverKey;
@property (readonly, nonatomic) NSString *invitationIdentifier;
@property (readonly, nonatomic) NSDate *dateInvitationCreated;
@property (readonly, nonatomic) NSData *incomingRatchetState;
@property (readonly, nonatomic) NSData *invitationPayload;

/* class methods */
+ (id)logger;

/* instance methods */
- (id)initWithCoreDataReceivedInvitation:(id)invitation;
- (id)initWithInvitationIdentifier:(id)identifier senderHandle:(id)handle invitedHandle:(id)handle statusTypeIdentifier:(id)identifier dateInvitationCreated:(id)created incomingRatchetState:(id)state presenceIdentifier:(id)identifier channelToken:(id)token serverKey:(id)key peerKey:(id)key invitationPayload:(id)payload;
- (id)description;
@end

#endif /* SKADatabaseReceivedInvitation_h */