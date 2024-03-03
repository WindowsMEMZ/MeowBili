//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef ECSubjectFormatter_h
#define ECSubjectFormatter_h
@import Foundation;

#include "NSFormatter.h"
#include "EFLoggable-Protocol.h"
#include "_ECSubjectFormatterContext.h"

@class NSString;

@interface ECSubjectFormatter : NSFormatter<EFLoggable>

@property (nonatomic) long long style;
@property (retain, nonatomic) _ECSubjectFormatterContext *replyContext;
@property (retain, nonatomic) _ECSubjectFormatterContext *forwardContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)nonLocalizedReplyPrefix;
+ (id)nonLocalizedForwardPrefix;
+ (id)localizedReplyPrefix;
+ (id)localizedForwardPrefix;
+ (id)subjectStringForDisplayForSubjectString:(id)string;
+ (id)subjectStringForDisplayForSubjectString:(id)string style:(long long)style;
+ (id)subjectStringForDisplayForSubject:(id)subject;
+ (id)subjectStringForDisplayForSubject:(id)subject style:(long long)style;
+ (id)subjectStringForDisplayForMessage:(id)message;
+ (id)subjectStringForDisplayForMessage:(id)message style:(long long)style;
+ (id)_subjectStringForDisplayForObject:(id)object style:(long long)style;

/* instance methods */
- (id)initWithStyle:(long long)style;
- (id)init;
- (id)stringForObjectValue:(id)value;
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;
- (id)_localizedPrefixForSubjectFromSubject:(id)subject;
@end

#endif /* ECSubjectFormatter_h */