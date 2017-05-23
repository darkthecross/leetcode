#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    cout<<atoi(string(" 30").c_str())<<endl;
    cout<<s.calculate(string("  5+4/2*3+9*7/8-2"))<<endl;
    return 0;
}

