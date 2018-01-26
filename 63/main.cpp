#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
	vector< vector <int> > mat;
	for(size_t i = 0; i<3; i++)
	{
		mat.push_back(vector<int> (3,0) );
	}
	mat[1][1] = 1;
	Solution s;
	cout<<s.uniquePathsWithObstacles(mat)<<endl;
	return 0;
}