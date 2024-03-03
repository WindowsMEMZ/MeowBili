//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDDeviceUnprotectedKeyValueStorageEntryEntity_h
#define HDDeviceUnprotectedKeyValueStorageEntryEntity_h
@import Foundation;

#include "HDDeviceKeyValueStorageEntryEntity.h"

@interface HDDeviceUnprotectedKeyValueStorageEntryEntity : HDDeviceKeyValueStorageEntryEntity
/* class methods */
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)databaseTable;
+ (long long)protectionClass;
+ (id)_propertiesForEntity;
+ (id)foreignKeys;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder *)binder key:(id)key domain:(id)domain object:(id)object syncEntityIdentity:(long long)identity deviceContext:(long long)context modificationDate:(id)date;
+ (void)binderHandlerForBinder:(struct HDSQLiteStatementBinder *)binder syncEntityIdentity:(long long)identity deviceContext:(long long)context;
@end

#endif /* HDDeviceUnprotectedKeyValueStorageEntryEntity_h */