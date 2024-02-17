//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMDeviceBatteryGauging_h
#define BMDeviceBatteryGauging_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMDeviceBatteryGauging : BMEventBase<BMStoreData>

@property (readonly, nonatomic) int updateType;
@property (readonly, nonatomic) int qmaxState;
@property (readonly, nonatomic) int daysSinceQMax;
@property (nonatomic) BOOL hasDaysSinceQMax;
@property (readonly, nonatomic) int ocvState;
@property (readonly, nonatomic) int daysSinceOCV;
@property (nonatomic) BOOL hasDaysSinceOCV;
@property (readonly, nonatomic) int fullChargeState;
@property (readonly, nonatomic) int daysSinceFullChargeAttempt;
@property (nonatomic) BOOL hasDaysSinceFullChargeAttempt;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithUpdateType:(int)type qmaxState:(int)state daysSinceQMax:(id)qmax ocvState:(int)state daysSinceOCV:(id)ocv fullChargeState:(int)state daysSinceFullChargeAttempt:(id)attempt;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMDeviceBatteryGauging_h */