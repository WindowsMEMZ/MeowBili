//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKEntity_h
#define CKEntity_h
@import Foundation;

@class CNContact, IMAccount, IMChat, IMHandle, NSString, UIImage;

@interface CKEntity : NSObject

@property (retain, nonatomic) IMHandle *handle;
@property (retain, nonatomic) IMAccount *chatAccount;
@property (retain, nonatomic) IMChat *chat;
@property (retain, nonatomic) CNContact *cnContact;
@property (readonly, nonatomic) IMHandle *defaultIMHandle;
@property (readonly, nonatomic) NSString *propertyType;
@property (readonly, nonatomic) BOOL isMe;
@property (readonly, copy, nonatomic) NSString *abbreviatedDisplayName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *rawAddress;
@property (readonly, copy, nonatomic) NSString *originalAddress;
@property (readonly, copy, nonatomic) NSString *IDSCanonicalAddress;
@property (readonly, copy, nonatomic) NSString *textToneIdentifier;
@property (readonly, copy, nonatomic) NSString *textVibrationIdentifier;
@property (readonly, nonatomic) UIImage *transcriptContactImage;
@property (readonly, nonatomic) UIImage *transcriptDrawerContactImage;
@property (readonly, nonatomic) UIImage *locationMapViewContactImage;
@property (readonly, nonatomic) UIImage *locationShareBalloonContactImage;
@property (nonatomic) BOOL enlargedContactImage;

/* class methods */
+ (BOOL)string:(id)string hasPrefix:(id)prefix;
+ (id)_copyEntityForAddressString:(id)string onAccount:(id)account;
+ (id)copyEntityForAddressString:(id)string;
+ (id)entityForAddress:(id)address;

/* instance methods */
- (BOOL)isMentionable;
- (id)mentionTokens;
- (void)addToken:(id)token ifAvailableToTokens:(id)tokens;
- (id)mentionsHandleID;
- (id)displayNameMatchingInputText:(id)text;
- (id)personViewControllerWithDelegate:(id)delegate isUnknown:(BOOL *)unknown;
- (id)initWithIMHandle:(id)imhandle;
- (id)initWithChat:(id)chat imHandle:(id)handle;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)_allowedByScreenTime;
- (id)cnContactWithKeys:(id)keys;
- (id)cnContactWithKeys:(id)keys shouldFetchSuggestedContact:(BOOL)contact;
- (void)_invalidateContactStoreCache:(id)cache;
- (void)_invalidatePartialContactStoreCache:(id)cache;
- (void)_setBusinessInfoForMutableContact:(id)contact enlargedImageData:(id)data;
- (id)_croppedImageFromImageData:(id)data;
@end

#endif /* CKEntity_h */