//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAAdjustment_h
#define IPAAdjustment_h
@import Foundation;

#include "IPAAdjustmentVersion.h"
#include "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface IPAAdjustment : NSObject<NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) IPAAdjustmentVersion *version;
@property (retain, nonatomic) NSDictionary *settings;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualToAdjustment:(id)adjustment;
- (id)description;
- (id)debugDescription;
- (id)_debugDescriptionSuffix;
@end

#endif /* IPAAdjustment_h */