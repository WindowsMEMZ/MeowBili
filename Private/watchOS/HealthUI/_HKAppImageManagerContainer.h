//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _HKAppImageManagerContainer_h
#define _HKAppImageManagerContainer_h
@import Foundation;

@class NSMutableData, NSString;

@interface _HKAppImageManagerContainer : NSObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *productType;
@property (retain, nonatomic) NSMutableData *data;

/* instance methods */
@end

#endif /* _HKAppImageManagerContainer_h */