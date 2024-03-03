//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNMetadataProvider_h
#define LNMetadataProvider_h
@import Foundation;

#include "LNMetadataProviderInterface-Protocol.h"

@class NSString, NSXPCConnection;

@interface LNMetadataProvider : NSObject<LNMetadataProviderInterface> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  long long _options;
  NSObject<LNMetadataProviderInterface> *_xpcProvider;
  NSObject<LNMetadataProviderInterface> *_directProvider;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithOptions:(long long)options;
- (void)dealloc;
- (id)actionsWithError:(id *)error;
- (id)actionsConformingToSystemProtocols:(id)protocols logicalType:(unsigned long long)type bundleIdentifier:(id)identifier error:(id *)error;
- (id)actionsAndSystemProtocolDefaultsForBundleIdentifier:(id)identifier error:(id *)error;
- (id)actionsConformingToSystemProtocol:(id)protocol withParametersOfTypes:(id)types bundleIdentifier:(id)identifier error:(id *)error;
- (id)actionsForBundleIdentifier:(id)identifier error:(id *)error;
- (id)actionsForBundleIdentifier:(id)identifier andActionIdentifier:(id)identifier error:(id *)error;
- (id)actionForBundleIdentifier:(id)identifier andActionIdentifier:(id)identifier error:(id *)error;
- (id)actionsWithFullyQualifiedIdentifiers:(id)identifiers error:(id *)error;
- (id)bundlesWithError:(id *)error;
- (id)queriesWithError:(id *)error;
- (id)queriesForBundleIdentifier:(id)identifier ofType:(id)type error:(id *)error;
- (id)enumsWithError:(id *)error;
- (id)enumsForBundleIdentifier:(id)identifier error:(id *)error;
- (id)entitiesWithError:(id *)error;
- (id)entitiesForBundleIdentifier:(id)identifier error:(id *)error;
- (long long)metadataVersionForBundleIdentifier:(id)identifier error:(id *)error;
- (id)appShortcutsProviderMangledTypeNameForBundleIdentifier:(id)identifier error:(id *)error;
- (void)registerBundleWithIdentifier:(id)identifier force:(BOOL)force reply:(id /* block */)reply;
- (void)resetWithReply:(id /* block */)reply;
- (void)scanBundlesWithReply:(id /* block */)reply;
- (void)unregisterBundleWithIdentifier:(id)identifier reply:(id /* block */)reply;
@end

#endif /* LNMetadataProvider_h */