//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLPlaceholderRecord_h
#define CPLPlaceholderRecord_h
@import Foundation;

#include "CPLScopedIdentifier.h"

@class NSString;

@interface CPLPlaceholderRecord : NSObject

@property (readonly, nonatomic) Class recordClass;
@property (readonly, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (readonly, nonatomic) Class relatedRecordClass;
@property (readonly, nonatomic) NSString *relatedIdentifier;
@property (readonly, nonatomic) CPLScopedIdentifier *relatedScopedIdentifier;

/* instance methods */
- (id)translateToCloudRecordUsingIDMapping:(id)idmapping;
- (id)translateToClientRecordUsingIDMapping:(id)idmapping;
- (id)initWithRecordClass:(Class)class scopedIdentifier:(id)identifier relatedRecordClass:(Class)class relatedIdentifier:(id)identifier;
- (id)initWithRecord:(id)record;
- (id)description;
- (id)redactedDescription;
@end

#endif /* CPLPlaceholderRecord_h */