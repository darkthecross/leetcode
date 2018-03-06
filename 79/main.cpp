#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
	vector<vector<char>> map {{'A','A'}};
	Solution s;
	cout<<s.exist(map, string("AAA"))<<endl;
	return 0;
}
