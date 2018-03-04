#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
	Solution s;
	TreeNode * rt = new TreeNode(5);
	rt->left = new TreeNode(4);
	rt->right = new TreeNode(8);
	rt->left->left = new TreeNode(11);
	rt->left->left->left = new TreeNode(7);
	rt->left->left->right = new TreeNode(2);
	rt->right->left = new TreeNode(13);
	rt->right->right = new TreeNode(4);
	rt->right->right->left = new TreeNode(5);
	rt->right->right->right = new TreeNode(1);
	vector<vector<int>> res = s.pathSum(rt, 22);
	for(int i = 0;i<res.size(); i++)
	{
		for( int j = 0; j<res[i].size(); j++ )
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
