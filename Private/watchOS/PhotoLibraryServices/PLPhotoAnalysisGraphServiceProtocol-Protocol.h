//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoAnalysisGraphServiceProtocol_Protocol_h
#define PLPhotoAnalysisGraphServiceProtocol_Protocol_h
@import Foundation;

@protocol PLPhotoAnalysisGraphServiceProtocol 
/* instance methods */
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)identifier options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)identifier options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(id)identifiers options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)identifier referenceAssetLocalIdentifier:(id)identifier options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)identifier duration:(unsigned long long)duration options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)identifier options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)generateMemoriesWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestGenerateQuestionsWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestSyndicationProcessingWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestExternalAssetRelevanceProcessingWithContext:(id)context reply:(id /* block */)reply;
- (void)requestUpdatePetIdentitiesWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)simulateMemoriesNotificationWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestSortedArrayOfPersonLocalIdentifiers:(id)identifiers context:(id)context reply:(id /* block */)reply;
- (void)requestAllSocialGroupsForPersonLocalIdentifier:(id)identifier options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestSocialGroupsOverlappingPersonLocalIdentifiers:(id)identifiers context:(id)context reply:(id /* block */)reply;
- (void)requestRelatedMomentsForPersonLocalIdentifiers:(id)identifiers context:(id)context reply:(id /* block */)reply;
- (void)requestAssetsForPersonLocalIdentifiers:(id)identifiers context:(id)context reply:(id /* block */)reply;
- (void)requestOnDemandTasksWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)rebuildGraphWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)forceBackgroundAnalysisTasksWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)identifier andRelatedAssetCollectionForLocalIdentifier:(id)identifier options:(id)options relatedType:(unsigned long long)type context:(id)context reply:(id /* block */)reply;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)identifier andRelatedAssetCollectionForLocalIdentifier:(id)identifier options:(id)options relatedType:(unsigned long long)type context:(id)context reply:(id /* block */)reply;
- (void)requestCurationDebugInformationForAsset:(id)asset context:(id)context reply:(id /* block */)reply;
- (void)requestUtilityAssetInformationWithContext:(id)context reply:(id /* block */)reply;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)identifier options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestSummaryCurationForHighlightLocalIdentifier:(id)identifier options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestCurationOfLength:(unsigned long long)length forMemoryForLocalIdentifier:(id)identifier withOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestAvailableSuggestionTypeInfosWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestSuggestionInfosWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestGraphServiceStatusWithContext:(id)context reply:(id /* block */)reply;
- (void)requestGraphServicePerformsQueryWithContext:(id)context query:(id)query reply:(id /* block */)reply;
- (void)requestGraphServiceStatisticsWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestHighlightEstimatesWithContext:(id)context reply:(id /* block */)reply;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)context reply:(id /* block */)reply;
- (void)requestExportGraphServiceForPurpose:(id)purpose context:(id)context reply:(id /* block */)reply;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)context reply:(id /* block */)reply;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)context reply:(id /* block */)reply;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)identifier andRelatedResultsForLocalIdentifiers:(id)identifiers relatedType:(unsigned long long)type context:(id)context reply:(id /* block */)reply;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)identifier andRelatedResultsForLocalIdentifiers:(id)identifiers relatedType:(unsigned long long)type additionalSnapshotSummaryInfo:(id)info context:(id)context reply:(id /* block */)reply;
- (void)requestDefaultsObjectForKey:(id)key context:(id)context reply:(id /* block */)reply;
- (void)requestSetDefaultsObject:(id)object forKey:(id)key context:(id)context reply:(id /* block */)reply;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)identifier format:(long long)format context:(id)context reply:(id /* block */)reply;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)identifier format:(long long)format context:(id)context reply:(id /* block */)reply;
- (void)requestTitleForPersonLocalIdentifiers:(id)identifiers format:(long long)format context:(id)context reply:(id /* block */)reply;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestInferredMePersonLocalIdentifierWithErrorForContext:(id)context reply:(id /* block */)reply;
- (void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)uuid options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestHighlightEnrichmentWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestAssetRevGeocodingWithContext:(id)context reply:(id /* block */)reply;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)identifiers context:(id)context reply:(id /* block */)reply;
- (void)requestRevGeocodingSyndicationLibraryWithContext:(id)context reply:(id /* block */)reply;
- (void)requestEnrichmentWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestPeopleSuggestionLearningWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestTextFeaturesForMomentLocalIdentifiers:(id)identifiers context:(id)context reply:(id /* block */)reply;
- (void)reportMetricsWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestRunPFLWithAttachments:(id)attachments recipeUserInfo:(id)info context:(id)context resultBlock:(id /* block */)block;
- (void)runShadowEvaluationWithRecipe:(id)recipe models:(id)models trialDeploymentID:(id)id trialExperimentID:(id)id trialTreatmentID:(id)id context:(id)context resultBlock:(id /* block */)block;
- (void)requestComposabilityScoresOfAssetsForLocalIdentifiers:(id)identifiers options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)runModelInferenceForFingerprintVersion:(id)version options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestDiscoveryFeedItemsWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestUpNextMemoriesWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestKeyAssetLocalIdentifierForPrototypeCategory:(id)category context:(id)context reply:(id /* block */)reply;
- (void)requestUpNextAssetLocalIdentifiersForAssetWithLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestTrendsByIdentifierWithCadence:(id)cadence forYear:(unsigned long long)year context:(id)context reply:(id /* block */)reply;
- (void)requestUtilityAssetLocalIdentifiersWithContext:(id)context reply:(id /* block */)reply;
- (void)requestConfidenceByMomentLocalIdentifierForMeaning:(id)meaning useAlternativeMeaningEdge:(BOOL)edge onlyHighPrecision:(BOOL)precision context:(id)context reply:(id /* block */)reply;
- (void)requestAssetLocalIdentifiersByCityNameWithContext:(id)context reply:(id /* block */)reply;
- (void)requestMeaningScoreDebugDescriptionForMomentLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestAssetLocalIdentifiersWithinLocationRadiusOfAssetLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(id)identifier context:(id)context reply:(id /* block */)reply;
- (void)requestGraphInferencesSummaryWithDateInterval:(id)interval context:(id)context reply:(id /* block */)reply;
- (void)requestGraphInferencesSummaryWithMomentLocalIdentifiers:(id)identifiers context:(id)context reply:(id /* block */)reply;
- (void)requestGraphMomentLocalIdentifiersWithDateInterval:(id)interval context:(id)context reply:(id /* block */)reply;
- (void)requestGenerateDefaultRulesForLibraryScopeWithLocalIdentifier:(id)identifier withOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestSuggestedMomentLocalIdentifiersForPersonLocalIdentifiers:(id)identifiers withOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestStartSharedLibrarySuggestionResultWithContext:(id)context reply:(id /* block */)reply;
- (void)requestCameraSmartSharingProcessingForLibraryScopeWithUUID:(id)uuid withOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestReprocessSuggestionsOnLibraryScopeRulesChangeWithContext:(id)context reply:(id /* block */)reply;
- (void)requestNightlySuggestionsForPosterConfiguration:(id)configuration atDate:(id)date context:(id)context reply:(id /* block */)reply;
- (void)reloadWallpaperSuggestionsWithSuggestionUUIDs:(id)uuids context:(id)context reply:(id /* block */)reply;
- (void)requestPeopleForWallpaperSuggestionsWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestWallpaperPropertiesForAssets:(id)assets options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)exportWallpaperForAssets:(id)assets options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)metadata options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)identifiers momentLocalIdentifiers:(id)identifiers options:(id)options context:(id)context reply:(id /* block */)reply;
- (void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)identifiers context:(id)context reply:(id /* block */)reply;
- (void)requestSuggestedPersonsWithOptions:(id)options context:(id)context reply:(id /* block */)reply;
@end

#endif /* PLPhotoAnalysisGraphServiceProtocol_Protocol_h */