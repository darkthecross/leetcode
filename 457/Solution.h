#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int l = nums.size();
        for(int i = 0; i<l; i++)
        {
            int slow = i;
            int fast = i;
            step(slow, nums[slow], l);
            step(fast, nums[fast], l);
            step(fast, nums[fast], l);
            if(nums[slow] * nums[fast] < 0 || nums[slow] * nums[i] < 0)
            {
                continue;
            }
            while(slow != fast)
            {
                step(slow, nums[slow], l);
                step(fast, nums[fast], l);
                step(fast, nums[fast], l);
                if(nums[slow] * nums[fast] < 0)
                {
                    break;
                    continue;
                }
            }
            step(slow, nums[slow], l);
            step(fast, nums[fast], l);
            step(fast, nums[fast], l);
            if(slow == fast)
            {
                continue;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
    void step(int& cur, int n, int l)
    {
        cur += n;
        if(cur >= l)
        {
            while(cur >= l)
            {
                cur -= l;
            }
        }
        else if(cur < 0)
        {
            while(cur < 0)
            {
                cur += l;
            }
        }
        return;
    }
};
