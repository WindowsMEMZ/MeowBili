//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SHSheetSessionDelegate_Protocol_h
#define SHSheetSessionDelegate_Protocol_h
@import Foundation;

@protocol SHSheetSessionDelegate <NSObject>
/* instance methods */
- (void)sessionConfigurationDidChangeForSession:(id)session;
- (void)showOptionsDidChangeForSession:(id)session;
- (void)headerMetadataDidChangeForSession:(id)session;
- (void)isCollaborativeDidChangeForSession:(id)session;
- (void)collaborationFooterViewModelDidChangeForSession:(id)session;
- (id)collaborationSharingResultForActivity:(id)activity;
- (id)collaborationServiceForSession:(id)session;
- (void)session:(id)session didChangeMetadata:(id)metadata;
@end

#endif /* SHSheetSessionDelegate_Protocol_h */