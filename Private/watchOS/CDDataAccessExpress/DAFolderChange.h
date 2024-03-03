//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1004.0.0.0.0
//
#ifndef DAFolderChange_h
#define DAFolderChange_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;
@protocol DAFolderChangeConsumer;

@interface DAFolderChange : NSObject<NSSecureCoding>

@property (nonatomic) unsigned long long changeType;
@property (retain, nonatomic) NSString *folderId;
@property (retain, nonatomic) NSString *parentFolderId;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) long long dataclass;
@property (nonatomic) unsigned int taskId;
@property (nonatomic) BOOL renameOnCollision;
@property (weak, nonatomic) NSObject<DAFolderChangeConsumer> *consumer;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initFolderChangeWithChangeType:(unsigned long long)type folderId:(id)id parentFolderId:(id)id displayName:(id)name dataclass:(long long)dataclass consumer:(id)consumer;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* DAFolderChange_h */