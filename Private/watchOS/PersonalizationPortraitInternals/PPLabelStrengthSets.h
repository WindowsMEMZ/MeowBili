//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPLabelStrengthSets_h
#define PPLabelStrengthSets_h
@import Foundation;

@class NSSet;

@interface PPLabelStrengthSets : NSObject

@property (readonly, nonatomic) NSSet *weak;
@property (readonly, nonatomic) NSSet *strong;

/* class methods */
+ (id)labelStrengthSetsWithWeakSet:(id)set strongSet:(id)set;

/* instance methods */
- (id)initWithWeakSet:(id)set strongSet:(id)set;
@end

#endif /* PPLabelStrengthSets_h */