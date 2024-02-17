//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBDescriptorProto_h
#define TRIPBDescriptorProto_h
@import Foundation;

#include "TRIPBMessage.h"
#include "TRIPBMessageOptions.h"

@class NSMutableArray, NSString;

@interface TRIPBDescriptorProto : TRIPBMessage

@property (copy, @dynamic, nonatomic) NSString *name;
@property (@dynamic, nonatomic) BOOL hasName;
@property (retain, @dynamic, nonatomic) NSMutableArray *fieldArray;
@property (readonly, @dynamic, nonatomic) unsigned long long fieldArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *extensionArray;
@property (readonly, @dynamic, nonatomic) unsigned long long extensionArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *nestedTypeArray;
@property (readonly, @dynamic, nonatomic) unsigned long long nestedTypeArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *enumTypeArray;
@property (readonly, @dynamic, nonatomic) unsigned long long enumTypeArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *extensionRangeArray;
@property (readonly, @dynamic, nonatomic) unsigned long long extensionRangeArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *oneofDeclArray;
@property (readonly, @dynamic, nonatomic) unsigned long long oneofDeclArray_Count;
@property (retain, @dynamic, nonatomic) TRIPBMessageOptions *options;
@property (@dynamic, nonatomic) BOOL hasOptions;
@property (retain, @dynamic, nonatomic) NSMutableArray *reservedRangeArray;
@property (readonly, @dynamic, nonatomic) unsigned long long reservedRangeArray_Count;
@property (retain, @dynamic, nonatomic) NSMutableArray *reservedNameArray;
@property (readonly, @dynamic, nonatomic) unsigned long long reservedNameArray_Count;

/* class methods */
+ (id)descriptor;
@end

#endif /* TRIPBDescriptorProto_h */