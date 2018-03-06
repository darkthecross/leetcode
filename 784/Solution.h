#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <cmath>

using namespace std;

class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        for(int i = 0; i<S.length(); i++)
        {
            if(S[i]>='A' && S[i]<='Z')
            {
                S[i] = S[i]+'a'-'A';
            }
        }
        set<string> res;
        for(int i = 0; i<pow(2, S.length()); i++)
        {
            string s1 = modify(S, i);
            res.insert(s1);
        }
        vector<string> result(res.begin(), res.end());
        sort(result.begin(), result.end(), greater<string>());
        return result;
    }
    string modify(string s, int t)
    {
        int n = s.length()-1;
        while(t>0)
        {
            if(t%2 && s[n]>='a' && s[n]<='z')
            {
                s[n] = s[n]+'A'-'a';
            }
            t >>= 1;
            n-=1;
        }
        return s;
    }
};
