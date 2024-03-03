//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKPrivateFetchRecordZoneChangesOperation_h
#define FCCKPrivateFetchRecordZoneChangesOperation_h
@import Foundation;

#include "FCCKPrivateDatabaseOperation.h"
#include "FCCKPrivateDatabaseServerChangeToken.h"

@class CKRecordZoneID, NSArray;

@interface FCCKPrivateFetchRecordZoneChangesOperation : FCCKPrivateDatabaseOperation

@property (retain, nonatomic) NSArray *resultChangedRecords;
@property (retain, nonatomic) NSArray *resultDeletedRecordIDs;
@property (retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken;
@property (nonatomic) BOOL resultMoreComing;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (nonatomic) BOOL fetchNewestChangesFirst;
@property (nonatomic) BOOL fetchAllChanges;
@property (copy, nonatomic) id /* block */ fetchRecordZoneChangesCompletionBlock;

/* instance methods */
- (BOOL)validateOperation;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)error;
- (id)_configurationForDestination:(long long)destination;
@end

#endif /* FCCKPrivateFetchRecordZoneChangesOperation_h */