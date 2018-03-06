#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<vector<int>> mat {{-2,-3,3}, {-5,-10,1},{10, 30, -5}};
    cout<<s.calculateMinimumHP(mat)<<endl;
    return 0;
}
