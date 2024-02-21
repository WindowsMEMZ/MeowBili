//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFLibraryRecord_h
#define WFLibraryRecord_h
@import Foundation;

#include "WFRecord.h"

@class NSData, NSString;

@interface WFLibraryRecord : WFRecord

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSData *data;
@property (nonatomic) long long lastSyncedHash;
@property (copy, nonatomic) NSData *cloudKitRecordMetadata;

/* instance methods */
@end

#endif /* WFLibraryRecord_h */