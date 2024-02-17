//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKMessageTextContainer_h
#define NNMKMessageTextContainer_h
@import Foundation;

#include "NNMKAttachmentRenderingViewContainer-Protocol.h"
#include "NNMKMessageContentTextView.h"
#include "NNMKMessageContentTextViewDelegate-Protocol.h"
#include "NNMKMessageViewContainer-Protocol.h"

@class NSString;
@protocol NNMKMessageViewContainerDelegate;

@interface NNMKMessageTextContainer : NSObject<NNMKMessageContentTextViewDelegate, NNMKMessageViewContainer, NNMKAttachmentRenderingViewContainer>

@property (weak, nonatomic) NSObject<NNMKMessageViewContainerDelegate> *delegate;
@property (retain, nonatomic) NNMKMessageContentTextView *contentView;
@property (nonatomic) long long notLoadedImageAttachments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasCollapsedContent;

/* instance methods */
- (id)initWithScrollEnabled:(BOOL)enabled;
- (id)rootView;
- (id)scrollView;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)setHorizontalLayoutMargin:(double)margin;
- (void)updateWithMessage:(id)message content:(id)content forcingLoadImages:(BOOL)images;
- (void)cleanupForReuse;
- (void)notifyImageAttachmentLoadedForContentId:(id)id;
- (void)updateAttachmentWithContentId:(id)id viewModel:(id)model;
- (void)notifyContentDownloadFailed;
- (void)showCollapsedContent;
- (void)prepareForDisplay;
- (void)_notifyIfDidFinishRendering;
- (void)messageContentView:(id)view userTappedUnhandledURL:(id)url;
- (void)messageContentViewWillRenderContent:(id)content;
- (void)messageContentViewDidRenderContent:(id)content;
- (void)messageContentViewContentSizeDidChange:(id)change;
- (void)didTapAttachmentViewWithContentId:(id)id;
@end

#endif /* NNMKMessageTextContainer_h */