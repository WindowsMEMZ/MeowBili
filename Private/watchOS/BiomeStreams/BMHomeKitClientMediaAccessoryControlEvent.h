//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMHomeKitClientMediaAccessoryControlEvent_h
#define BMHomeKitClientMediaAccessoryControlEvent_h
@import Foundation;

#include "BMEventBase.h"
#include "BMHomeKitClientBase.h"
#include "BMProtoBufWrapper-Protocol.h"
#include "BMStoreData-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface BMHomeKitClientMediaAccessoryControlEvent : BMEventBase<BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *accessoryName;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSArray *zoneNames;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) BMHomeKitClientBase *base;
@property (readonly, copy, nonatomic) NSString *accessoryUniqueIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *accessoryStateString;
@property (readonly, copy, nonatomic) NSDictionary *accessoryStateNumber;
@property (readonly, copy, nonatomic) NSDictionary *accessoryStateData;
@property (readonly, copy, nonatomic) NSString *accessoryMediaRouteIdentifier;
@property (readonly, copy, nonatomic) NSArray *zoneUniqueIdentifiers;
@property (readonly, copy, nonatomic) NSString *roomUniqueIdentifier;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;

/* instance methods */
- (id)initWithBase:(id)base accessoryUniqueIdentifier:(id)identifier accessoryStateString:(id)string accessoryStateNumber:(id)number accessoryStateData:(id)data accessoryMediaRouteIdentifier:(id)identifier zoneUniqueIdentifiers:(id)identifiers roomUniqueIdentifier:(id)identifier accessoryName:(id)name roomName:(id)name zoneNames:(id)names homeName:(id)name;
- (id)serialize;
- (id)encodeAsProto;
- (id)initWithProto:(id)proto;
- (id)initWithProtoData:(id)data;
- (id)proto;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMHomeKitClientMediaAccessoryControlEvent_h */