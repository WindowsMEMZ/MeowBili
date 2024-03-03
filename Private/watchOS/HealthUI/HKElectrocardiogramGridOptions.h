//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKElectrocardiogramGridOptions_h
#define HKElectrocardiogramGridOptions_h
@import Foundation;

@class UIColor;

@interface HKElectrocardiogramGridOptions : NSObject

@property (nonatomic) unsigned long long unitMultiple;
@property (nonatomic) unsigned long long axis;
@property (retain, nonatomic) UIColor *lineColor;
@property (nonatomic) double lineWidth;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } scale;

/* instance methods */
- (id)initWithUnitMultiple:(long long)multiple axis:(unsigned long long)axis lineColor:(id)color lineWidth:(double)width;
@end

#endif /* HKElectrocardiogramGridOptions_h */