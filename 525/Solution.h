#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int, int> myMap;
        map<int, int>::iterator it;
        int sum = 0;
        int maxLen = 0;
        myMap[0] = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += (nums[i] == 0) ? -1 : 1;
            it = myMap.find(sum); 
            if (it != myMap.end())
                maxLen = max(maxLen, i - it->second);
            else
                myMap[sum] = i;
        }
        return maxLen;
    }
};