//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXEventHandInfoRepresentation_h
#define AXEventHandInfoRepresentation_h
@import Foundation;

#include "AXEventRepresentationDescription-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface AXEventHandInfoRepresentation : NSObject<AXEventRepresentationDescription, NSSecureCoding, NSCopying>

@property (nonatomic) unsigned char swipe;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) unsigned short initialFingerCount;
@property (nonatomic) unsigned short currentFingerCount;
@property (nonatomic) unsigned short lifetimeFingerCount;
@property (retain, nonatomic) NSArray *paths;
@property (nonatomic) unsigned char systemGesturePossible;
@property (nonatomic) unsigned int handIdentity;
@property (nonatomic) unsigned int handIndex;
@property (nonatomic) struct CGPoint { double x0; double x1; } handPosition;
@property (readonly, nonatomic) BOOL isStylus;
@property (nonatomic) unsigned int handEventMask;
@property (nonatomic) unsigned int additionalHandEventFlagsForGeneratedEvents;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)accessibilityEventRepresentationTabularDescription;
@end

#endif /* AXEventHandInfoRepresentation_h */