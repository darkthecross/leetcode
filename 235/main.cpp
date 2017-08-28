#include "Solution.h"
using namespace std;

int main(){
    Solution s;
    TreeNode * root = new TreeNode(10);
    root->left = new TreeNode(7);
    root->right = new TreeNode(12);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(9);
    TreeNode * p = s.lowestCommonAncestor(root, root->left->left, root->right);
    cout<<p->val<<endl;
    return 0;
}

