//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 324.0.0.0.0
//
#ifndef USWebHistory_h
#define USWebHistory_h
@import Foundation;

@class BMStream;
@protocol _DKKnowledgeEventStreamDeleting;

@interface USWebHistory : NSObject

@property (readonly) BOOL usageTrusted;
@property (readonly) NSObject<_DKKnowledgeEventStreamDeleting> *eventStorage;
@property (readonly) BMStream *mediaUsageStream;
@property (readonly) BMStream *webUsageStream;

/* instance methods */
- (id)initWithEventStorage:(id)storage mediaUsageStream:(id)stream webUsageStream:(id)stream usageTrusted:(BOOL)trusted;
- (id)initWithAuditToken:(struct { unsigned int x0[8] })token;
- (id)init;
- (void)deleteHistoryForURL:(id)url webApplication:(id)application completionHandler:(id /* block */)handler;
- (void)deleteHistoryForURL:(id)url webApplication:(id)application profileIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)deleteHistoryForURLs:(id)urls webApplication:(id)application completionHandler:(id /* block */)handler;
- (void)deleteHistoryForURLs:(id)urls webApplication:(id)application profileIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)deleteHistoryForDomain:(id)domain webApplication:(id)application completionHandler:(id /* block */)handler;
- (void)deleteHistoryForDomain:(id)domain webApplication:(id)application profileIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)deleteHistoryDuringInterval:(id)interval webApplication:(id)application completionHandler:(id /* block */)handler;
- (void)deleteHistoryDuringInterval:(id)interval webApplication:(id)application profileIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)deleteAllHistoryForApplication:(id)application completionHandler:(id /* block */)handler;
- (void)deleteAllHistoryForApplication:(id)application profileIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)_deleteEventsWithPredicate:(id)predicate completionHandler:(id /* block */)handler;
- (void)_deleteEventsWithWebUsagePredicate:(id)predicate videoUsagePredicate:(id)predicate completionHandler:(id /* block */)handler;
@end

#endif /* USWebHistory_h */