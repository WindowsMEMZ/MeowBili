//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSInsertionPointHelper_h
#define NSInsertionPointHelper_h
@import Foundation;

@interface NSInsertionPointHelper : NSObject {
  /* instance variables */
  struct _NSRange { unsigned long long location; unsigned long long length; } _charRange;
  long long _writingDirection;
  unsigned long long _count;
  unsigned long long _altCount;
  double * _logicalPositions;
  double * _logicalLeftBoundaries;
  double * _logicalRightBoundaries;
  unsigned long long * _logicalCharIndexes;
  double * _displayPositions;
  unsigned long long * _displayCharIndexes;
  double * _logicalAltPositions;
  unsigned long long * _logicalAltCharIndexes;
  double * _displayAltPositions;
  unsigned long long * _displayAltCharIndexes;
}

/* instance methods */
- (void)dealloc;
@end

#endif /* NSInsertionPointHelper_h */