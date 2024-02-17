//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCRawFileDataProvider_h
#define FCRawFileDataProvider_h
@import Foundation;

#include "FCAssetDataProvider-Protocol.h"
#include "FCInterestToken.h"

@class NSData, NSString;

@interface FCRawFileDataProvider : NSObject<FCAssetDataProvider>

@property (readonly, nonatomic) FCInterestToken *holdToken;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) BOOL isRawFileConsumable;

/* instance methods */
- (id)initWithFilePath:(id)path holdToken:(id)token;
- (id)initWithFilePath:(id)path;
- (id)init;
@end

#endif /* FCRawFileDataProvider_h */