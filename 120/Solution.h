#include <iostream>
using namespace std;
class Solution {
public:
    int minimumTotal(vector<vector<int> >& triangle) {
        if(triangle.size() == 0) {
            return 0;
        } else if(triangle[0].size() == 0) {
            return 0;
        } else if(triangle.size() == 1) {
            return triangle[0][0];
        } else {
            vector<int> lastStageSum;
            lastStageSum.push_back(triangle[0][0]);
            vector<int> stageSum;
            for(unsigned int i = 1; i<triangle.size(); i++) {
                for(unsigned int j = 0; j<=i; j++) {
                    if(j == 0) {
                        stageSum.push_back(triangle[i][j] + lastStageSum[0]);
                    } else if(j == i) {
                        stageSum.push_back(triangle[i][j] + lastStageSum[j-1]);
                    } else {
                        stageSum.push_back(triangle[i][j] + ((lastStageSum[j-1]<lastStageSum[j])?lastStageSum[j-1]:lastStageSum[j]));
                    }
                }
                lastStageSum.swap(stageSum);
                stageSum.clear();
            }
            int result = INT_MAX;
            for(unsigned int i = 0; i<lastStageSum.size(); i++) {
                if(result > lastStageSum[i]) {
                    result = lastStageSum[i];
                }
            }
            return result;
        }
    }
};