#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    cout<<s.numDecodings(string("1*"))<<endl;
    cout<<s.numDecodings(string("2*"))<<endl;
    cout<<s.numDecodings(string("**"))<<endl;
    cout<<s.numDecodings(string("126"))<<endl;
    cout<<s.numDecodings(string("****"))<<endl;
    return 0;
}
