//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTID_Protocol_h
#define MTID_Protocol_h
@import Foundation;

@protocol MTID <NSObject>

@property (readonly, copy, nonatomic) NSString *idNamespace;
@property (readonly, nonatomic) long long idType;
@property (readonly, copy, nonatomic) NSString *idString;
@property (readonly, nonatomic) NSNumber *dsId;
@property (readonly, nonatomic) double lifespan;
@property (readonly, copy, nonatomic) NSDate *effectiveDate;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL isSynchronized;
@property (readonly, copy, nonatomic) NSDictionary *metricsFields;

@end

#endif /* MTID_Protocol_h */