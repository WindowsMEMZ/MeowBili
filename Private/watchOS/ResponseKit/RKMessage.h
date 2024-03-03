//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKMessage_h
#define RKMessage_h
@import Foundation;

#include "RKText.h"

@class NSDate, NSString, NSUUID;

@interface RKMessage : RKText

@property (readonly, copy) NSString *title;
@property (readonly, copy) NSUUID *senderUUID;
@property (readonly, copy) NSDate *dateSent;
@property (readonly) unsigned long long position;

/* instance methods */
- (id)initWithString:(id)string title:(id)title languageIdentifier:(id)identifier senderUUID:(id)uuid dateSent:(id)sent position:(unsigned long long)position;
- (void)annotateRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range type:(unsigned long long)type field:(unsigned long long)field;
@end

#endif /* RKMessage_h */