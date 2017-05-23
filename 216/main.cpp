#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
	Solution s;
	vector<vector<int> > result = s.combinationSum3(1,7);

	for(unsigned int i = 0; i < result.size(); i++) {
		for(unsigned int j = 0; j < result[i].size(); j++) {
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}

	result = s.combinationSum3(3,7);

	for(unsigned int i = 0; i < result.size(); i++) {
		for(unsigned int j = 0; j < result[i].size(); j++) {
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	result = s.combinationSum3(4,12);
	for(unsigned int i = 0; i < result.size(); i++) {
		for(unsigned int j = 0; j < result[i].size(); j++) {
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}

