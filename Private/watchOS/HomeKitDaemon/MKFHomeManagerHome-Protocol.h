//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef MKFHomeManagerHome_Protocol_h
#define MKFHomeManagerHome_Protocol_h
@import Foundation;

@protocol MKFHomeManagerHome <MKFModel, MKFHomeManagerHomePublicExtensions>

@property (copy, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) HMDHomeManagerHomeHandle *handle;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSObject<MKFHomeManager> *homeManager;
@property (retain, nonatomic) NSObject<MKFHomeManager> *homeManagerPrimary;
@property (readonly, copy, nonatomic) MKFHomeManagerHomeDatabaseID *databaseID;

@end

#endif /* MKFHomeManagerHome_Protocol_h */