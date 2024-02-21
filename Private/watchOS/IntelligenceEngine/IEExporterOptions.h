//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.31.1.0.0
//
#ifndef IEExporterOptions_h
#define IEExporterOptions_h
@import Foundation;

@class NSString;

@interface IEExporterOptions : NSObject

@property (nonatomic) BOOL transparent;
@property (nonatomic) BOOL lightMode;
@property (nonatomic) BOOL darkMode;
@property (nonatomic) BOOL conditions;
@property (nonatomic) int dotsPerInch;
@property (retain, nonatomic) NSString *highlightResponse;

/* instance methods */
@end

#endif /* IEExporterOptions_h */