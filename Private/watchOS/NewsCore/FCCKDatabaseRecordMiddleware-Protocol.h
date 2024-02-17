//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKDatabaseRecordMiddleware_Protocol_h
#define FCCKDatabaseRecordMiddleware_Protocol_h
@import Foundation;

@protocol FCCKDatabaseRecordMiddleware <NSObject>
/* instance methods */
- (id)clientToServerRecordID:(id)id inDatabase:(id)database error:(id *)error;
- (id)serverToClientRecordID:(id)id inDatabase:(id)database error:(id *)error;
- (id)clientToServerRecordZoneID:(id)id inDatabase:(id)database error:(id *)error;
- (id)serverToClientRecordZoneID:(id)id inDatabase:(id)database error:(id *)error;
- (id)clientToServerRecord:(id)record inDatabase:(id)database error:(id *)error;
- (id)serverToClientRecord:(id)record inDatabase:(id)database error:(id *)error;
- (id)clientToServerRecordZone:(id)zone inDatabase:(id)database error:(id *)error;
- (id)serverToClientRecordZone:(id)zone inDatabase:(id)database error:(id *)error;
- (id)clientToServerRecordType:(id)type withRecordID:(id)id inDatabase:(id)database error:(id *)error;
- (id)serverToClientRecordType:(id)type withRecordID:(id)id inDatabase:(id)database error:(id *)error;
@end

#endif /* FCCKDatabaseRecordMiddleware_Protocol_h */