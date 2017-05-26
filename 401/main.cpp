#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<string> res = s.readBinaryWatch(8);
    for(unsigned int i = 0;i<res.size(); i++) {
        cout<<res[i]<<" ";
    }
    return 0;
}

