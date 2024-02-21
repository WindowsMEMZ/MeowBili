//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef IPAppCustomContactNameMetaContent_h
#define IPAppCustomContactNameMetaContent_h
@import Foundation;

#include "IPItemMessage.h"
#include "IPItemMetaContentMessage-Protocol.h"

@class NSString;

@interface IPAppCustomContactNameMetaContent : IPItemMessage<IPItemMetaContentMessage>

@property (readonly, nonatomic) NSString *sourceIdentifier;

/* class methods */
+ (unsigned short)itemIdentifier;
+ (unsigned short)messageIdentifier;
+ (id)descriptionForTypeIdentifier:(unsigned short)identifier;

/* instance methods */
- (id)initWithSourceIdentifier:(id)identifier error:(id *)error;
- (BOOL)initializeFieldValuesFromData:(id)data error:(id *)error;
- (void)enumerateFieldsUsingBlock:(id /* block */)block;
@end

#endif /* IPAppCustomContactNameMetaContent_h */