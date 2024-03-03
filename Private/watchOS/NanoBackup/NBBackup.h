//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.0.0.0.0
//
#ifndef NBBackup_h
#define NBBackup_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSDate, NSNumber, NSString, NSURL, NSUUID;

@interface NBBackup : NSObject<NSSecureCoding>

@property (nonatomic) BOOL hasResolvedActiveWatchFaceFilePath;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long backupType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *productType;
@property (retain, nonatomic) NSString *productName;
@property (retain, nonatomic) NSString *systemVersion;
@property (retain, nonatomic) NSString *systemBuildVersion;
@property (retain, nonatomic) NSString *marketingVersion;
@property (retain, nonatomic) NSString *deviceColor;
@property (retain, nonatomic) NSString *deviceEnclosureColor;
@property (retain, nonatomic) NSNumber *bottomEnclosureMaterial;
@property (retain, nonatomic) NSNumber *topEnclosureMaterial;
@property (retain, nonatomic) NSNumber *fcmMaterial;
@property (retain, nonatomic) NSNumber *bcmWindowMaterial;
@property (retain, nonatomic) NSNumber *coverGlassColor;
@property (retain, nonatomic) NSNumber *housingColor;
@property (retain, nonatomic) NSNumber *backingColor;
@property (retain, nonatomic) NSString *watchFace;
@property (retain, nonatomic) NSString *watchFaceColor;
@property (nonatomic) BOOL locationOptInEnabled;
@property (nonatomic) BOOL diagnosticsOptInEnabled;
@property (retain, nonatomic) NSDate *lastModificationDate;
@property (retain, nonatomic) NSNumber *sizeInBytes;
@property (retain, nonatomic) NSURL *activeWatchFaceFileURL;
@property (retain, nonatomic) NSString *deviceCSN;
@property (retain, nonatomic) NSData *watchFaceData;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isLocationOptInEnabled;
- (BOOL)isDiagnosticsOptInEnabled;
@end

#endif /* NBBackup_h */