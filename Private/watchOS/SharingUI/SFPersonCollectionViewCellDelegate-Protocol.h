//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFPersonCollectionViewCellDelegate_Protocol_h
#define SFPersonCollectionViewCellDelegate_Protocol_h
@import Foundation;

@protocol SFPersonCollectionViewCellDelegate <NSObject>
/* instance methods */
- (void)personCollectionViewCellDidStartTransfer:(id)transfer;
- (void)personCollectionViewCellDidTerminateTransfer:(id)transfer;
- (void)personCollectionViewCellDidFinishTransfer:(id)transfer;
@end

#endif /* SFPersonCollectionViewCellDelegate_Protocol_h */