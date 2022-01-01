#pragma once

#include <string>
#include <vector>
using namespace std;

// Tokenizer class
class Tokenizer {
public:
    static vector<string> Parse(string line, const string seperator);
};