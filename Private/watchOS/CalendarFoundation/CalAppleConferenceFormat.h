//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalAppleConferenceFormat_h
#define CalAppleConferenceFormat_h
@import Foundation;

#include "CalConferencePersistenceFormat-Protocol.h"

@interface CalAppleConferenceFormat : NSObject<CalConferencePersistenceFormat>
/* class methods */
+ (id)calBundle;
+ (id)calConferenceSerializationHandle;
+ (void)_parseURL:(id)url state:(id)state;
+ (void)_parseBlockTitle:(id)title state:(id)state;
+ (void)_parseConferenceTitle:(id)title state:(id)state;
+ (void)_parseJoinMethodTitleAndFeatures:(id)features state:(id)state;
+ (id)_buildDeserializationResultFromState:(id)state;
+ (BOOL)_line:(id)_line matchesRegex:(id)regex outFoundRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
+ (id)_joinMethodTitleAndFeaturesRegex;
+ (id)_conferenceTitleRegex;
+ (id)_startDelimiterRegex;
+ (id)_detailsDelimiterRegex;

/* instance methods */
- (id)serializeConference:(id)conference serializationBlockTitle:(id)title;
- (id)deserializeConferences:(id)conferences;
- (BOOL)supportsSerializingConferenceWithSource:(unsigned long long)source;
@end

#endif /* CalAppleConferenceFormat_h */