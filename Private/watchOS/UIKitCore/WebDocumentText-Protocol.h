//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef WebDocumentText_Protocol_h
#define WebDocumentText_Protocol_h
@import Foundation;

@protocol WebDocumentText <NSObject>
/* instance methods */
- (BOOL)supportsTextEncoding;
- (id)string;
- (id)selectedString;
- (void)selectAll;
- (void)deselectAll;
@end

#endif /* WebDocumentText_Protocol_h */