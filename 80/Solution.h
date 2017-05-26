#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		if(nums.empty()) {
			return 0;
		}
		int rec = nums[0];
		int count = 0; 
		for(vector<int>::iterator idx = nums.begin(); idx < nums.end(); ) {
			rec = *idx;
			while(idx<nums.end() && *idx == rec) {
				count++;
				if(count > 2) {
					idx = nums.erase(idx);
				} else {
					idx ++;
				}
			}
			count = 0;
		}
		return nums.size();
    }
};