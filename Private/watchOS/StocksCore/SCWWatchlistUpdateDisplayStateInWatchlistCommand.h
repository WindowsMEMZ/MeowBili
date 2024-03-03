//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCWWatchlistUpdateDisplayStateInWatchlistCommand_h
#define SCWWatchlistUpdateDisplayStateInWatchlistCommand_h
@import Foundation;

#include "SCWZoneCommand-Protocol.h"

@class NSNumber, NSString;

@interface SCWWatchlistUpdateDisplayStateInWatchlistCommand : NSObject<SCWZoneCommand>

@property (readonly, copy, nonatomic) NSString *watchlistIdentifier;
@property (readonly, copy, nonatomic) NSNumber *displayState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithWatchlistIdentifier:(id)identifier displayState:(id)state;
- (void)executeWithZone:(id)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SCWWatchlistUpdateDisplayStateInWatchlistCommand_h */