#include "Solution.h"
using namespace std;

int main(){
    Solution s;
    vector<vector<int> > matrix(5, vector<int>(5,0));
    int a[5][5] = {{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
    for(int i = 0; i<5; i++) {
        for (int j = 0; j<5; j++) {
            matrix[i][j] = a[i][j];
        }
    }
    for(unsigned int i = 0; i<matrix.size(); i++) {
        for (unsigned int j = 0; j<matrix[i].size(); j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<pair<int, int> > result;
    result = s.pacificAtlantic(matrix);
    for(unsigned int i = 0; i<result.size(); i++) {
        cout<<"("<<result[i].first<<","<<result[i].second<<")"<<endl;
    }
    return 0;
}

