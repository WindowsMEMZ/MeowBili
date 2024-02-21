//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSProtobufSchemaBuilder_Protocol_h
#define BSProtobufSchemaBuilder_Protocol_h
@import Foundation;

@protocol BSProtobufSchemaBuilder <NSObject>
/* instance methods */
- (void)addField:(const char *)field;
- (void)addField:(const char *)field allowedClasses:(id)classes;
- (void)addRepeatingField:(const char *)field containsClass:(Class)class;
- (void)addRepeatingField:(const char *)field containsClasses:(id)classes;
- (void)addField:(const char *)field forTag:(long long)tag;
- (void)addRepeatingField:(const char *)field containsClass:(Class)class forTag:(long long)tag;
@end

#endif /* BSProtobufSchemaBuilder_Protocol_h */