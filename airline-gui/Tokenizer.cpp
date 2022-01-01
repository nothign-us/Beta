// CLASS TOKENIZER DEFINITION
#include "Tokenizer.h"

// static function tokenize a string
vector<string> Tokenizer::Parse(string line, const string seperator) {
    // result vector
    vector<string> tokens;

    // find the first seperator appearance
    size_t startPos = 0;
    size_t seperatorFoundPos = line.find_first_of(seperator, startPos);

    while (seperatorFoundPos != string::npos) {
        // while found seperator
        
        // cut the token and add to result vector
        int nChars = seperatorFoundPos - startPos;
        string token = line.substr(startPos, nChars);
        tokens.push_back(token);

        // update start position to find next seperator appearance
        startPos = seperatorFoundPos + seperator.length();

        // find next seperator appearance
        seperatorFoundPos = line.find_first_of(seperator, startPos);
    }

    // add the remaining chars to last token
    int nChars = line.length() - startPos;
    string lastChars = line.substr(startPos, nChars);
    tokens.push_back(lastChars);

    // return result
    return tokens;
}