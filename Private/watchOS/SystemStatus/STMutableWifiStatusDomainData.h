//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STMutableWifiStatusDomainData_h
#define STMutableWifiStatusDomainData_h
@import Foundation;

#include "STWifiStatusDomainData.h"
#include "STMutableStatusDomainData-Protocol.h"
#include "STMutableStatusDomainDataDifferencing-Protocol.h"

@class NSString;

@interface STMutableWifiStatusDomainData : STWifiStatusDomainData<STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (@dynamic, nonatomic) BOOL wifiActive;
@property (@dynamic, nonatomic) unsigned long long signalStrengthBars;
@property (@dynamic, nonatomic) BOOL associatedToIOSHotspot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)applyDiff:(id)diff;
@end

#endif /* STMutableWifiStatusDomainData_h */