//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMAssignment_h
#define REMAssignment_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "REMDAChangeTrackableFetchableModel-Protocol.h"
#include "REMDAChangedModelObjectResult-Protocol.h"
#include "REMObjectID.h"
#include "REMObjectIDProviding-Protocol.h"
#include "_REMDAChangeTrackableModel-Protocol.h"

@class NSDate, NSString;

@interface REMAssignment : NSObject<REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, NSSecureCoding, NSCopying, REMObjectIDProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *assignedDate;
@property (nonatomic) BOOL _debug_cdAssigneeLinked;
@property (nonatomic) BOOL _debug_cdOriginatorLinked;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) REMObjectID *assigneeID;
@property (readonly, nonatomic) REMObjectID *originatorID;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *reminderID;
@property (readonly, nonatomic) REMObjectID *remObjectID;

/* class methods */
+ (id)nullifiedOriginatorAssignmentWithObjectID:(id)id accountID:(id)id reminderID:(id)id assigneeID:(id)id status:(long long)status assignedDate:(id)date;
+ (BOOL)rem_DA_supportsFetching;
+ (BOOL)rem_DA_supportsConcealedObjects;
+ (id)rem_DA_propertiesAffectingIsConcealed;
+ (id /* block */)rem_DA_fetchByObjectIDBlock;
+ (id /* block */)rem_DA_fetchByObjectIDsBlock;
+ (id /* block */)rem_DA_deletedKeyFromTombstoneBlock;
+ (id /* block */)rem_DA_deletedKeyFromConcealedModelObjectBlock;
+ (BOOL)isChangeTrackableModel;
+ (BOOL)isChangeTrackableFetchableModel;
+ (BOOL)supportsSecureCoding;
+ (double)orderValueWithAssignedDate:(id)date objectIdentifier:(id)identifier;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)uuid;
+ (id)cdEntityName;

/* instance methods */
- (id)initWithObjectID:(id)id accountID:(id)id reminderID:(id)id assigneeID:(id)id originatorID:(id)id status:(long long)status;
- (id)initWithObjectID:(id)id accountID:(id)id reminderID:(id)id assigneeID:(id)id originatorID:(id)id status:(long long)status assignedDate:(id)date;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAssignment:(id)assignment;
- (BOOL)isOriginatorNullified;
- (double)orderValue;
@end

#endif /* REMAssignment_h */