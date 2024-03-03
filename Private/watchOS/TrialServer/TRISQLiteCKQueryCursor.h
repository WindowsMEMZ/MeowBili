//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRISQLiteCKQueryCursor_h
#define TRISQLiteCKQueryCursor_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class CKQuery;

@interface TRISQLiteCKQueryCursor : NSObject<NSCopying>

@property (retain, nonatomic) CKQuery *query;
@property (nonatomic) unsigned long long offset;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* TRISQLiteCKQueryCursor_h */