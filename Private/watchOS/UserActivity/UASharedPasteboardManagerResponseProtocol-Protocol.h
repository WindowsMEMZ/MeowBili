//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 567.0.0.0.0
//
#ifndef UASharedPasteboardManagerResponseProtocol_Protocol_h
#define UASharedPasteboardManagerResponseProtocol_Protocol_h
@import Foundation;

@protocol UASharedPasteboardManagerResponseProtocol <NSObject>
/* instance methods */
- (void)writeLocalPasteboardToFile:(id)file itemDir:(id)dir extension:(id)extension withCompletion:(id /* block */)completion;
- (void)writeLocalPasteboardToFile:(id)file itemDir:(id)dir withCompletion:(id /* block */)completion;
- (void)tellClientDebuggingEnabled:(BOOL)enabled logFileHandle:(id)handle;
@end

#endif /* UASharedPasteboardManagerResponseProtocol_Protocol_h */