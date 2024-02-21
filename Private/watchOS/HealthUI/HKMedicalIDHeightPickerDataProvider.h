//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicalIDHeightPickerDataProvider_h
#define HKMedicalIDHeightPickerDataProvider_h
@import Foundation;

@interface HKMedicalIDHeightPickerDataProvider : NSObject
/* class methods */
+ (double)defaultCentimeterValue;
+ (long long)numberOfRowsInComponent:(long long)component;
+ (id)titleForRow:(long long)row inComponent:(long long)component;
+ (long long)heightValueForRow:(long long)row inComponent:(long long)component;
@end

#endif /* HKMedicalIDHeightPickerDataProvider_h */