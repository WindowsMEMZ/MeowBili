//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassIngestionPayload_h
#define PKPassIngestionPayload_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKFileDescriptorXPCContainer.h"
#include "PKPass.h"
#include "PKPassIngestionProperties.h"

@class NSData;

@interface PKPassIngestionPayload : NSObject<NSSecureCoding> {
  /* instance variables */
  NSData *_data;
  PKFileDescriptorXPCContainer *_fd;
  PKPass *_pass;
}

@property (retain, nonatomic) PKPassIngestionProperties *properties;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)initWithFileDescriptor:(int)descriptor;
- (id)initWithPass:(id)pass;
- (id)_initWithData:(id)data fileDescriptor:(id)descriptor pass:(id)pass;
- (void)dealloc;
- (id)createPass;
- (void)invalidate;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKPassIngestionPayload_h */