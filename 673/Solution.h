#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        vector<int> dp_num(nums.size(), 1);
        vector<int> dp_len(nums.size(), 1);
        int mx = 0;
        if(nums.size()<=1)
        {
            return nums.size();
        }
        else
        {
            for(int i = 1; i<nums.size(); i++)
            {
                int lc = 0;
                for(int j = 0; j<i; j++)
                {
                    if(nums[i]>nums[j])
                    {
                        if( dp_len[j] == lc)
                        {
                            dp_num[i] += dp_num[j];
                        }
                        else if(dp_len[j] > lc)
                        {
                            dp_num[i] = dp_num[j];
                            lc = dp_len[j];
                        }
                    }
                }
                dp_len[i] = lc+1;
                if( lc+1 > mx )
                {
                    mx = lc+1;
                }
            }
        }
        int res = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(dp_len[i] == mx)
            {
                res += dp_num[i];
            }
        }
        return res;
    }
};
