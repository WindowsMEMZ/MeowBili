//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSFrameSpecifierModel_h
#define BLSFrameSpecifierModel_h
@import Foundation;

@class NSArray, NSMutableArray;

@interface BLSFrameSpecifierModel : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  unsigned long long _stateHandler;
}

@property (readonly) NSArray *specifiers;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)addSpecifiers:(id)specifiers;
- (void)purgeAllButOneSpecifiersBeforeDate:(id)date;
- (void)purgeAllSpecifiersOnOrAfterDate:(id)date;
- (id)specifierAtPresentationDate:(id)date;
@end

#endif /* BLSFrameSpecifierModel_h */