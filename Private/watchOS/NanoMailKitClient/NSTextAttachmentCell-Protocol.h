//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NSTextAttachmentCell_Protocol_h
#define NSTextAttachmentCell_Protocol_h
@import Foundation;

@protocol NSTextAttachmentCell <NSObject>
/* instance methods */
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame inView:(id)view characterIndex:(unsigned long long)index layoutManager:(id)manager;
- (struct CGSize { double x0; double x1; })cellSize;
- (struct CGPoint { double x0; double x1; })cellBaselineOffset;
- (void)setAttachment:(id)attachment;
- (id)attachment;
@optional
/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)container proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fragment glyphPosition:(struct CGPoint { double x0; double x1; })position characterIndex:(unsigned long long)index;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame inView:(id)view characterIndex:(unsigned long long)index;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame inView:(id)view;
@end

#endif /* NSTextAttachmentCell_Protocol_h */