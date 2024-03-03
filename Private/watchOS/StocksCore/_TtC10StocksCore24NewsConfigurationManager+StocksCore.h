//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef _TtC10StocksCore24NewsConfigurationManager_StocksCore_h
#define _TtC10StocksCore24NewsConfigurationManager_StocksCore_h
@import Foundation;

@interface StocksCore.NewsConfigurationManager (StocksCore)
/* instance methods */
- (id)appConfiguration;
- (id)possiblyUnfetchedAppConfiguration;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)completion;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)queue completion:(id /* block */)completion;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)queue refreshCompletion:(id /* block */)completion;
- (void)addAppConfigObserver:(id)observer;
- (void)removeAppConfigObserver:(id)observer;
- (id)configuration;
- (void)fetchConfigurationIfNeededWithCompletion:(id /* block */)completion;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)queue completion:(id /* block */)completion;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (id)treatmentIDs;
- (id)segmentSetIDs;
@end

#endif /* _TtC10StocksCore24NewsConfigurationManager_StocksCore_h */