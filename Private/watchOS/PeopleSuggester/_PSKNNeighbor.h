//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSKNNeighbor_h
#define _PSKNNeighbor_h
@import Foundation;

@class NSArray;

@interface _PSKNNeighbor : NSObject

@property (nonatomic) double distance;
@property (retain, nonatomic) NSArray *nodeData;

/* instance methods */
- (id)initWithNodeData:(id)data distance:(double)distance;
@end

#endif /* _PSKNNeighbor_h */