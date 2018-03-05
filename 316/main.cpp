#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    cout<<s.removeDuplicateLetters("bcabc")<<endl;
    cout<<s.removeDuplicateLetters("caccabad")<<endl;
    return 0;
}
