//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFDevice_Protocol_h
#define MKFDevice_Protocol_h
@import Foundation;

@protocol MKFDevice <MKFModel, MKFDevicePublicExtensions>

@property (retain, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *mediaRouteID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMFProductInfo *productInfo;
@property (retain, nonatomic) HMDRPIdentity *rpIdentity;
@property (retain, nonatomic) HMDHomeKitVersion *version;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSObject<MKFAppleMediaAccessory> *accessoryAppleMedia;
@property (readonly, retain, nonatomic) NSObject<MKFAccount> *account;
@property (retain, nonatomic) NSObject<MKFHome> *primaryResidentOf;
@property (retain, nonatomic) NSObject<MKFResident> *resident;
@property (retain, nonatomic) NSObject<MKFHomeNetworkRouterManagingDeviceSetting> *settingRouterManager;
@property (readonly, copy, nonatomic) MKFDeviceDatabaseID *databaseID;

@end

#endif /* MKFDevice_Protocol_h */