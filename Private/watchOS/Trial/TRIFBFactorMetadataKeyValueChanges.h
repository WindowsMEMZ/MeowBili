//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFBFactorMetadataKeyValueChanges_h
#define TRIFBFactorMetadataKeyValueChanges_h
@import Foundation;

@interface TRIFBFactorMetadataKeyValueChanges : NSObject {
  /* instance variables */
  unsigned char _changeTypeKey;
  unsigned int _replacementKey;
  unsigned char _changeTypeVal;
  unsigned int _replacementVal;
}

/* instance methods */
- (void)replaceKey:(id)key;
- (void)preserveKey;
- (void)replaceVal:(id)val;
- (void)preserveVal;
@end

#endif /* TRIFBFactorMetadataKeyValueChanges_h */