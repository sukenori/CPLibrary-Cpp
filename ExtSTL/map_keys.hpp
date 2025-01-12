#pragma once
#include <vector>
#include <map>
#include <unordered_map>

template <typename Map>
auto map_keys(const Map& dict){
  using Key=typename Map::key_type;
  std::vector<Key> keys(dict.size());
  for(const auto& [key,value]: dict) keys.push_back(key);
  return keys;
}