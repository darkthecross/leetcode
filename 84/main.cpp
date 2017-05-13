#include <iostream>
#include "Solution.cpp"

using namespace std;

int main() {
	int ia[6] = {2,1,5,6,2,3};
	vector<int> Mat(ia,ia+6);
	Solution s;
	int a = s.largestRectangleArea(Mat);
	cout<<a<<endl;
	return 0;
}