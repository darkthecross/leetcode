#include <iostream>
#include <vector>
#include <string>
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s == NULL && t == NULL)
        {
            return true;
        }
        else if(s == NULL || t == NULL)
        {
            return false;
        }
        else if(treeEqual(s, t))
        {
            return true;
        }
        else
        {
            return isSubtree(s->left, t) || isSubtree(s->right, t);
        }
    }

    bool treeEqual(TreeNode* s, TreeNode* t)
    {
        if(s == NULL && t == NULL)
        {
            return true;
        }
        else if(s == NULL || t == NULL)
        {
            return false;
        }
        else
        {
            if(s->val != t->val)
            {
                return false;
            }
            else
            {
                return treeEqual(s->left, t->left) && treeEqual(s->right, t->right);
            }
        }
    }
};
