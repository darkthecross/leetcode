#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    TreeNode * root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->left->left = new TreeNode(4);
    vector< vector<string> > result = s.printTree(root);
    for(size_t i = 0; i<result.size(); i++)
    {
        for(size_t j = 0; j<result[i].size(); j++)
        {
            cout<<"\""<<result[i][j]<<"\""<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
