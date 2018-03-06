#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1)
        {
            return nums[0];
        }
        unordered_map<int, int> rec;
        int l = nums.size();
        for(auto i : nums)
        {
            if(rec.find(i)!=rec.end())
            {
                rec[i] += 1;
                if(rec[i] >l/2)
                {
                    return i;
                }
            }
            else
            {
                rec[i] = 1;
            }
        }
    }
};
