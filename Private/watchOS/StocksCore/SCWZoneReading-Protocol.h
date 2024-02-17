//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCWZoneReading_Protocol_h
#define SCWZoneReading_Protocol_h
@import Foundation;

@protocol SCWZoneReading 

@property (readonly, copy, nonatomic) NSArray *allRecords;

/* instance methods */
- (id)recordsOfType:(id)type;
- (id)recordOfType:(id)type;
- (id)recordOfType:(id)type passingTest:(id /* block */)test;
- (id)recordWithName:(id)name;
@end

#endif /* SCWZoneReading_Protocol_h */