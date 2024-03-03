//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REDataSourceManagerProperties_Protocol_h
#define REDataSourceManagerProperties_Protocol_h
@import Foundation;

@protocol REDataSourceManagerProperties <REExportedInterface>

@property (readonly, nonatomic) NSSet *disabledDataSources;
@property (readonly) NSSet *availableDataSourceIdentifiers;
@property (readonly) NSSet *currentDataSourceIdentifiers;
@property (readonly) NSArray *currentDataSources;
@property (readonly, nonatomic) NSArray *dataSourceControllers;

@end

#endif /* REDataSourceManagerProperties_Protocol_h */