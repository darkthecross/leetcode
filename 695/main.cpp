#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    int marray[8][13] = {{0,0,1,0,0,0,0,1,0,0,0,0,0},
 {0,0,0,0,0,0,0,1,1,1,0,0,0},
 {0,1,1,0,1,0,0,0,0,0,0,0,0},
 {0,1,0,0,1,1,0,0,1,0,1,0,0},
 {0,1,0,0,1,1,0,0,1,1,1,0,0},
 {0,0,0,0,0,0,0,0,0,0,1,0,0},
 {0,0,0,0,0,0,0,1,1,1,0,0,0},
 {0,0,0,0,0,0,0,1,1,0,0,0,0}};
    vector< vector<int> > m;
    for(int i = 0; i<8; i++)
    {
        vector<int> mrow;
        for(int j = 0; j<13; j++)
        {
            mrow.push_back(marray[i][j]);
        }
        m.push_back(mrow);
    }
    cout<<s.maxAreaOfIsland(m)<<endl;
    /*
    for(int i = 0; i<m.size(); i++)
    {
        for(int j = 0; j<m[i].size(); j++)
        {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    */
}
