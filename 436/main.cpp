#include "Solution.h"
using namespace std;

int main(){
    Solution s;
    Interval i1(1,2);
    vector<Interval> mat;
    mat.push_back(i1);
    vector<int> res = s.findRightInterval(mat);
    for(auto i:res)
    {
        cout<<i<<" ";
    }
    return 0;
}
