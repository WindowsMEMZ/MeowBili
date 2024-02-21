//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CSLClockClientSettingsDiff_h
#define CSLClockClientSettingsDiff_h
@import Foundation;

#include "BSSettingDescriptionProvider-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class BSSettingsDiff, NSString;

@interface CSLClockClientSettingsDiff : NSObject<BSSettingDescriptionProvider, NSSecureCoding>

@property (retain, nonatomic) BSSettingsDiff *diff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)diffFromSettings:(id)settings toSettings:(id)settings;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithDiff:(id)diff;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)settings;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* CSLClockClientSettingsDiff_h */