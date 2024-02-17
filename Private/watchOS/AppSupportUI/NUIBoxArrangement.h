//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 43.4.0.0.0
//
#ifndef NUIBoxArrangement_h
#define NUIBoxArrangement_h
@import Foundation;

#include "NUIArrangementContainer-Protocol.h"
#include "_NUIBoxArrangementContainer-Protocol.h"

@class NSString;
@protocol NUIBoxArrangementDataSource, {_NUIBoxArrangement="container"@"<_NUIBoxArrangementContainer>""horzDist"q"vertDist"q"hasValidMeasurement"B"cells"{vector<_NUIBoxArrangementCell, std::allocator<_NUIBoxArrangementCell>>="__begin_"^{_NUIBoxArrangementCell}"__end_"^{_NUIBoxArrangementCell}"__end_cap_"{__compressed_pair<_NUIBoxArrangementCell *, std::allocator<_NUIBoxArrangementCell>>="__value_"^{_NUIBoxArrangementCell}}}"measureSize"{CGSize="width"d"height"d}"viewFrames"{vector<CGRect, std::allocator<CGRect>>="__begin_"^{CGRect}"__end_"^{CGRect}"__end_cap_"{__compressed_pair<CGRect *, std::allocator<CGRect>>="__value_"^{CGRect}}}"maxBaseLinePair"{?="baseLineFromTop"d"baseLineFromBottom"d}};

@interface NUIBoxArrangement : NSObject<_NUIBoxArrangementContainer> {
  /* instance variables */
  struct _NUIBoxArrangement { <_NUIBoxArrangementContainer> *container; long long horzDist; long long vertDist; BOOL hasValidMeasurement; struct vector<_NUIBoxArrangementCell, std::allocator<_NUIBoxArrangementCell>> { struct _NUIBoxArrangementCell *__begin_; struct _NUIBoxArrangementCell *__end_; struct __compressed_pair<_NUIBoxArrangementCell *, std::allocator<_NUIBoxArrangementCell>> { struct _NUIBoxArrangementCell *__value_; } __end_cap_; } cells; struct CGSize { double width; double height; } measureSize; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; struct { double baseLineFromTop; double baseLineFromBottom; } maxBaseLinePair; } _arrangement;
  struct { unsigned int x :1 containerDirection; } _flags;
  double _scale;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
}

@property (readonly, weak, nonatomic) NSObject<NUIArrangementContainer> *container;
@property (readonly, weak, nonatomic) NSObject<NUIBoxArrangementDataSource> *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContainer:(id)container dataSource:(id)source;
- (void)dealloc;
- (void)reloadData;
- (void)populateBoxArrangementCells:(void *)cells;
- (struct CGSize { double x0; double x1; })layoutSizeFittingSize:(struct CGSize { double x0; double x1; })size;
- (void)positionItemsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds block:(id /* block */)block;
- (struct CGSize { double x0; double x1; })contentLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size forArrangedSubview:(id)subview;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrameForArrangedSubview:(id)subview withProposedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* NUIBoxArrangement_h */