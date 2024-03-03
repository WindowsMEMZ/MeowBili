//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTItemsSectionFetchDescriptor_h
#define NTItemsSectionFetchDescriptor_h
@import Foundation;

#include "NTCatchUpOperationArticleIDsRequest.h"
#include "NTSectionFetchDescriptor-Protocol.h"

@class NSString, NTPBItemsTodaySectionSpecificConfig;

@interface NTItemsSectionFetchDescriptor : NSObject<NTSectionFetchDescriptor>

@property (copy, nonatomic) NTPBItemsTodaySectionSpecificConfig *itemsConfiguration;
@property (copy, nonatomic) NTCatchUpOperationArticleIDsRequest *itemsArticlesRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithItemsConfiguration:(id)configuration;
- (void)configureCatchUpOperationWithFetchRequest:(id)request;
- (id)assembleResultsWithCatchUpOperation:(id)operation;
- (id)incrementalSortTransformationWithFeedPersonalizer:(id)personalizer;
- (id)incrementalLimitTransformationWithFeedPersonalizer:(id)personalizer limit:(unsigned long long)limit priorFeedItems:(id)items;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* NTItemsSectionFetchDescriptor_h */