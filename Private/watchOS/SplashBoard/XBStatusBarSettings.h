//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 297.1.0.0.0
//
#ifndef XBStatusBarSettings_h
#define XBStatusBarSettings_h
@import Foundation;

#include "BSSettingDescriptionProvider-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class BSMutableSettings, NSString;

@interface XBStatusBarSettings : NSObject<BSSettingDescriptionProvider, NSCopying, NSMutableCopying, NSSecureCoding> {
  /* instance variables */
  BSMutableSettings *_settings;
}

@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) long long style;
@property (readonly, nonatomic) BOOL backgroundActivityEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)_initWithBSSettings:(id)bssettings;
- (void)dealloc;
- (BOOL)isHidden;
- (BOOL)isBackgroundActivityEnabled;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* XBStatusBarSettings_h */