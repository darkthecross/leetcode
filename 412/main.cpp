#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<string> res = s.fizzBuzz(31);
    for(unsigned int i = 0; i<res.size(); i++) {
        cout<<res[i]<<endl;
    }
    return 0;
}

