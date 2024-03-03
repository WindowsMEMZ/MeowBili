//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFWorkflowMigrator_h
#define WFWorkflowMigrator_h
@import Foundation;

@interface WFWorkflowMigrator : NSObject
/* class methods */
+ (void)initialize;
+ (void)registerAllWorkflowKitMigrationClasses;
+ (id)migrationClasses;
+ (void)registerMigrationClass:(Class)class;
+ (void)migrateWorkflowIfNeeded:(id)needed completion:(id /* block */)completion;
+ (id)orderedMigrationClassesWithoutDependencies;
+ (id)migrationClassesWithDependencies;
@end

#endif /* WFWorkflowMigrator_h */