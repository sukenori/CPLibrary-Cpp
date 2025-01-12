#pragma once
#include <vector>
#include <map>
#include <unordered_map>

template <typename Map>
auto map_values(const Map& dict){
  using Value=typename Map::mapped_type;
  std::vector<Value> values(dict.size());
  for(const auto& [key, value]: dict) values.push_back(value);
  return values;
}