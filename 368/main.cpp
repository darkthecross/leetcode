#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> v1{1,2,3};
    vector<int> res = s.largestDivisibleSubset(v1);
    for(auto i : res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v1 = vector<int> {1,2,3,9,27};
    res = s.largestDivisibleSubset(v1);
    for(auto i : res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v1 = vector<int> {1,2,3,9,18};
    res = s.largestDivisibleSubset(v1);
    for(auto i : res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    v1 = vector<int> {1,2,4,8};
    res = s.largestDivisibleSubset(v1);
    for(auto i : res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
