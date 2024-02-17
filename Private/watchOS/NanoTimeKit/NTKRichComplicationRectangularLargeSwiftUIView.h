//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKRichComplicationRectangularLargeSwiftUIView_h
#define NTKRichComplicationRectangularLargeSwiftUIView_h
@import Foundation;

#include "NTKRichComplicationRectangularHeadlineLargeBodyView.h"

@class CDComplicationHostingView;

@interface NTKRichComplicationRectangularLargeSwiftUIView : NTKRichComplicationRectangularHeadlineLargeBodyView {
  /* instance variables */
  CDComplicationHostingView *_swiftUIView;
}

/* class methods */
+ (BOOL)handlesComplicationTemplate:(id)template;
+ (BOOL)supportsComplicationFamily:(long long)family;

/* instance methods */
- (id)body;
- (void)setPaused:(BOOL)paused;
- (void)_handleTemplate:(id)template reason:(long long)reason;
- (id)headerTextProviderFromTemplate:(id)template;
- (void)_editingDidEnd;
- (void)transitionToMonochromeWithFraction:(double)fraction;
- (void)updateMonochromeColor;
@end

#endif /* NTKRichComplicationRectangularLargeSwiftUIView_h */