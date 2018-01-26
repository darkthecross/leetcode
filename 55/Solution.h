#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
		if(nums.size() <= 1)
		{
			return true;
		}
		int i = nums.size()-2;
		int target = nums.size()-1;
		while(i>=0)
		{
			if(nums[i] + i >= target)
			{
				target = i;
			}
			i--;
		}
		return  target == 0;
    }
};