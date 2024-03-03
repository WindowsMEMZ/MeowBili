//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFAnchoredSearchAnchorCollection_h
#define EMFAnchoredSearchAnchorCollection_h
@import Foundation;

@class NSArray, NSString;

@interface EMFAnchoredSearchAnchorCollection : NSObject

@property (copy, nonatomic) NSString *localeIdentifier;
@property (copy, nonatomic) NSArray *leftHandAnchors;
@property (copy, nonatomic) NSArray *rightHandAnchors;

/* instance methods */
- (id)initWithLocaleIdentifier:(id)identifier leftHandAnchors:(id)anchors rightHandAnchors:(id)anchors;
- (id)initWithLocaleIdentifier:(id)identifier;
- (id)description;
@end

#endif /* EMFAnchoredSearchAnchorCollection_h */