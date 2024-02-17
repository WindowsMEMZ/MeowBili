//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTTreatmentProfile_h
#define MTTreatmentProfile_h
@import Foundation;

@class NSArray;

@interface MTTreatmentProfile : NSObject

@property (retain, nonatomic) NSArray *treatments;

/* class methods */
+ (id)treatmentProfileWithConfigData:(id)data;

/* instance methods */
- (id)initWithConfigDictionary:(id)dictionary;
- (id)performTreatments:(id)treatments;
@end

#endif /* MTTreatmentProfile_h */