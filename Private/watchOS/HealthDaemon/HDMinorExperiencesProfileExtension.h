//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDMinorExperiencesProfileExtension_h
#define HDMinorExperiencesProfileExtension_h
@import Foundation;

#include "HDFeatureAvailabilityExtensionProvider-Protocol.h"

@class NSArray, NSString;

@interface HDMinorExperiencesProfileExtension : NSObject<HDFeatureAvailabilityExtensionProvider> {
  /* instance variables */
  NSArray *_minorExperiences;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)identifier;
@end

#endif /* HDMinorExperiencesProfileExtension_h */