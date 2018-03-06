#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        if(s.length() == 0)
        {
            return vector<vector<string>>(1, vector<string>(0,""));
        }
        else if(s.length() == 1)
        {
            return vector<vector<string>>{{s}};
        }
        vector<vector<string>> result;
        for(int i = 0; i<s.length(); i++)
        {
            if(parlin(s, 0, i))
            {
                string leading_s = s.substr(0, i+1);
                vector<vector<string>> following = partition(s.substr(i+1));
                for(auto strstring : following)
                {
                    strstring.insert(strstring.begin(), leading_s);
                    result.push_back(strstring);
                }
            }
        }
        return result;
    }
    bool parlin(string s, int start, int end)
    {
        while(start <= end && s[start] == s[end])
        {
            start++;
            end--;
        }
        return start > end;
    }
};
