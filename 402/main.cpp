#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    cout<<s.removeKdigits(string("112"), 1)<<endl;
    cout<<s.removeKdigits(string("10200"), 1)<<endl;
    cout<<s.removeKdigits(string("1107"), 1)<<endl;
    cout<<s.removeKdigits(string("10"), 1)<<endl;   
    return 0;
}