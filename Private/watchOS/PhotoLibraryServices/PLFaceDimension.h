//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLFaceDimension_h
#define PLFaceDimension_h
@import Foundation;

@interface PLFaceDimension : NSObject {
  /* instance variables */
  long long _sourceWidth;
  long long _sourceHeight;
  double _centerX;
  double _centerY;
  double _size;
  double _bodyCenterX;
  double _bodyCenterY;
  double _bodyWidth;
  double _bodyHeight;
}

/* instance methods */
- (id)initWithSourceWidth:(long long)width sourceHeight:(long long)height centerX:(double)x centerY:(double)y size:(double)size;
- (id)initWithSourceWidth:(long long)width sourceHeight:(long long)height bodyCenterX:(double)x bodyCenterY:(double)y bodyWidth:(double)width bodyHeight:(double)height;
- (id)initWithSourceWidth:(long long)width sourceHeight:(long long)height centerX:(double)x centerY:(double)y size:(double)size bodyCenterX:(double)x bodyCenterY:(double)y bodyWidth:(double)width bodyHeight:(double)height;
- (id)description;
- (long long)photosFaceRepresentationSourceWidth;
- (long long)photosFaceRepresentationSourceHeight;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationBodyCenterX;
- (double)photosFaceRepresentationBodyCenterY;
- (double)photosFaceRepresentationBodyHeight;
- (double)photosFaceRepresentationBodyWidth;
- (double)photosFaceRepresentationBlurScore;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (long long)photosFaceRepresentationQualityMeasure;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationQuality;
@end

#endif /* PLFaceDimension_h */