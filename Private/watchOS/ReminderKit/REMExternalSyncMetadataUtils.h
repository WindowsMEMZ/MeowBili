//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef REMExternalSyncMetadataUtils_h
#define REMExternalSyncMetadataUtils_h
@import Foundation;

@interface REMExternalSyncMetadataUtils : NSObject
/* class methods */
+ (id)encodeExternalIdentifierForMarkedForDeletionObject:(id)object;
+ (id)decodeExternalIdentifierForMarkedForDeletionObject:(id)object;
+ (BOOL)shouldUseExternalIdentifierAsDeletionKeyWithAccountType:(long long)type;
@end

#endif /* REMExternalSyncMetadataUtils_h */