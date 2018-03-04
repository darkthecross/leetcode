#include "Solution.h"
using namespace std;

int main(){
    Solution s;
    cout<<s.repeatedSubstringPattern(string("abab"))<<endl;
    cout<<s.repeatedSubstringPattern(string("aba"))<<endl;
    cout<<s.repeatedSubstringPattern(string("abcabcabcabc"))<<endl;
    return 0;
}
