#include <vector>
#include <iostream>
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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.empty()) {
			return NULL;
		} else {
			TreeNode * root = new TreeNode(postorder.back());
			unsigned int pos = 0;
			unsigned int size = inorder.size();
			for(unsigned int i = 0; i<inorder.size(); i++) {
				if(inorder[i] == postorder.back()) {
					pos = i;
					break;
				}
			}
			//vector<int> leftInorder(inorder.begin(), inorder.begin()+pos);
			vector<int> rightInorder(inorder.begin()+pos+1, inorder.end());
			inorder.resize(pos);
			//vector<int> leftPostorder(postorder.begin(), postorder.begin()+pos);
			vector<int> rightPostorder(postorder.begin()+pos, postorder.end()-1);
			postorder.resize(pos);

			root->left = buildTree(inorder, postorder);
			root->right = buildTree(rightInorder, rightPostorder);
			return root;
		}
    }
};
