#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<vector<int>> img {
  { 5, 1, 9,11},
  { 2, 4, 8,10},
  {13, 3, 6, 7},
  {15,14,12,16}
};
    s.rotate(img);
    for(auto i:img)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
