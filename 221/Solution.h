#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        vector<vector<int>> mat;
        for(int i = 0; i<matrix.size(); i++)
        {
            mat.push_back(vector<int>(0,0));
            for(int j = 0; j<matrix[i].size(); j++)
            {
                mat[i].push_back(matrix[i][j]=='1'?1:0);
            }
        }
        int l = helper(mat);
        return l*l;
    }
    int helper(vector<vector<int>> mat)
    {
        if(mat.size() == 0 || mat[0].size() == 0)
        {
            return 0;
        }

        bool empty = true;
        for(auto i : mat)
        {
            for(auto j : i)
            {
                if(j == 1)
                {
                    empty = false;
                    break;
                    break;
                }
            }
        }
        if(empty)
        {
            return 0;
        }
        else if(mat.size() == 1 || mat[0].size() == 1)
        {
            return 1;
        }
        else
        {
            vector<vector<int>> newMat;
            for(int i = 0; i<mat.size()-1; i++)
            {
                newMat.push_back(vector<int>(0,0));
                for(int j = 0; j<mat[i].size()-1; j++)
                {
                    bool allOne = mat[i][j] == 1 && mat[i+1][j+1] == 1 && mat[i+1][j] == 1 && mat[i][j+1] == 1;
                    newMat[i].push_back(allOne?1:0);
                }
            }
            return helper(newMat) + 1;
        }
    }
};
