#include <iostream>
#include "Solution.cpp"

using namespace std;

int main() {
	vector<vector<int> > Mat;
	Solution s;
	Mat = s.generate(0);
	if(Mat.size()<=0) {
		return 0;
	}
	for(int i = 0; i<Mat.size(); i++) {
		for(int j = 0; j < Mat[i].size(); j++){
			cout<<Mat[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

