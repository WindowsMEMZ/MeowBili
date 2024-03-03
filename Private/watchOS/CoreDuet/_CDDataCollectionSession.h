//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDDataCollectionSession_h
#define _CDDataCollectionSession_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSString;

@interface _CDDataCollectionSession : NSObject<NSCopying, NSSecureCoding> {
  /* instance variables */
  NSString *_identifier;
  NSData *_salt;
  NSDate *_latestStartDate;
  NSDate *_lastCollectionDate;
  unsigned long long _batchNumber;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* _CDDataCollectionSession_h */