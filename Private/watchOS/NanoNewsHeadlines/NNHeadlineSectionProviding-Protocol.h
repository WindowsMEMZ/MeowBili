//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NNHeadlineSectionProviding_Protocol_h
#define NNHeadlineSectionProviding_Protocol_h
@import Foundation;

@protocol NNHeadlineSectionProviding <NSObject, NSSecureCoding>

@property (readonly, nonatomic) NSString *br_identifier;
@property (readonly, nonatomic) NSString *br_name;
@property (readonly, nonatomic) NSArray *br_headlines;

@end

#endif /* NNHeadlineSectionProviding_Protocol_h */