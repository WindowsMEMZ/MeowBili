//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDPerModeSettingsMO_h
#define DNDPerModeSettingsMO_h
@import Foundation;

#include "NSManagedObject.h"
#include "DNDFocusModeMO.h"

@class NSString;

@interface DNDPerModeSettingsMO : NSManagedObject

@property (copy, @dynamic, nonatomic) NSString *identifier;
@property (@dynamic, nonatomic) BOOL enabled;
@property (retain, @dynamic, nonatomic) DNDFocusModeMO *mode;

/* class methods */
+ (id)fetchRequest;

/* instance methods */
- (Class)dnd_settingsType;
@end

#endif /* DNDPerModeSettingsMO_h */