/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
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
    int kthSmallest(TreeNode* root, int k) {
        vector<int> flatten;
        flattenTree(root, flatten);
        return flatten[k-1];
    }
    void flattenTree(TreeNode * root, vector<int> & flat) {
        if(root -> left != NULL) {
            flattenTree(root->left, flat);
        }
        flat.push_back(root->val);
        if(root -> right != NULL) {
            flattenTree(root->right, flat);
        }
    }
};