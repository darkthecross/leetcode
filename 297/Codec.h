#include <vector>
#include <iostream>
#include <string>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (root == NULL) {
			return "#";
		} else {
			return to_string(root->val) + "," + serialize(root->left) + "," + serialize(root->right);
		}
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
		return myDes(data);
    }

	TreeNode * myDes(string & data){
        if(data[0] == '#') {
			if(data.size()>1){
				data = data.substr(2);
			}
			return NULL;
		} else {
			TreeNode * tn = new TreeNode(getVal(data));
			tn->left = myDes(data);
			tn->right = myDes(data);
			return tn;
		}
	}

	int getVal(string& data) {
		int pos = data.find(',');
		int val = stoi(data.substr(0,pos));
		data = data.substr(pos+1);
		return val;
	}
};
