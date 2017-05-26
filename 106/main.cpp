#include <iostream>
#include "Solution.h"

using namespace std;

void dispTree(TreeNode * r) {
	if(r != NULL){
		dispTree(r->left);
		dispTree(r->right);
		cout<<r->val<<" ";
	}
}

int main() {
	Solution s;
	vector<int> inorder;
	vector<int> postOrder;
	int inorderArr[5] = {4,2,5,1,3};
	int postorderArr[5] = {4,5,2,3,1};
	for(unsigned int i = 0; i<5; i++) {
		inorder.push_back(inorderArr[i]);
		postOrder.push_back(postorderArr[i]);
	}
	TreeNode * root = s.buildTree(inorder, postOrder);
	dispTree(root);
	return 0;
}
