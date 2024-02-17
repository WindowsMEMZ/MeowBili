//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBColor_Protocol_h
#define _SFPBColor_Protocol_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBAppColor.h"
#include "_SFPBCalendarColor.h"
#include "_SFPBColor-Protocol.h"
#include "_SFPBColor.h"
#include "_SFPBGradientColor.h"
#include "_SFPBGraphicalFloat.h"
#include "_SFPBImageDerivedColor.h"
#include "_SFPBWeatherColor.h"

@class NSData, NSString;

@protocol _SFPBColor <NSObject>

@property (retain, nonatomic) _SFPBGraphicalFloat *redComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *greenComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *blueComponent;
@property (retain, nonatomic) _SFPBGraphicalFloat *alphaComponent;
@property (nonatomic) int colorTintStyle;
@property (retain, nonatomic) _SFPBColor *darkModeColor;
@property (retain, nonatomic) _SFPBCalendarColor *calendarColor;
@property (retain, nonatomic) _SFPBAppColor *appColor;
@property (retain, nonatomic) _SFPBImageDerivedColor *imageDerivedColor;
@property (retain, nonatomic) _SFPBGradientColor *gradientColor;
@property (retain, nonatomic) _SFPBWeatherColor *weatherColor;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichValue;

/* instance methods */
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBColor_Protocol_h */