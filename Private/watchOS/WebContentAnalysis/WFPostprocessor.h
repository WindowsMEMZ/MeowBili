//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.0.0.0
//
#ifndef WFPostprocessor_h
#define WFPostprocessor_h
@import Foundation;

@interface WFPostprocessor : NSObject
/* class methods */
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfFirstHTMLTag:(id)htmltag searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
+ (id)postprocessPlainTextWebPage:(id)page;
+ (id)lightweightStripHTMLTagsForLine:(id)line;
+ (id)lightweightStripHTMLTags:(id)htmltags;
+ (id)normalizeStrippedHTML:(id)html;
+ (id)adultWebSiteTagging:(id)tagging;
@end

#endif /* WFPostprocessor_h */