#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(3);
    numbers.push_back(6);
    numbers.push_back(23);
    vector<int> res = s.twoSum(numbers, 9);
    for(unsigned int i = 0; i<res.size(); i++) {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
