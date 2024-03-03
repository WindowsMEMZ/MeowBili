//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKLabelNavRoadLabel_h
#define VKLabelNavRoadLabel_h
@import Foundation;

#include "VKLabelNavFeature-Protocol.h"

@class NSString;
@protocol struct Mercator2<double> { double x0[2] }, {Mercator2<double>="_e"[2d]}, {shared_ptr<md::NavLabel>="__ptr_"^{NavLabel}"__cntrl_"^{__shared_weak_count}};

@interface VKLabelNavRoadLabel : NSObject {
  /* instance variables */
  int _navLabelType;
  NSString *_displayGroup;
  BOOL _isPicked;
}

@property (weak, nonatomic) NSObject<VKLabelNavFeature> *navFeature;
@property (readonly, nonatomic) const void * label;
@property (nonatomic) unsigned char alignment;
@property (nonatomic) float desiredOffsetDistance;
@property (nonatomic) unsigned int displayID;
@property (readonly, nonatomic) BOOL isShieldLabel;
@property (readonly, nonatomic) BOOL isRoadLabel;
@property (readonly, nonatomic) BOOL isJunctionLabel;
@property (readonly, nonatomic) BOOL isManeuverLabel;
@property (readonly, nonatomic) BOOL isEtaLabel;
@property (readonly, nonatomic) BOOL isTrafficCameraLabel;
@property (nonatomic) unsigned short renderOrder;
@property (nonatomic) struct Mercator2<double> { double x0[2] } mercatorPoint;

/* instance methods */
- (id)initWithNavFeature:(id)feature label:(const void *)label navLabelType:(int)type;
- (void)layoutWithNavContext:(struct NavContext { undefined * * x0; struct LabelManager * x1; struct MapNavLabeler * x2; struct LabelLayoutContext * x3; struct LabelNavLayoutContext * x4; } *)context;
- (void)layoutForStagingWithNavContext:(struct NavContext { undefined * * x0; struct LabelManager * x1; struct MapNavLabeler * x2; struct LabelLayoutContext * x3; struct LabelNavLayoutContext * x4; } *)context;
- (id)displayGroup;
- (id)description;
@end

#endif /* VKLabelNavRoadLabel_h */