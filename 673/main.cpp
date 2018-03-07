#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> v1{2,2,2,2,2};
    cout<<s.findNumberOfLIS(v1)<<endl;
    v1 = vector<int>{1,3,5,4,7};
    cout<<s.findNumberOfLIS(v1)<<endl;
}
