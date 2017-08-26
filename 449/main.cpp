#include "Codec.h"
using namespace std;

int main(){
    TreeNode * root = new TreeNode(3);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(1);
    root->right->left = new TreeNode(4);
    Codec tmpC;
    string tmpRes = tmpC.serialize(root);
    cout<<tmpRes<<endl;
    TreeNode * newRoot = tmpC.deserialize(tmpRes);
    cout<<newRoot->left->val<<endl;
    cout<<newRoot->right->left->val<<endl;
    return 0;
}

