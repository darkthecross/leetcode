#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        map<int, unsigned int> myMap;
        map<int, unsigned int>::iterator mapIter;
        for(unsigned int i = 0; i < numbers.size(); i++) {
            mapIter = myMap.find(target - numbers[i]);
            if(mapIter!=myMap.end()) {
                result.push_back(mapIter->second+1);
                result.push_back(i+1);
                return result;
            }
            myMap.insert(pair<int, unsigned int>(numbers[i], i));
        }
        return result;
    }
};