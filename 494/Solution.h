#include <iostream>
#include <vector>
#include <map>
#include "stdlib.h"
#include <numeric>
using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        if(nums.empty())
        {
            return 0;
        }
        else
        {
            return findTargetSumWaysHelper(nums, 0, S);
        }
    }
    int findTargetSumWaysHelper(vector<int>& nums, size_t b, int S) {
        if(b == nums.size()-1)
        {
            if(S == 0 && nums[b] == 0)
            {
                return 2;
            }
            if(S == nums[b] || S == -nums[b])
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
            int bound = accumulate( nums.begin()+b, nums.end(), 0);
            if(abs(bound) < abs(S) || (bound+S)%2 )
            {
                return 0;
            }
            else
            {
                return findTargetSumWaysHelper(nums, b+1, S-nums[b]) + findTargetSumWaysHelper(nums, b+1, S+nums[b]);
            }
        }
    }
};