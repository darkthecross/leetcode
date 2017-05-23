#include <iostream>
#include "Solution.h"

using namespace std;
int main() {
    Solution s;
    vector< vector<int> > triangle;
    vector<int> one;
    one.push_back(2);
    triangle.push_back(one);
    vector<int> two;
    two.push_back(3);
    two.push_back(4);
    triangle.push_back(two);
    vector<int> three;
    three.push_back(6);
    three.push_back(5);
    three.push_back(7);
    triangle.push_back(three);
    cout<<s.minimumTotal(triangle)<<endl;
    return 0;
}

