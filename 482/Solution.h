#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        vector<char> rec;
        for(string::iterator it = S.begin(); it<S.end(); it++)
        {
            if( *it != '-' )
            {
                if( *it>='a' && *it <= 'z' )
                {
                    rec.push_back(*it+'A'-'a');
                }
                else
                {
                    rec.push_back(*it);
                }
            }
        }
        if(rec.size() == 0)
        {
            return string("");
        }
        string result;
        int counter = 0;
        for( vector<char>::iterator it = rec.end()-1; it>=rec.begin(); it-- )
        {
            result.insert(result.begin(), *it);
            counter += 1;
            if(counter == K && it!=rec.begin())
            {
                counter = 0;
                result.insert(result.begin(), '-');
            }
        }
        return result;
    }
};
