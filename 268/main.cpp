#include "Solution.h"
#include <iostream>
using namespace std;

int main(){
    Solution s;
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);
    cout<<s.missingNumber(vec)<<endl;
    return 0;
}

