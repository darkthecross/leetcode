#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1)
        {
            return 0;
        }
        int lp = prices[0];
        int pt = 0;
        for(auto i : prices)
        {
            if(i < lp)
            {
                lp = i;
            }
            if(i-lp > pt)
            {
                pt = i-lp;
            }
        }
        return pt;
    }
};
