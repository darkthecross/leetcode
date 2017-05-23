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
    TreeNode* convertBST(TreeNode* root) {
        if(root == NULL) {
            return root;
        } else if(root->right == NULL && root->left == NULL) {
            return root;
        } else if(root->left == NULL) {
            convertBST(root->right);
            TreeNode * nextInTree = root->right;
            while(nextInTree->left != NULL) {
                nextInTree = nextInTree->left;
            }
            root->val += nextInTree->val;
            return root;
        } else if(root->right == NULL) {
            convertBST(root->left);
            treeAdd(root->left, root->val);
            return root;
        } else {
            convertBST(root->right);
            TreeNode * nextInTree = root->right;
            while(nextInTree->left != NULL) {
                nextInTree = nextInTree->left;
            }
            root->val += nextInTree->val;
            convertBST(root->left);
            treeAdd(root->left, root->val);
            return root;
        }
    }
    TreeNode* treeAdd( TreeNode * root, int value) {
        if(root == NULL) {
            return root;
        } else {
            root->val += value;
            treeAdd(root->left, value);
            treeAdd(root->right, value);
            return root;
        }

    }
};