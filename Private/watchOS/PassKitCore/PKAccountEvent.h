//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountEvent_h
#define PKAccountEvent_h
@import Foundation;

#include "PKCloudStoreCoding-Protocol.h"

@class NSDate, NSSet, NSString;

@interface PKAccountEvent : NSObject<PKCloudStoreCoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSString *altDSID;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL blockNotification;
@property (retain, nonatomic) NSSet *items;
@property (readonly, nonatomic) unsigned long long updateReasons;
@property (readonly, nonatomic) BOOL updateReasonIsInitialDownload;

/* class methods */
+ (id)eventIdentifierFromRecordName:(id)name;
+ (long long)accountEventTypeFromRecord:(id)record;
+ (id)accountIdentifierFromRecord:(id)record;
+ (id)recordNameForEventIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;
+ (id)recordNamePrefix;

/* instance methods */
- (id)recordName;
- (void)addUpdateReasons:(unsigned long long)reasons;
- (id)updateReasonsDescription;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCloudStoreCoder:(id)coder;
- (void)applyPropertiesFromCloudStoreRecord:(id)record;
- (void)encodeWithCloudStoreCoder:(id)coder codingType:(unsigned long long)type;
- (void)_encodeServerDataForCloudStoreCoder:(id)coder;
- (id)recordTypesAndNamesForCodingType:(unsigned long long)type;
- (id)recordNameForItem:(id)item;
- (id)primaryIdentifier;
- (unsigned long long)itemType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAccountEvent:(id)event;
- (id)description;
@end

#endif /* PKAccountEvent_h */