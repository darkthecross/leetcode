#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> numbers{2,2,2,3,4,2,1,2};
    cout<<s.majorityElement(numbers)<<endl;
    return 0;
}
