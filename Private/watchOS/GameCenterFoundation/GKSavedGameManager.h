//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 818.2.23.4.1
//
#ifndef GKSavedGameManager_h
#define GKSavedGameManager_h
@import Foundation;

@class NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSURL;

@interface GKSavedGameManager : NSObject

@property (retain, nonatomic) NSURL *ubiquityURL;
@property (nonatomic) BOOL ubiquityUnavailable;
@property (retain, nonatomic) NSMetadataQuery *query;
@property (retain, nonatomic) NSMutableDictionary *documents;
@property (nonatomic) long long queryDisableCount;
@property (retain, nonatomic) NSMutableArray *fetchHandlers;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)handler;
- (id)savedGamesWithName:(id)name;
- (id)savedGameForDocuments:(id)documents;
- (id)savedGameForDocument:(id)document;
- (id)fileURLForName:(id)name;
- (void)addDocument:(id)document;
- (void)removeDocument:(id)document;
- (id)documentForSavedGame:(id)game;
- (id)documentToSaveWithName:(id)name;
- (id)currentDocumentWithName:(id)name;
- (void)loadDataForSavedGame:(id)game completionHandler:(id /* block */)handler;
- (void)saveGameData:(id)data withName:(id)name completionHandler:(id /* block */)handler;
- (void)deleteSavedGamesWithName:(id)name completionHandler:(id /* block */)handler;
- (void)documentModified:(id)modified;
- (id)errorForNoUbiquity;
- (void)startSavedGameQuery;
- (void)disableQueryUpdates;
- (void)enableQueryUpdates;
- (void)queryDidFinishGathering:(id)gathering;
- (void)queryDidUpdate:(id)update;
- (void)updateSavedGameDocumentsForQueryWithHandler:(id /* block */)handler;
- (void)callFetchHandlers;
- (void)documentConflictStateChanged:(id)changed;
- (void)resolveConflictingSavedGames:(id)games withData:(id)data completionHandler:(id /* block */)handler;
- (void)setupUbiquity;
- (void)ubiquityAvailabilityChanged:(id)changed;
@end

#endif /* GKSavedGameManager_h */