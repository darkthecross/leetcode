#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
	Solution s;
	vector< int > vec(20000,1);
	//vec[0] = 1;
	vec[1] = 2;
	vec[2] = 3;
	//vec[4] = 4;
	cout<<s.canJump(vec)<<endl;
	return 0;
}

