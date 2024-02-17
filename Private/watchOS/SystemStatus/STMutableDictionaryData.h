//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STMutableDictionaryData_h
#define STMutableDictionaryData_h
@import Foundation;

#include "STDictionaryData.h"
#include "STMutableStatusDomainData-Protocol.h"
#include "STMutableStatusDomainDataDifferencing-Protocol.h"

@class NSDictionary, NSString;

@interface STMutableDictionaryData : STDictionaryData<STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (copy, @dynamic, nonatomic) NSDictionary *objectsAndKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)setObject:(id)object forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)applyDiff:(id)diff;
@end

#endif /* STMutableDictionaryData_h */