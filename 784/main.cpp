#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<string> s1 = s.letterCasePermutation(string("a1b2"));
    for(int i = 0; i<s1.size(); i++)
    {
        cout<<s1[i]<<endl;
    }
    s1 = s.letterCasePermutation(string("3z5"));
    for(int i = 0; i<s1.size(); i++)
    {
        cout<<s1[i]<<endl;
    }
    return 0;
}
