#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        if(s == "" ) {
            return -1;
        }
        map<char, int> charRec;
        for(int i = s.size()-1; i>=0; i--) {
            if(charRec.find(s[i]) == charRec.end()) {
                charRec[s[i]] = i;
            } else {
                charRec[s[i]] = s.size();
            }
        }
        int result = s.size();
        for(map<char, int>::iterator idx = charRec.begin(); idx != charRec.end(); idx++) {
            if(idx->second < result) {
                result = idx->second;
            }
        }
        if(result == int(s.size())) {
            return -1;
        } else {
            return result;
        }
    }
};