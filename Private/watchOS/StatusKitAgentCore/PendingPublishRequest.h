//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef PendingPublishRequest_h
#define PendingPublishRequest_h
@import Foundation;

#include "NSManagedObject.h"

@class NSData, NSDate, NSString;

@interface PendingPublishRequest : NSManagedObject

@property (copy, @dynamic, nonatomic) NSDate *dateCreated;
@property (retain, @dynamic, nonatomic) NSData *payloadData;
@property (@dynamic, nonatomic) int retryCount;
@property (copy, @dynamic, nonatomic) NSString *statusTypeIdentifier;
@property (copy, @dynamic, nonatomic) NSString *statusUniqueIdentifier;

/* class methods */
+ (id)fetchRequest;
+ (id)sortDescriptorForDateCreatedAscending:(BOOL)ascending;
+ (id)predicateForStatusTypeIdentifier:(id)identifier;
+ (id)predicateForStatusUniqueIdentifier:(id)identifier;
+ (id)statusTypeIdentifierKeyPath;
+ (id)dateCreatedKeyPath;
+ (id)statusUniqueIdentifierKeyPath;
@end

#endif /* PendingPublishRequest_h */