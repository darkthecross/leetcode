#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        set<int> palindromicPair;
        for(int i = 0; i<s.size(); i++)
        {
            for(int j = s.size()-1; j>=i; j--)
            {
                if(palindromicPair.count(i*2000+j) )
                {
                    continue;
                }
                else if( isPalindromic(s, i, j) )
                {
                    for(int k = 0; i+k <= j-k; k++)
                    {
                        palindromicPair.insert( (i+k)*2000 + (j-k) );
                    }
                }
            }
        }
        return palindromicPair.size();
    }

    bool isPalindromic(string & s, int b, int e) {
        int b1 = b, e1 = e;
        if(b1<0 || e1>= s.size() || b1>e1)
        {
            return false;
        }
        while(e1>=b1)
        {
            if(s[e1] != s[b1])
            {
                return false;
            }
            e1--;
            b1++;
        }
        return true;
    }
};