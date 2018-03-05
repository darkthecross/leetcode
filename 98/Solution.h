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
    bool isValidBST(TreeNode* root) {
        vector<int> vec = treeToVec(root);
        if(vec.size() <= 1)
        {
            return true;
        }
        bool okay = true;
        for(int i = 0; i<vec.size()-1; i++)
        {
            if(vec[i+1] <= vec[i])
            {
                okay = false;
                break;
            }
        }
        return okay;
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
