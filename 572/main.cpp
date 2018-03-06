#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    TreeNode * root = new TreeNode(3);
    root->left = new TreeNode(4);
    root->left->left = new TreeNode(1);
    root->left->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left->left = new TreeNode(0);
    TreeNode * t = new TreeNode(4);
    t->left = new TreeNode(1);
    t->right = new TreeNode(2);
    cout<<s.isSubtree(root, t)<<endl;
    return 0;
}
