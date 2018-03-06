#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> temp = {1,1};
    cout<<s.findShortestSubArray(temp)<<endl;
    return 0;
}
