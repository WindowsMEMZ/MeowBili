//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.2.3.0.0
//
#ifndef ETModelDef_h
#define ETModelDef_h
@import Foundation;

@class NSMutableArray;
@protocol struct shared_ptr<Espresso::gradient_builder> { struct gradient_builder * x0; struct __shared_weak_count * x1; }, struct shared_ptr<Espresso::net> { struct net * x0; struct __shared_weak_count * x1; }, {map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>>="__tree_"{__tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>>="__value_"Q}}}, {shared_ptr<Espresso::gradient_builder>="__ptr_"^{gradient_builder}"__cntrl_"^{__shared_weak_count}}, {shared_ptr<Espresso::net>="__ptr_"^{net}"__cntrl_"^{__shared_weak_count}};

@interface ETModelDef : NSObject {
  /* instance variables */
  struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> { struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } layer_variable_names;
}

@property struct shared_ptr<Espresso::net> { struct net * x0; struct __shared_weak_count * x1; } network;
@property (retain) NSMutableArray *all_variables;
@property struct shared_ptr<Espresso::gradient_builder> { struct gradient_builder * x0; struct __shared_weak_count * x1; } gb;

/* instance methods */
- (void)transformForTraining:(struct shared_ptr<Espresso::net> { struct net * x0; struct __shared_weak_count * x1; })training;
- (id)initWithNetwork:(id)network;
- (struct shared_ptr<std::string> { void * x0; struct __shared_weak_count * x1; })topNamesForLayerIndex:(int)index;
- (void *)layerForName:(id)name;
- (struct shared_ptr<Espresso::blob<float, 2>> { void * x0; struct __shared_weak_count * x1; })weightsForLayer:(id)layer;
- (struct shared_ptr<Espresso::blob<float, 1>> { void * x0; struct __shared_weak_count * x1; })biasesForLayer:(id)layer;
- (void)updateLayer:(id)layer withWeights:(struct shared_ptr<float> { float * x0; struct __shared_weak_count * x1; })weights length:(unsigned long long)length;
- (void)updateLayer:(id)layer withBiases:(struct shared_ptr<float> { float * x0; struct __shared_weak_count * x1; })biases length:(unsigned long long)length;
- (void)randomizeWeightsForLayer:(id)layer withSeed:(float)seed;
- (void)setupVariablesDef;
- (id)variableNameForLayer:(id)layer kind:(unsigned long long)kind;
- (int)configureLayersToTrain:(id)train reinitializeVariables:(BOOL)variables;
- (id)variables;
- (id)variableForLayer:(id)layer kind:(unsigned long long)kind;
- (id)layerNames;
@end

#endif /* ETModelDef_h */