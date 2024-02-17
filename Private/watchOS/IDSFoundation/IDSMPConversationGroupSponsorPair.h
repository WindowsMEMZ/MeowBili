//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSMPConversationGroupSponsorPair_h
#define IDSMPConversationGroupSponsorPair_h
@import Foundation;

#include "IDSMPConversationKey.h"

@class NSString;

@interface IDSMPConversationGroupSponsorPair : NSObject

@property (readonly, nonatomic) IDSMPConversationKey *conversationKey;
@property (readonly, nonatomic) NSString *sponsorAlias;

/* instance methods */
- (id)initWithConversationKey:(id)key sponsorAlias:(id)alias;
@end

#endif /* IDSMPConversationGroupSponsorPair_h */