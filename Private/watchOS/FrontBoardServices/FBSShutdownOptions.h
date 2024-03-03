//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSShutdownOptions_h
#define FBSShutdownOptions_h
@import Foundation;

#include "BSXPCCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface FBSShutdownOptions : NSObject<BSXPCCoding, NSCopying>

@property (nonatomic) long long LPEMOption;
@property (weak, nonatomic) NSObject<NSCopying> *localContext;
@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic) long long rebootType;
@property (nonatomic) long long source;
@property (readonly, nonatomic) BOOL isShutdown;
@property (readonly, nonatomic) BOOL isReboot;
@property (readonly, nonatomic) BOOL isUserInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithReason:(id)reason;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
@end

#endif /* FBSShutdownOptions_h */