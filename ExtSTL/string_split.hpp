#pragma once
#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> string_split(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(str);
    while(std::getline(tokenStream,token,delimiter)) tokens.push_back(token);
    return tokens;
}