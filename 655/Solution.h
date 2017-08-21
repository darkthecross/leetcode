#include <iostream>
#include <vector>
#include <string>
#include <deque>

 //Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
 
using namespace std;
class Solution {
public:
    vector<vector<string> > printTree(TreeNode* root) {
        vector< vector<string> > result;

        // calc depth

        if(root == NULL)
        {
            return result;
        }
        size_t depth = 0;
        deque<TreeNode*> depthQueue;
        depthQueue.push_back(root);
        vector<string> tmpVec(1, to_string(root->val));
        result.push_back(tmpVec);
        depth += 1;
        for(;;)
        {
            size_t total_size = depthQueue.size();
            for(size_t i = 0; i<total_size; i++)
            {
                TreeNode * tmpTreeNode = depthQueue.front();
                depthQueue.pop_front();
                if(tmpTreeNode == NULL)
                {
                    depthQueue.push_back(NULL);
                    depthQueue.push_back(NULL);
                }
                else
                {
                    depthQueue.push_back(tmpTreeNode->left);
                    depthQueue.push_back(tmpTreeNode->right);
                }
            }
            bool ended = true;
            for(deque<TreeNode*>::iterator idx = depthQueue.begin(); idx < depthQueue.end(); idx++)
            {
                if(*idx != NULL)
                {
                    ended = false;
                    break;
                }
            }
            if(!ended)
            {
                depth += 1;
                for(size_t i = 0; i<result.size(); i++)
                {
                    vector<string> newTmpVect;
                    newTmpVect.push_back(string(""));
                    for(size_t j = 0; j<result[i].size(); j++)
                    {
                        newTmpVect.push_back(result[i][j]);
                        newTmpVect.push_back(string(""));
                    }
                    result[i] = newTmpVect;
                }
                vector<string> newTmpVect;
                for(deque<TreeNode*>::iterator idx = depthQueue.begin(); idx < depthQueue.end(); idx++)
                {
                    if(*idx == NULL)
                    {
                        newTmpVect.push_back(string(""));
                    }
                    else
                    {
                        newTmpVect.push_back(to_string((*idx)->val));
                    }
                    newTmpVect.push_back("");
                }
                newTmpVect.erase(newTmpVect.end()-1);
                result.push_back(newTmpVect);
            } else 
            {
                break;
            }
        }
        return result;
    }
};