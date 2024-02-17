//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3628.0.0.0.0
//
#ifndef CNVCardParsedResultBuilder_Protocol_h
#define CNVCardParsedResultBuilder_Protocol_h
@import Foundation;

@protocol CNVCardParsedResultBuilder <NSObject>
/* instance methods */
- (id)build;
- (BOOL)canSetValueForProperty:(id)property;
- (BOOL)setValue:(id)value forProperty:(id)property;
- (BOOL)setValues:(id)values labels:(id)labels isPrimaries:(id)primaries forProperty:(id)property;
- (id)valueForProperty:(id)property;
- (BOOL)setImageData:(id)data forReference:(id)reference clipRects:(id)rects;
- (void)setUnknownProperties:(id)properties;
- (id)validCountryCodes;
@end

#endif /* CNVCardParsedResultBuilder_Protocol_h */