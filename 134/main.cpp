#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> gas;
    gas.push_back(1);
    gas.push_back(2);
    vector<int> cost;
    cost.push_back(2);
    cost.push_back(1);
    cout<<s.canCompleteCircuit(gas, cost);
    return 0;
}
