//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFSUPFunctionProvider_h
#define AFSUPFunctionProvider_h
@import Foundation;

#include "AFSpeakableUtteranceParser.h"
#include "AFSpeakableNamespaceProvider-Protocol.h"

@class NSDateFormatter, NSString;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser<AFSpeakableNamespaceProvider> {
  /* instance variables */
  NSDateFormatter *_dateFormatter;
  NSDateFormatter *_timeFormatter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_shouldAutomaticallyProvideFunctions;

/* instance methods */
- (id)init;
- (id)initWithLocale:(id)locale;
- (id)_dateFormattedWithFormatter:(id)formatter arguments:(id)arguments;
- (id)_currentTime:(id)time;
- (id)_currentLongDate:(id)date;
- (id)_currentShortDate:(id)date;
- (id)_currentWeekday:(id)weekday;
- (id)_tempInWeatherUnits:(id)units;
- (id)_lowercaseString:(id)string;
- (id)_deviceModel;
- (id)_meCard;
- (id)_userFullName:(id)name;
- (id)_userFirstName:(id)name;
- (id)_userMiddleName:(id)name;
- (id)_userLastName:(id)name;
- (id)_userNickName:(id)name;
- (id)_meCardIdentifier:(id)identifier;
- (id)_siriUsageDescription:(id)description;
- (id)_speechRecognitionUsageDescription:(id)description;
- (id)_contextRoomName:(id)name;
- (id)_contextDeviceName:(id)name;
- (id)_peerInfoForContextIdentifier:(id)identifier;
- (id)_callFunction:(id)function withArguments:(id)arguments;
- (id)stringForExpression:(id)expression;
- (id)stringForExpression:(id)expression containsPrivacySensitiveContents:(BOOL *)contents;
@end

#endif /* AFSUPFunctionProvider_h */