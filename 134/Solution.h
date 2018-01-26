#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int count = 0;
        int count_min = INT_MAX;
        int count_min_id = 0;
        for(size_t i = 0; i<gas.size(); i++)
        {
            gas[i] -= cost[i];
            count += gas[i];
            if(count < count_min)
            {
                count_min = count;
                count_min_id = i;
            }
        }
        if(count < 0)
        {
            return -1;
        }
        else
        {
            return (count_min_id + 1 >= gas.size()) ? 0 : (count_min_id + 1);
        }
    }
};