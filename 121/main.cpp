#include <iostream>
#include "Solution.h"

using namespace std;
int main() {
    Solution s;
    vector<int> st {7,1,5,3,6,4};
    cout<<s.maxProfit(st)<<endl;
    return 0;
}
