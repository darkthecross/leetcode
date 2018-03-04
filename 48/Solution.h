#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int i_ub = int(float(n-1)/2);
        int j_ub = i_ub - ((n%2==0)?0:1);
        for(int i = 0; i <= i_ub; i++)
        {
            for(int j = 0; j <= j_ub; j++)
            {
                // (i,j), (j, n-1-i), (n-1-i, n-1-j), (n-1-j, i)
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][i];
                matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                matrix[j][n-1-i] = tmp;
            }
        }
    }
};
