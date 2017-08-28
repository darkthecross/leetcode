#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<vector<int> > permuteUnique(vector<int>& nums) {
        map<int, int> numsMap;
        for(size_t i = 0; i<nums.size(); i++)
        {
            if(numsMap.count(nums[i]))
            {
                numsMap[nums[i]] += 1;
            }
            else
            {
                numsMap[nums[i]] = 1;
            }
        }
        return helper(numsMap);
    }

    vector< vector<int> > helper( map<int, int> nums )
    {
        if(!nums.size())
        {
            return vector< vector<int> >();
        }
        else if(nums.size() == 1 && nums.begin()->second == 1 )
        {
            vector< vector<int> > tbr;
            tbr.push_back( vector<int>(1, nums.begin()->first) );
            return tbr;
        }
        else
        {
            vector< vector<int> > tbr;
            for(map<int, int>::iterator idx = nums.begin(); idx!= nums.end(); idx++)
            {
                map<int, int> subNums(nums);
                subNums[idx->first] -= 1;
                if(subNums[idx->first] == 0)
                {
                    subNums.erase(idx->first);
                }
                vector<vector<int> > tmpRes = helper(subNums);
                for(size_t i = 0; i<tmpRes.size(); i++)
                {
                    tmpRes[i].insert( tmpRes[i].begin(), idx->first );
                    tbr.push_back(tmpRes[i]);
                }
            }
            return tbr;
        }
    }
};