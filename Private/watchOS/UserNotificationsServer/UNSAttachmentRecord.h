//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef UNSAttachmentRecord_h
#define UNSAttachmentRecord_h
@import Foundation;

@class NSDictionary, NSNumber, NSString, NSURL;

@interface UNSAttachmentRecord : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL thumbnailHidden;
@property (copy, nonatomic) NSDictionary *thumbnailClippingRect;
@property (copy, nonatomic) NSNumber *thumbnailFrameNumber;
@property (copy, nonatomic) NSDictionary *thumbnailTimestamp;
@property (nonatomic) BOOL hiddenFromDefaultExpandedView;

/* instance methods */
- (id)initWithDictionaryRepresentation:(id)representation;
- (id)dictionaryRepresentation;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* UNSAttachmentRecord_h */