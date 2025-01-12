#pragma once
#include <map>

template<typename Container>
std::map<typename Container::value_type,int> count_map(const Container& container){
  std::map<typename Container::value_type,int> dict;
  for(const auto& key: container) dict[key]++;
  return dict;
}