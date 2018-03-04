#include <vector>
#include <iostream>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> empt(0, vector<int>(0,0));
        if(root == NULL)
        {
        }
        else
        {
            if(root->left == NULL && root->right == NULL && root->val == sum)
            {
                empt.push_back(vector<int>(1, root->val));
            }
            else
            {
                vector<vector<int>> vec1 = pathSum(root->left, sum-root->val);
                vector<vector<int>> vec2 = pathSum(root->right, sum-root->val);
                for(int i = 0; i<vec1.size(); i++)
                {
                    empt.push_back(vec1[i]);
                }
                for(int i = 0; i<vec2.size(); i++)
                {
                    empt.push_back(vec2[i]);
                }
                for(int i = 0; i<empt.size(); i++)
                {
                    empt[i].insert(empt[i].begin(), root->val);
                }
            }
        }
        return empt;
    }
};
