#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        vector<int> vec = treeToVec(root);
        int minDist = INT_MAX;
        for(int i = 0; i<vec.size()-1; i++)
        {
            if(vec[i+1] - vec[i] < minDist)
            {
                minDist = vec[i+1] - vec[i];
            }
        }
        return minDist;
    }
    vector<int> treeToVec(TreeNode * root)
    {
        if(root == NULL)
        {
            return vector<int>(0,0);
        }
        else
        {
            vector<int> vec1 = treeToVec(root->left);
            vector<int> vec2 = treeToVec(root->right);
            vec1.push_back(root->val);
            for(auto i:vec2)
            {
                vec1.push_back(i);
            }
            return vec1;
        }
    }
};
