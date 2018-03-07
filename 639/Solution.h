#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int numDecodings(string s) {
        if(s.length() == 0)
        {
            return 0;
        }
        else if(s.length() == 1)
        {
            return shortDecoder(s, 0, s.length());
        }
        else if(s.length() == 2)
        {
            return shortDecoder(s, 0, 1) * shortDecoder(s, 1, 2) + shortDecoder(s, 0, 2);;
        }
        else
        {
            vector<long> dp(s.length(), 1);
            // dp[0][0] = shortDecoder(s, 0, 1);
            // dp[0][1] = 0;
            // dp[1][0] = dp[0][0] * shortDecoder(s, 1, 2);
            // dp[1][1] = shortDecoder(s, 0, 2);
            dp[0] = shortDecoder(s, 0, 1);
            dp[1] = dp[0] * shortDecoder(s, 1, 2) + shortDecoder(s, 0, 2);
            for(int i = 2; i<s.length(); i++)
            {
                dp[i] = dp[i-2] * shortDecoder(s, i-1, i+1) + dp[i-1] * shortDecoder(s, i, i+1);
                if(dp[i]>1000000007)
                {
                    dp[i] = dp[i]%1000000007;
                }
            }
            return dp.back();
        }
    }
    int shortDecoder(string & s, int begin, int end)
    {
        if(end-begin == 1)
        {
            if(s[begin] == '*')
            {
                return 9;
            }
            else if(s[begin] == '0')
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            if(s[begin] == '*')
            {
                if(s[begin+1] == '*')
                {
                    return 15;
                }
                else if(s[begin+1]<='6')
                {
                    return 2;
                }
                else
                {
                    return 1;
                }
            }
            else if(s[begin] == '0')
            {
                return 0;
            }
            else if(s[begin] == '1')
            {
                return (s[begin+1]=='*'?9:1);
            }
            else if(s[begin] == '2')
            {
                if(s[begin+1] == '*')
                {
                    return 6;
                }
                else if(s[begin+1] <= '6')
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
    }
};
