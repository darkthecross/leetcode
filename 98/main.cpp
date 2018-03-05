#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(5);
    cout<<s.isValidBST(root)<<endl;
    return 0;
}
