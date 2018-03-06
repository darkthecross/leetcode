#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size() <= 1)
        {
            return nums;
        }
        sort(nums.begin(), nums.end());
        vector<int> lastId(nums.size(), -1);
        vector<int> len(nums.size(), 1);
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = 0; j<i; j++)
            {
                if(nums[i] % nums[j] == 0 && len[i] < len[j] + 1)
                {
                    len[i] = len[j]+1;
                    lastId[i] = j;
                }
            }
        }
        vector<int>::iterator it = max_element(len.begin(), len.end());
        int lId = it-len.begin();
        vector<int> result;
        while(lId != -1)
        {
            result.push_back(nums[lId]);
            lId = lastId[lId];
        }
        sort(result.begin(), result.end());
        return result;
    }
};
