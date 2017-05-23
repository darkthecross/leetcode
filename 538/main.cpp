#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(0);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(-4);
    root->left->right = new TreeNode(1);
    root = s.convertBST(root);
    cout<<root->val<<endl;
    cout<<root->left->val<<endl;
    cout<<root->right->val<<endl;
    cout<<root->left->left->val<<endl;
    cout<<root->left->right->val<<endl;
    return 0;
}
