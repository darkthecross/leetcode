#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> a1{1,1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2};
    vector<int> a2{1,2,3,4,5};
    cout<<s.increasingTriplet(a1)<<endl;
    cout<<s.increasingTriplet(a2)<<endl;
    return 0;
}
