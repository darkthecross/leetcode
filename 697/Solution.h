#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if(nums.size()<=1)
        {
            return nums.size();
        }
        vector<vector<int>> numsrec;
        for(int i = 0; i<nums.size(); i++)
        {
            int idx = -1;
            for(int j = 0; j<numsrec.size(); j++)
            {
                if(numsrec[j][0] == nums[i])
                {
                    idx = j;
                    break;
                }
            }
            if(idx != -1)
            {
                numsrec[idx][1] += 1;
                numsrec[idx][3] = i;
            }
            else
            {
                vector<int> newl {nums[i], 1, i, i};
                numsrec.push_back(newl);
            }
        }
        sort(numsrec.begin(), numsrec.end(), [](vector<int>a, vector<int>b){return a[1]>b[1];});
        int dgr = numsrec[0][1];
        int z = 0;
        int mindist = INT_MAX;
        while(z<numsrec.size() && numsrec[z][1] == dgr)
        {
            mindist = (mindist>numsrec[z][3]-numsrec[z][2]+1)?(numsrec[z][3]-numsrec[z][2]+1):mindist;
            z++;
        }
        return mindist;
    }
};
