//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICStoreDialogResponseButtonAction_h
#define ICStoreDialogResponseButtonAction_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface ICStoreDialogResponseButtonAction : NSObject<NSCopying>

@property (readonly, copy, nonatomic) NSDictionary *actionDictionary;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *buyParams;
@property (readonly, copy, nonatomic) NSString *itemName;
@property (readonly, copy, nonatomic) NSString *subtarget;
@property (readonly, copy, nonatomic) NSString *URLString;

/* instance methods */
- (id)initWithResponseButtonActionDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* ICStoreDialogResponseButtonAction_h */