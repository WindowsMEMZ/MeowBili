//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMSafariHistory_h
#define BMSafariHistory_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMSafariHistory : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *URL;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithURL:(id)url title:(id)title;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSafariHistory_h */