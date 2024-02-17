//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCModelGenericAVItemTimedMetadataRequest_h
#define MPCModelGenericAVItemTimedMetadataRequest_h
@import Foundation;

#include "MPModelRequest.h"
#include "MPCModelGenericAVItemTimedMetadataResponse.h"

@class ICStoreRequestContext, MPModelGenericObject, NSArray;

@interface MPCModelGenericAVItemTimedMetadataRequest : MPModelRequest

@property (retain, nonatomic) MPCModelGenericAVItemTimedMetadataResponse *previousResponse;
@property (readonly, nonatomic) MPModelGenericObject *genericObject;
@property (readonly, copy, nonatomic) ICStoreRequestContext *storeRequestContext;
@property (readonly, copy, nonatomic) NSArray *timedMetadataGroups;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)metadataIdentifiers;

/* instance methods */
- (id)initWithGenericObject:(id)object timedMetadataGroups:(id)groups storeRequestContext:(id)context;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)newOperationWithResponseHandler:(id /* block */)handler;
@end

#endif /* MPCModelGenericAVItemTimedMetadataRequest_h */