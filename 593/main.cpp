#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<int> p1{0,0};
    vector<int> p2{0,1};
    vector<int> p3{1,0};
    vector<int> p4{1,1};
    cout<<s.validSquare(p1, p2, p3, p4)<<endl;
    return 0;
}
