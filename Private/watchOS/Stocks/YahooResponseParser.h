//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 101.0.0.0.0
//
#ifndef YahooResponseParser_h
#define YahooResponseParser_h
@import Foundation;

@interface YahooResponseParser : NSObject
/* class methods */
+ (id)objectWithDictionaryKeyPath:(id)path inJSONObject:(id)jsonobject;
+ (id)dictionaryWithDictionaryKeyPath:(id)path inJSONObject:(id)jsonobject;
+ (id)arrayWithDictionaryKeyPath:(id)path inJSONObject:(id)jsonobject wrapResultIfDictionary:(BOOL)dictionary;
+ (id)objectOfClass:(Class)class withDictionaryKeyPath:(id)path inJSONObject:(id)jsonobject;
+ (void)parseData:(id)data resultsHandler:(id /* block */)handler;
+ (id)parseDataSourceMapFromDataSourceDictionaries:(id)dictionaries;
+ (void)parseExchangeDictionaries:(id)dictionaries parsedExchangeResult:(id /* block */)result;
+ (void)parseStockQuoteDictionaries:(id)dictionaries withDataSources:(id)sources parsedStockResult:(id /* block */)result;
@end

#endif /* YahooResponseParser_h */