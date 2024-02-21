//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPersistedPersonMetadata_h
#define PLPersistedPersonMetadata_h
@import Foundation;

#include "PLPerson.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL;

@interface PLPersistedPersonMetadata : NSObject {
  /* instance variables */
  BOOL _cplEnabled;
}

@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) NSURL *metadataURL;
@property (retain, nonatomic) NSString *personUUID;
@property (nonatomic) NSNumber *detectionType;
@property (retain, nonatomic) NSString *mergeTargetPersonUUID;
@property (retain, nonatomic) NSString *fullName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *personUri;
@property (nonatomic) unsigned int manualOrder;
@property (nonatomic) int type;
@property (nonatomic) int verifiedType;
@property (nonatomic) int cloudVerifiedType;
@property (retain, nonatomic) NSArray *detectedFaces;
@property (retain, nonatomic) NSArray *rejectedFaces;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (nonatomic) short keyFacePickSource;
@property (retain, nonatomic) NSSet *userFeedbacks;
@property (retain, nonatomic) NSArray *userFeedbacksDictionaryArray;
@property (nonatomic) short assetSortOrder;
@property (nonatomic) long long fromVersion;
@property (readonly, nonatomic) NSString *userFeedbackUUID;
@property (readonly, nonatomic) short userFeedbackType;
@property (readonly, nonatomic) short userFeedbackFeature;
@property (readonly, nonatomic) NSString *userFeedbackContext;
@property (readonly, nonatomic) NSDate *userFeedbackLastModifiedDate;

/* class methods */
+ (BOOL)isValidPath:(id)path;
+ (BOOL)isValidPath:(id)path outPersonUUID:(id *)uuid;
+ (id)_metadataFileURLForPersonUUID:(id)uuid pathManager:(id)manager;
+ (id)urlsForPersistedPersonsInMetadataDirectoryOfLibrary:(id)library;
+ (BOOL)deleteMetadataFileForPersonUUID:(id)uuid pathManager:(id)manager;
+ (BOOL)_deleteMetadataFileForPersonUUID:(id)uuid metadataURL:(id)url;
+ (id)_fetchFacesWithPredicate:(id)predicate resultType:(unsigned long long)type managedObjectContext:(id)context error:(id *)error;
+ (id)_detectedFacesToArchiveWithPerson:(id)person;
+ (id)_rejectedFacesToArchiveWithPerson:(id)person;
+ (id)_clusterRejectedFaceIDsWithPerson:(id)person;
+ (id)_persistedFaceMetadataWithFaces:(id)faces keyFace:(id)face clusterRejectedFaceIDs:(id)ids;
+ (id)personUUIDsToDedupeWithMetadataURLs:(id)urls cplEnabled:(BOOL)enabled;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)uuidmapping fromDataInManagedObjectContext:(id)context;
+ (void)performPostImportMigrationFromVersion:(unsigned long long)version fromDataInManagedObjectContext:(id)context;

/* instance methods */
- (id)init;
- (id)initWithPLPerson:(id)plperson pathManager:(id)manager;
- (id)initWithPLPerson:(id)plperson metadataURL:(id)url;
- (id)initWithPersistedDataAtURL:(id)url cplEnabled:(BOOL)enabled;
- (id)initWithPersistedDataAtURL:(id)url deferUnarchiving:(BOOL)unarchiving cplEnabled:(BOOL)enabled;
- (id)detectedFaceIdentifiers;
- (void)writePersistedData;
- (void)removePersistedData;
- (id)insertPersonFromDataInManagedObjectContext:(id)context;
- (BOOL)updateFacesInPerson:(id)person fromDataInManagedObjectContext:(id)context deferUnmatched:(BOOL)unmatched;
- (void)_addAssetUUIDsFromFaces:(id)faces toMutableSet:(id)set;
- (BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)context includePendingAssetChanges:(BOOL)changes;
- (BOOL)_insertDetectedFacesOnPerson:(id)person fromDataInManagedObjectContext:(id)context deferUnmatched:(BOOL)unmatched;
- (BOOL)_insertRejectedFacesOnPerson:(id)person fromDataInManagedObjectContext:(id)context deferUnmatched:(BOOL)unmatched;
- (id)description;
- (BOOL)_readUUID;
- (BOOL)readDetectedFaces;
- (BOOL)readDetectedFacesFromKeyedUnarchiver:(id)unarchiver;
- (BOOL)readMetadata;
- (id)_metadataData;
- (void)_saveMetadata;
- (BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)context diff:(id *)diff;
- (id)jsonDictionary;
@end

#endif /* PLPersistedPersonMetadata_h */