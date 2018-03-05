 #include <iostream>
 #include <vector>
 using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m <= 0)
        {
            return false;
        }
        int n = matrix[0].size();
        if(n <= 0)
        {
            return false;
        }
        return helper(matrix, target, 0, m-1, 0, n-1);
    }
    bool helper(vector<vector<int>>& matrix, int target, int xl, int xh, int yl, int yh)
    {
        if(xl>xh || yl>yh || target<matrix[xl][yl] || target > matrix[xh][yh])
        {
            return false;
        }
        if(xl == xh && yl == yh)
        {
            return target == matrix[xl][yl];
        }
        else
        {
            int xm = (xl + xh) / 2;
            int ym = (yl + yh) / 2;
            int res = helper(matrix, target, xl, xm, yl, ym) || helper(matrix, target, xm+1, xh, yl, ym) || helper(matrix, target, xl, xm, ym+1, yh) || helper(matrix, target, xm+1, xh, ym+1, yh);
            return res;
        }
    }
};
