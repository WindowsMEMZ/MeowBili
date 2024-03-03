//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.2.3.0.0
//
#ifndef ETDataPoint_h
#define ETDataPoint_h
@import Foundation;

@protocol {map<std::string, ETDataPoint_buffer, std::less<std::string>, std::allocator<std::pair<const std::string, ETDataPoint_buffer>>>="__tree_"{__tree<std::__value_type<std::string, ETDataPoint_buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, ETDataPoint_buffer>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, ETDataPoint_buffer>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>>>="__value_"Q}}}, {map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>>="__tree_"{__tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, vImage_Buffer>>>="__begin_node_"^v"__pair1_"{__compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, vImage_Buffer>, void *>>>="__value_"{__tree_end_node<std::__tree_node_base<void *> *>="__left_"^v}}"__pair3_"{__compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>>="__value_"Q}}};

@interface ETDataPoint : NSObject {
  /* instance variables */
  struct map<std::string, vImage_Buffer, std::less<std::string>, std::allocator<std::pair<const std::string, vImage_Buffer>>> { struct __tree<std::__value_type<std::string, vImage_Buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, vImage_Buffer>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, vImage_Buffer>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, vImage_Buffer>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } image_buffers;
  struct map<std::string, ETDataPoint_buffer, std::less<std::string>, std::allocator<std::pair<const std::string, ETDataPoint_buffer>>> { struct __tree<std::__value_type<std::string, ETDataPoint_buffer>, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>>, std::allocator<std::__value_type<std::string, ETDataPoint_buffer>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, ETDataPoint_buffer>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, ETDataPoint_buffer>, std::less<std::string>>> { unsigned long long __value_; } __pair3_; } __tree_; } buffers;
}

/* instance methods */
- (void)iterateBuffersByKey:(id /* block */)key;
- (void)setImage:(struct vImage_Buffer { void * x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })image forKey:(id)key;
- (void)setData:(float *)data size:(unsigned long long)size forKey:(id)key freeWhenDone:(BOOL)done;
- (struct vImage_Buffer { void * x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })imageWithKey:(id)key;
- (float *)bufferWithKey:(id)key;
- (void)dealloc;
- (struct unordered_map<std::string, std::shared_ptr<Espresso::blob<float, 4>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { struct __hash_table<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>>> { void * * x0; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> *>> { unsigned long long x0; } x0; } x1; } x0; } x0; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::hash<std::string>, std::equal_to<std::string>>> { unsigned long long x0; } x2; struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::shared_ptr<Espresso::blob<float, 4>>>, std::equal_to<std::string>, std::hash<std::string>>> { float x0; } x3; } x0; })getSampleData;
@end

#endif /* ETDataPoint_h */