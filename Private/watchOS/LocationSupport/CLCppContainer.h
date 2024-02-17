//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLCppContainer_h
#define CLCppContainer_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface CLCppContainer : NSObject<NSSecureCoding>

@property (nonatomic) const void * cppObjectPtr;
@property (copy, nonatomic) id /* block */ destructor;
@property (readonly, nonatomic) unsigned long long binaryVersion;
@property (readonly, nonatomic) unsigned long long sizeOfType;

/* class methods */
+ (id)containerWithObject:(void *)object destructor:(id /* block */)destructor binaryVersion:(unsigned long long)version typeSize:(unsigned long long)size;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithObject:(void *)object destructor:(id /* block */)destructor binaryVersion:(unsigned long long)version typeSize:(unsigned long long)size;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* CLCppContainer_h */