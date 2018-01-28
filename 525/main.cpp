#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    int x[5] = {0,1,1,0,1};
    vector<int> binaryArray(x, x + sizeof x / sizeof x[0]);

    cout<<s.findMaxLength(binaryArray);

}
