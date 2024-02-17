//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKMessageInboxEntryInternal_h
#define GKMessageInboxEntryInternal_h
@import Foundation;

#include "GKInternalRepresentation.h"

@class NSString, NSURL;

@interface GKMessageInboxEntryInternal : GKInternalRepresentation

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *senderAlias;
@property (retain, nonatomic) NSString *senderHandle;
@property (retain, nonatomic) NSString *contactID;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSString *friendCode;
@property (readonly, nonatomic) NSString *senderDisplayName;

/* class methods */
+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* GKMessageInboxEntryInternal_h */