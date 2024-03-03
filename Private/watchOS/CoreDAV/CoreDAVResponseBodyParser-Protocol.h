//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1221.1.1.2.0
//
#ifndef CoreDAVResponseBodyParser_Protocol_h
#define CoreDAVResponseBodyParser_Protocol_h
@import Foundation;

@protocol CoreDAVResponseBodyParser <NSObject>

@property (readonly) NSError *parserError;

/* instance methods */
- (BOOL)processData:(id)data forTask:(id)task;
@end

#endif /* CoreDAVResponseBodyParser_Protocol_h */