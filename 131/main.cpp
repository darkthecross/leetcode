#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<vector<string>> res = s.partition(string("aab"));
    for(auto i:res)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
