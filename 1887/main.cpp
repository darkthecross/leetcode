#include<vector>
#include<iostream>

#include<map>

class Solution {
public:
    int reductionOperations(std::vector<int>& nums) {
        std::map<int, int> nums_map;
        for(const auto& i : nums) {
            if (nums_map.find(i) == nums_map.end()) {
                nums_map[i] = 1;
            } else {
                nums_map[i] += 1;
            }
        }
        int res = 0;
        int num_count = 0;
        for(const auto& p:nums_map) {
            res += num_count * p.second;
            num_count++;
        }
        return res;
    }
};

int main() {
    std::vector<int> exp1 = {5, 1, 3};
    std::vector<int> exp2 = {1, 1, 1};
    std::vector<int> exp3 = {1, 1, 2, 2, 3};
    Solution s;
    std::cout << s.reductionOperations(exp1) << std::endl;
    std::cout << s.reductionOperations(exp2) << std::endl;
    std::cout << s.reductionOperations(exp3) << std::endl;
    return 0;
}