//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUBluetoothDevice_h
#define CUBluetoothDevice_h
@import Foundation;

@class NSString, NSUUID;

@interface CUBluetoothDevice : NSObject

@property (nonatomic) struct { unsigned char x0[6] } address;
@property (copy) NSString *addressString;
@property (nonatomic) int colorCode;
@property (nonatomic) unsigned int connectedServices;
@property (nonatomic) unsigned int deviceFlags;
@property (nonatomic) unsigned int deviceType;
@property (nonatomic) int disconnectReason;
@property (copy) NSString *firmwareVersion;
@property (copy) NSUUID *identifier;
@property (nonatomic) BOOL magicPaired;
@property (copy) NSString *manufacturer;
@property (copy) NSString *modelNumber;
@property (copy) NSString *name;
@property (nonatomic) int primaryPlacement;
@property (nonatomic) int secondaryPlacement;
@property (nonatomic) BOOL present;
@property (nonatomic) unsigned int productIdentifier;
@property (nonatomic) int streamState;
@property (nonatomic) BOOL supportsAACPService;
@property (nonatomic) unsigned int versionID;

/* instance methods */
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
@end

#endif /* CUBluetoothDevice_h */