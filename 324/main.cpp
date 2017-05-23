#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> res;
    res.push_back(1);
    res.push_back(5);
    res.push_back(1);
    res.push_back(1);
    res.push_back(6);
    res.push_back(4);
    s.wiggleSort(res);
    for(unsigned int i = 0; i<res.size(); i++) {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}

