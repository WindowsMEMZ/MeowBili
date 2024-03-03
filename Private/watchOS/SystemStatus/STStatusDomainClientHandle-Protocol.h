//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STStatusDomainClientHandle_Protocol_h
#define STStatusDomainClientHandle_Protocol_h
@import Foundation;

@protocol STStatusDomainClientHandle <NSObject>

@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;

/* instance methods */
- (void)observeData:(id)data forDomain:(unsigned long long)domain withChangeContext:(id)context;
@end

#endif /* STStatusDomainClientHandle_Protocol_h */