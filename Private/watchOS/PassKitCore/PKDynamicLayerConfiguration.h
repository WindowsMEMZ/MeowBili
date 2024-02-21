//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDynamicLayerConfiguration_h
#define PKDynamicLayerConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PKDynamicLayerCrossDissolveConfiguration.h"
#include "PKDynamicLayerEmitterConfiguration.h"
#include "PKDynamicLayerTransactionEffectConfiguration.h"

@interface PKDynamicLayerConfiguration : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) BOOL supported;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL parallaxEnabled;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *backgroundParallaxEmitter;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *neutralEmitter;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *foregroundParallaxEmitter;
@property (retain, nonatomic) PKDynamicLayerEmitterConfiguration *staticOverlayEmitter;
@property (retain, nonatomic) PKDynamicLayerTransactionEffectConfiguration *transactionEffect;
@property (retain, nonatomic) PKDynamicLayerCrossDissolveConfiguration *crossDissolve;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (BOOL)isSupported;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* PKDynamicLayerConfiguration_h */