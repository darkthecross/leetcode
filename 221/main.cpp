#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
	Solution s;
	vector<vector<char> > result = {{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
	cout<<s.maximalSquare(result)<<endl;
	return 0;
}
