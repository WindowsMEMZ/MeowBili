//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 567.0.0.0.0
//
#ifndef UAPasteboardItem_h
#define UAPasteboardItem_h
@import Foundation;

@class NSArray;

@interface UAPasteboardItem : NSObject

@property (copy, nonatomic) NSArray *types;

/* instance methods */
- (id)init;
- (void)addType:(id)type;
- (id)description;
@end

#endif /* UAPasteboardItem_h */