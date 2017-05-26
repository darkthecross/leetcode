#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
	vector<int> tmp;
	tmp.push_back(1);
	tmp.push_back(1);
	tmp.push_back(1);
	tmp.push_back(2);
	tmp.push_back(2);
	tmp.push_back(2);
	tmp.push_back(2);
	tmp.push_back(3);
	tmp.push_back(3);
	tmp.push_back(3);
	tmp.push_back(4);
	Solution s;
	cout<<s.removeDuplicates(tmp)<<endl;
	return 0;
}