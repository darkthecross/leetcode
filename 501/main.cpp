#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    TreeNode * root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(2);
    root->right->right = new TreeNode(3);
    root->left = new TreeNode(1);
    vector<int> result = s.findMode(root);
    for(size_t i = 0; i<result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}