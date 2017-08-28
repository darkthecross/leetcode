#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<int> r1(5, 0);
    r1[0] = 5;
    r1[1] = 1;
    r1[2] = 2;
    r1[3] = 3;
    r1[4] = 2;

    vector<vector<int> > res = s.permuteUnique(r1);
    for(size_t i = 0; i<res.size(); i++)
    {
        for(size_t j = 0; j<res[i].size(); j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
