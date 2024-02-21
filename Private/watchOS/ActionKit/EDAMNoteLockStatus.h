//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMNoteLockStatus_h
#define EDAMNoteLockStatus_h
@import Foundation;

#include "FATObject.h"

@class NSArray, NSDictionary, NSNumber;

@interface EDAMNoteLockStatus : FATObject

@property (retain, nonatomic) NSNumber *noteUpdateSequenceNumber;
@property (retain, nonatomic) NSNumber *lockHolderUserId;
@property (retain, nonatomic) NSNumber *lockRenewBy;
@property (retain, nonatomic) NSArray *viewingUserIds;
@property (retain, nonatomic) NSNumber *viewIdleExpiration;
@property (retain, nonatomic) NSDictionary *unknownUsers;
@property (retain, nonatomic) NSNumber *currentTime;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMNoteLockStatus_h */