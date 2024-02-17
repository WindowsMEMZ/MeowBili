//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFColorPalette_h
#define HFColorPalette_h
@import Foundation;

#include "NAEquatable-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSArray, NSString;

@interface HFColorPalette : NSObject<NAEquatable, NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSArray *rawColors;
@property (readonly, copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) unsigned long long paletteType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)warmWhiteColor;
+ (id)_defaultRGBColors;
+ (id)_defaultTemperatureColors;
+ (id)_defaultColorsOfType:(unsigned long long)type;
+ (id)defaultColorPaletteOfType:(unsigned long long)type;

/* instance methods */
- (id)initWithColors:(id)colors type:(unsigned long long)type;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)subscript;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)initWithSerializedRepresentation:(id)representation type:(unsigned long long)type;
- (id)serializedRepresentation;
- (BOOL)_isNaturalLightPalette;
- (id)colorPaletteByAdjustingForColorProfile:(id)profile;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HFColorPalette_h */