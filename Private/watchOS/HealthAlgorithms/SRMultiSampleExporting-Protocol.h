//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 100.2.0.0.0
//
#ifndef SRMultiSampleExporting_Protocol_h
#define SRMultiSampleExporting_Protocol_h
@import Foundation;

@protocol SRMultiSampleExporting <NSObject>
/* instance methods */
- (void)sr_beginMultiSampleStream;
- (id)sr_endMultiSampleStream;
- (id)sr_dictionaryRepresentationWithSample:(id)sample;
@end

#endif /* SRMultiSampleExporting_Protocol_h */