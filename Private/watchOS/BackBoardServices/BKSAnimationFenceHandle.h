//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSAnimationFenceHandle_h
#define BKSAnimationFenceHandle_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "BSXPCCoding-Protocol.h"
#include "BSXPCSecureCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class CAFenceHandle, NSString;

@interface BKSAnimationFenceHandle : NSObject<BSXPCCoding, BSXPCSecureCoding, NSSecureCoding, NSCopying, BSInvalidatable> {
  /* instance variables */
  CAFenceHandle *_caFence;
}

@property (readonly, nonatomic) unsigned long long fenceName;
@property (readonly, nonatomic) BOOL usable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)newFenceHandleForContext:(id)context;
+ (id)newFenceHandleForCAFenceHandle:(id)handle;
+ (BOOL)supportsBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)_initWithCAFenceHandle:(id)handle;
- (void)dealloc;
- (BOOL)isUsable;
- (void)invalidate;
- (unsigned int)CAPort;
- (id)CAFenceHandle;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)initWithBSXPCCoder:(id)bsxpccoder;
- (void)encodeWithBSXPCCoder:(id)bsxpccoder;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* BKSAnimationFenceHandle_h */