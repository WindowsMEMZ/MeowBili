//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STMediaStatusDomainDisplayNameTransformerProvider_h
#define STMediaStatusDomainDisplayNameTransformerProvider_h
@import Foundation;

#include "STStatusDomainClientDataTransformerProviding-Protocol.h"

@class NSArray, NSMutableDictionary;

@interface STMediaStatusDomainDisplayNameTransformerProvider : NSObject<STStatusDomainClientDataTransformerProviding> {
  /* instance variables */
  NSMutableDictionary *_entityResolversByLocalization;
  NSMutableDictionary *_transformersByLocalization;
}

@property (copy, nonatomic) NSArray *dynamicAttributions;

/* instance methods */
- (id)init;
- (id)dataTransformerForClient:(id)client;
@end

#endif /* STMediaStatusDomainDisplayNameTransformerProvider_h */