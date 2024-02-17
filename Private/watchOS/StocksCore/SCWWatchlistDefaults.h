//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCWWatchlistDefaults_h
#define SCWWatchlistDefaults_h
@import Foundation;

@class NSArray;

@interface SCWWatchlistDefaults : NSObject

@property (readonly, copy, nonatomic) NSArray *defaultSymbols;

/* class methods */
+ (id)defaultsForCurrentCountry;
+ (id)defaultsWithDefaultSymbols:(id)symbols;
+ (id)emptyDefaults;
+ (id)defaultsHistoryForCurrentCountry;
+ (id)_defaultSymbolsByCountryCode;
+ (id)_iOS10DefaultsForCurrentCountry;
+ (id)_iOS7DefaultsForCurrentCountry;
+ (id)_legacyDefaultSymbolsByCountryCode;

/* instance methods */
- (id)initWithDefaultSymbols:(id)symbols;
- (id)defaultsByAppendingDefaults:(id)defaults;
@end

#endif /* SCWWatchlistDefaults_h */