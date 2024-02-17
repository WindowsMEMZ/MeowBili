//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 236.12.0.0.0
//
#ifndef SHClusterMetadataQuery_h
#define SHClusterMetadataQuery_h
@import Foundation;

@interface SHClusterMetadataQuery : NSObject
/* class methods */
+ (long long)dataStoreTypeFromString:(id)string;
+ (id)stringFromStoreType:(long long)type;
+ (id)dateFormatter;
+ (id)metadataFromDatabaseAtLocation:(id)location error:(id *)error;
+ (BOOL)writeMetadata:(id)metadata toDatabaseAtLocation:(id)location error:(id *)error;
@end

#endif /* SHClusterMetadataQuery_h */