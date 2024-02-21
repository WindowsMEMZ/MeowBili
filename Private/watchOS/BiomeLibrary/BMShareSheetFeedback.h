//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMShareSheetFeedback_h
#define BMShareSheetFeedback_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSData, NSString;

@interface BMShareSheetFeedback : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *derivedIntentIdentifier;
@property (readonly, nonatomic) NSString *targetBundleID;
@property (readonly, nonatomic) NSString *extensionContextUUID;
@property (readonly, nonatomic) NSData *attachments;
@property (readonly, nonatomic) NSArray *locationUUIDs;
@property (readonly, nonatomic) NSArray *photoSuggestedContacts;
@property (readonly, nonatomic) NSData *modelSuggestionProxies;
@property (readonly, nonatomic) NSString *adaptedModelRecipeID;
@property (readonly, nonatomic) BOOL isAdaptedModelUsed;
@property (nonatomic) BOOL hasIsAdaptedModelUsed;
@property (readonly, nonatomic) BOOL isAdaptedModelCreated;
@property (nonatomic) BOOL hasIsAdaptedModelCreated;
@property (readonly, nonatomic) NSString *supportedBundleIDs;
@property (readonly, nonatomic) int peopleSuggestionsDisabled;
@property (nonatomic) BOOL hasPeopleSuggestionsDisabled;
@property (readonly, nonatomic) NSString *reasonType;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *sourceBundleID;
@property (readonly, nonatomic) NSString *transportBundleID;
@property (readonly, nonatomic) double numberOfVisibleSuggestions;
@property (nonatomic) BOOL hasNumberOfVisibleSuggestions;
@property (readonly, nonatomic) NSString *trackingID;
@property (readonly, nonatomic) BOOL iCloudFamilyInvocation;
@property (nonatomic) BOOL hasICloudFamilyInvocation;
@property (readonly, nonatomic) int engagementType;
@property (readonly, nonatomic) int indexSelected;
@property (nonatomic) BOOL hasIndexSelected;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithDerivedIntentIdentifier:(id)identifier targetBundleID:(id)id extensionContextUUID:(id)uuid attachments:(id)attachments locationUUIDs:(id)uuids photoSuggestedContacts:(id)contacts modelSuggestionProxies:(id)proxies adaptedModelRecipeID:(id)id isAdaptedModelUsed:(id)used isAdaptedModelCreated:(id)created supportedBundleIDs:(id)ids peopleSuggestionsDisabled:(id)disabled reasonType:(id)type reason:(id)reason sourceBundleID:(id)id transportBundleID:(id)id numberOfVisibleSuggestions:(id)suggestions trackingID:(id)id iCloudFamilyInvocation:(id)invocation engagementType:(int)type indexSelected:(id)selected;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)_locationUUIDsJSONArray;
- (id)_photoSuggestedContactsJSONArray;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMShareSheetFeedback_h */