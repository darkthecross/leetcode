#include <iostream>
#include "Solution.cpp"

using namespace std;

int main() {
	vector<vector<int> > Mat;
	for(int i = 0; i<3; i++) {
		vector<int> tmpvect;
		Mat.push_back(tmpvect);
		for(int j = 0; j < 4; j++){
			Mat[i].push_back(4*i+j);
		}
	}
	for(int i = 0; i<3; i++) {
		for(int j = 0; j < 4; j++){
			cout<<Mat[i][j]<<" ";
		}
		cout<<endl;
	}
	Solution s;
	vector<int> tar_vect = s.spiralOrder(Mat);
	for(int i = 0; i< tar_vect.size(); i++) {
		cout<<tar_vect[i]<<" ";
	}
	return 0;
}

