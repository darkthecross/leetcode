#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)
        {
            return false;
        }
        int s = nums[0];
        int m = INT_MAX;
        int s_cand = s;
        for(int i = 1; i<nums.size(); i++)
        {
            if(nums[i]<s_cand)
            {
                s_cand = nums[i];
            }
            else if(nums[i] > s_cand && nums[i]<m)
            {
                s = s_cand;
                m = nums[i];
            }
            else if(nums[i]>s && nums[i]<m)
            {
                m = nums[i];
            }
            else if(nums[i]>m)
            {
                return true;
            }
        }
        return false;
    }
};
