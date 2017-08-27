#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    int k = 2;
    int w = 0;
    vector<int> pro;
    pro.push_back(1);
    pro.push_back(2);
    pro.push_back(3);
    vector<int> cap;
    cap.push_back(0);
    cap.push_back(1);
    cap.push_back(1);
    cout<<"Answer: "<<s.findMaximizedCapital(k,w,pro,cap)<<endl;
}