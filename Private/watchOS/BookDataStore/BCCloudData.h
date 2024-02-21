//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCCloudData_h
#define BCCloudData_h
@import Foundation;

#include "NSManagedObject.h"
#include "BCCloudData-Protocol.h"
#include "BCCloudDataPrivacyDelegate-Protocol.h"

@class CKRecord, NSData, NSDate, NSString;

@interface BCCloudData : NSManagedObject<BCCloudData>

@property (copy, @dynamic, nonatomic) NSString *saltedHashedID;
@property (@dynamic, nonatomic) BOOL deletedFlag;
@property (copy, @dynamic, nonatomic) NSDate *modificationDate;
@property (@dynamic, nonatomic) long long editGeneration;
@property (@dynamic, nonatomic) long long syncGeneration;
@property (copy, @dynamic, nonatomic) CKRecord *systemFields;
@property (copy, @dynamic, nonatomic) NSData *ckSystemFields;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)propertyIDKey;
+ (id)localIdentifierFromRecord:(id)record;

/* instance methods */
- (id)mutableCopy;
- (void)configureFromCloudData:(id)data withMergers:(id)mergers;
- (BOOL)isEqualExceptForDate:(id)date ignoringEmptySalt:(BOOL)salt;
- (void)resolveConflictsFromRecord:(id)record withResolvers:(id)resolvers;
- (BOOL)hasValidSalt;
- (void)incrementEditGeneration;
- (id)configuredRecordFromAttributes;
- (id)recordType;
- (id)identifier;
- (id)zoneName;
@end

#endif /* BCCloudData_h */