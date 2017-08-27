#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<vector<int> > vec;
    vector<int> r1(3, 0);
    vector<int> r2(3, 0);
    r2[1] = 1;
    vector<int> r3(3, 0);
    vec.push_back(r1);
    vec.push_back(r2);
    vec.push_back(r3);

    cout<<"size: "<<vec.size()<<", "<<vec[0].size()<<endl;

    for(size_t i = 0; i<vec.size(); i++)
    {
        for(size_t j = 0; j<vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int> > res = s.updateMatrix(vec);
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
