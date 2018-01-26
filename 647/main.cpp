#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    cout<<"aaa: "<<s.countSubstrings(string("aaa"))<<endl;
    cout<<"abc: "<<s.countSubstrings(string("abc"))<<endl;
    cout<<"abcb: "<<s.countSubstrings(string("abcb"))<<endl;

    return 0;
}
