//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFCloudKitWorkflow_h
#define WFCloudKitWorkflow_h
@import Foundation;

#include "WFCloudKitItem-Protocol.h"
#include "WFCloudKitWalrusMigrationSupporting-Protocol.h"
#include "WFWorkflowRecord.h"

@class CKRecordID, NSData, NSDate, NSString, WFFileRepresentation;

@interface WFCloudKitWorkflow : NSObject<WFCloudKitItem, WFCloudKitWalrusMigrationSupporting>

@property (retain, nonatomic) WFWorkflowRecord *cachedRecord;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *workflowSubtitle;
@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *galleryIdentifier;
@property (retain, nonatomic) WFFileRepresentation *serializedDataFile;
@property (copy, nonatomic) NSData *serializedQuarantineData;
@property (copy, nonatomic) NSData *serializedAccessResourcePerWorkflowStateData;
@property (copy, nonatomic) NSString *lastSavedOnDeviceName;
@property (copy, nonatomic) NSData *serializedSmartPromptsPerWorkflowStateData;
@property (nonatomic) long long cachedSyncHash;
@property (nonatomic) long long encryptedSchemaVersion;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)recordType;
+ (id)properties;
+ (id)nameProperty;
+ (id)encryptedNameProperty;
+ (id)recordIDWithZoneID:(id)id workflowID:(id)id;
+ (long long)latestEncryptedSchemaVersion;

/* instance methods */
- (void)setCreatedAt:(id)at modifiedAt:(id)at createdBy:(id)by;
- (id)initWithRecord:(id)record identifier:(id)identifier;
- (id)recordRepresentationWithError:(id *)error;
- (BOOL)isValidForSyncing;
- (id)ensureFileAssets;
@end

#endif /* WFCloudKitWorkflow_h */