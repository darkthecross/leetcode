#include <iostream>
#include "Codec.h"

using namespace std;

int main() {

	TreeNode * root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->right->left = new TreeNode(4);
	root->right->right = new TreeNode(5);

	Codec codec;
	cout<<codec.serialize(root)<<endl;
	TreeNode * recover = codec.deserialize(codec.serialize(root));
	cout<<codec.serialize(recover)<<endl;
	return 0;
}