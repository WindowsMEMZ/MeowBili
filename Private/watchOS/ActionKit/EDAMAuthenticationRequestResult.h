//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMAuthenticationRequestResult_h
#define EDAMAuthenticationRequestResult_h
@import Foundation;

#include "FATObject.h"

@class NSNumber, NSString;

@interface EDAMAuthenticationRequestResult : FATObject

@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *userEmail;
@property (retain, nonatomic) NSNumber *result;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMAuthenticationRequestResult_h */