#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> res;
    res.push_back(1);
    res.push_back(2);
    res.push_back(3);
    cout<<s.checkSubarraySum(res, 5)<<endl;
    return 0;
}

