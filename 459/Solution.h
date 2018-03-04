#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size() <= 1)
        {
            return false;
        }
        for(int i = 1; i<s.size(); i++)
        {
            if(s.size() % i == 0)
            {
                bool rep = true;
                for(int k = 0; k<s.size()/i; k++)
                {
                    for(int j = 0; j<i; j++)
                    {
                        if(s[k*i+j] != s[j])
                        {
                            rep = false;
                            break;
                            break;
                        }
                    }
                }
                if( rep == true )
                {
                    return true;
                }
            }
        }
        return false;
    }
};
