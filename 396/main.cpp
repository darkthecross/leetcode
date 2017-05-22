#include <iostream>
#include "Solution.cpp"

using namespace std;

int main() {
 Solution s;
 vector<int> A;
        A.push_back(4);
        A.push_back(3);
        A.push_back(2);
        A.push_back(6);
 cout<<s.maxRotateFunction(A)<<endl;
 return 0;
}
