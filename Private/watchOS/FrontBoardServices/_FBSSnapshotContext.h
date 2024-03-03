//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef _FBSSnapshotContext_h
#define _FBSSnapshotContext_h
@import Foundation;

#include "FBSDisplayConfiguration.h"
#include "NSCopying-Protocol.h"

@class NSOrderedSet;

@interface _FBSSnapshotContext : NSObject<NSCopying>

@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) NSOrderedSet *layers;
@property (nonatomic) BOOL opaque;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x0; double x1; } snapshotSize;
@property (nonatomic) BOOL allowsProtectedContent;

/* instance methods */
- (id)initWithDisplayConfiguration:(id)configuration layer:(id)layer;
- (id)initWithDisplayConfiguration:(id)configuration layers:(id)layers;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isOpaque;
@end

#endif /* _FBSSnapshotContext_h */