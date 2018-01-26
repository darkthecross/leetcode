#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> a(5,1);
    cout<<s.findTargetSumWays(a, 3)<<endl;
    return 0;
}