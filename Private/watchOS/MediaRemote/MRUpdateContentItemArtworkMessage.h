//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRUpdateContentItemArtworkMessage_h
#define MRUpdateContentItemArtworkMessage_h
@import Foundation;

#include "MRProtocolMessage.h"
#include "MRPlayerPath.h"

@class NSArray;

@interface MRUpdateContentItemArtworkMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSArray *contentItems;

/* instance methods */
- (id)initWithContentItems:(id)items forPlayerPath:(id)path encoding:(long long)encoding;
- (unsigned long long)type;
@end

#endif /* MRUpdateContentItemArtworkMessage_h */