//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NMUIReplyCompositionModel_h
#define NMUIReplyCompositionModel_h
@import Foundation;

#include "NMUICompositionModel.h"

@class NNMKMessage, NSArray;

@interface NMUIReplyCompositionModel : NMUICompositionModel

@property (retain, nonatomic) NNMKMessage *referenceMessage;
@property (nonatomic) BOOL replyAll;
@property (retain, nonatomic) NSArray *replyAllCCRecipents;

/* class methods */
+ (id)_sanitizedAddresses:(id)addresses;

/* instance methods */
- (id)initWithReferenceMessage:(id)message replyAll:(BOOL)all senderEmails:(id)emails sender:(id)sender;
- (BOOL)recipientsEditable;
- (id)title;
- (unsigned long long)messageSendingType;
- (id)defaultEmailAddress;
- (BOOL)allowEditingFromAddress;
- (id)_createMessage;
- (void)_removeExcludedEmailsFromRecipientList:(id)list excludedEmails:(id)emails;
@end

#endif /* NMUIReplyCompositionModel_h */