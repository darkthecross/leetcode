#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size()<=1) {
            return false;
        } else {
            for(unsigned int i = 0; i<nums.size(); i++) {
                if( nums[i] == 0 && i+1<nums.size() && nums[i+1] == 0 ) {
                    return true;
                }
            }
        }
        if(k == 0) {
            return false;
        }
        map<int, int> residualsRec;
        int sum = nums[0];
        residualsRec[sum] = 1;
        for(unsigned int i = 1; i<nums.size(); i++) {
            sum = (sum + nums[i])%k;
            if(sum == 0) {
                return true;
            } else if(residualsRec[sum]==0) {
                residualsRec[sum] = i;
            } else {
                return true;
            }
        }
        return false;
    }
};