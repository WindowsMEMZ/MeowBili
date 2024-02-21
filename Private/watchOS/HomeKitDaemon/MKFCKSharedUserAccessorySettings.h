//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFCKSharedUserAccessorySettings_h
#define MKFCKSharedUserAccessorySettings_h
@import Foundation;

#include "MKFCKSharedUserData.h"
#include "HMDCoreDataCloudTransformable-Protocol.h"
#include "MKFCKSharedUserDataRoot.h"

@class NSString, NSUUID;

@interface MKFCKSharedUserAccessorySettings : MKFCKSharedUserData<HMDCoreDataCloudTransformable>

@property (copy, @dynamic, nonatomic) NSUUID *accessoryModelID;
@property (@dynamic, nonatomic) BOOL listeningHistoryEnabled;
@property (@dynamic, nonatomic) BOOL mediaContentProfileEnabled;
@property (@dynamic, nonatomic) BOOL personalRequestsEnabled;
@property (retain, @dynamic, nonatomic) MKFCKSharedUserDataRoot *root;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)fetchRequest;
+ (id)createWithHomeModelID:(id)id accessoryModelID:(id)id persistentStore:(id)store context:(id)context;
+ (BOOL)importInsertWithObjectID:(id)id additionalUpdates:(id)updates context:(id)context;
+ (BOOL)importUpdateWithObjectID:(id)id updatedProperties:(id)properties additionalUpdates:(id)updates context:(id)context;
+ (BOOL)importDeleteWithObjectID:(id)id modelID:(id)id additionalUpdates:(id)updates context:(id)context;
+ (BOOL)exportInsertWithObjectID:(id)id additionalUpdates:(id)updates context:(id)context;
+ (BOOL)exportUpdateWithObjectID:(id)id updatedProperties:(id)properties additionalUpdates:(id)updates context:(id)context;
+ (BOOL)exportDeleteWithObjectID:(id)id modelID:(id)id additionalUpdates:(id)updates context:(id)context;

/* instance methods */
- (BOOL)importIntoLocalUserModel:(id)model context:(id)context;
- (BOOL)_importWithContext:(id)context;
- (BOOL)_importIntoLocalUserModel:(id)model context:(id)context;
@end

#endif /* MKFCKSharedUserAccessorySettings_h */