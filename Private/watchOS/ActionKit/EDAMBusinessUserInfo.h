//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMBusinessUserInfo_h
#define EDAMBusinessUserInfo_h
@import Foundation;

#include "FATObject.h"

@class NSNumber, NSString;

@interface EDAMBusinessUserInfo : FATObject

@property (retain, nonatomic) NSNumber *businessId;
@property (retain, nonatomic) NSString *businessName;
@property (retain, nonatomic) NSNumber *role;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *updated;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMBusinessUserInfo_h */