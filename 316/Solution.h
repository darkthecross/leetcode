#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        if(s.length()<=1)
        {
            return s;
        }
        map<char, int> rec;
        for(int i = 0; i<s.length(); i++)
        {
            rec[s[i]] = i;
        }
        int sml = s.size();
        for(auto it = rec.begin(); it!=rec.end(); it++)
        {
            if(sml > it->second)
            {
                sml = it->second;
            }
        }
        int recPos = s.size();
        for(int i = 0; i<26; i++)
        {
            int pos = s.find(char('a'+i));
            if(pos != string::npos && pos <= sml)
            {
                recPos = pos;
                break;
            }
        }
        char a = s[recPos];
        string news = s.substr(recPos+1);
        while(news.find(a) != string::npos)
        {
            int fd = news.find(a);
            news.erase(fd, 1);
        }
        return string(1, a) + removeDuplicateLetters(news);
    }
};
