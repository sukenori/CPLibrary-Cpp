#pragma once
#include <vector>
#include <map>
#include <unordered_map>

template <typename Key,typename Value>
struct Pair {
  Key key;
  Value value;
};
template <typename Map>
auto map_pairs(const Map& dict){
  using Key=typename Map::key_type;
  using Value=typename Map::mapped_type;
  std::vector<Pair<Key,Value>> pairs(dict.size());
  for(const auto& [key, value]: dict) pairs.push_back({key,value});
  return pairs;
}