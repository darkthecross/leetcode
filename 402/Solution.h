#include <iostream>
#include <vector>
#include <string>
#include "stdlib.h"
using namespace std;

class Solution {
public:
    string helper(string num, int k)
    {
        if(num.size() <= k)
        {
            return string("");
        }
        else if (k<=0)
        {
            return num;
        }
        else
        {
            int minDigit = 10;
            int minDigitPos = 0;
            for(size_t i = 0; i <= k ; i++)
            {
                if(num[i]-'0' < minDigit)
                {
                    minDigit = num[i]-'0';
                    minDigitPos = i;
                }
            }
            string res = (minDigit == 0)?string("0"):to_string(minDigit);
            res += helper(num.substr(minDigitPos+1), k-minDigitPos);
            return res;
        }
    }
    string removeKdigits(string num, int k)
    {
        string tbr = helper(num, k);

        size_t leadingZero = 0;
        while( leadingZero < tbr.size() && tbr[leadingZero] == '0')
        {
            leadingZero += 1;
        }
        tbr = tbr.substr(leadingZero);
        if(tbr.empty())
        {
            return string("0");
        }
        else
        {
            return tbr;
        }
    }
};