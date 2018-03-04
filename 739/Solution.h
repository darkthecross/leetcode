#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> warmer(72, 0);
        vector<int> result(temperatures);
        for(int i = temperatures.size()-1; i>=0; i--)
        {
            if( warmer[temperatures[i]-30+1] == 0 )
            {
                result[i] = 0;
            }
            else
            {
                result[i] = warmer[temperatures[i]-30+1] - i;
            }
            for(int j = 0; j<=temperatures[i]-30; j++)
            {
                warmer[j] = i;
            }
        }
        return result;
    }
};
