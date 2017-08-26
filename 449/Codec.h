#include <iostream>
#include <vector>
#include <string>
#include <utility>
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
        if(root == NULL)
        {
            return string("");
        }
        else
        {
            string tbr = to_string(root->val);
            if(root->left != NULL)
            {
                tbr += string(" ");
                tbr += serialize(root->left);
            }
            if(root->right != NULL)
            {
                tbr += string(" ");
                tbr += serialize(root->right);
            }
            return tbr;
        }
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data == "")
        {
            return NULL;
        }
        else
        {
            vector<int> dVec;
            for(size_t i = 0; i<data.size();)
            {
                int tmpInt = 0;
                while(data[i] >= '0' && data[i] <= '9' )
                {
                    tmpInt *= 10;
                    tmpInt += data[i] - '0';
                    i++;
                }
                dVec.push_back( tmpInt );
                i++;
            }
            return helper(dVec, 0, dVec.size());
        }
    }

    TreeNode * helper(vector<int> & dataVec, size_t startPos, size_t endPos){
        if(dataVec.empty() || startPos >= endPos)
        {
            return NULL;
        }
        else
        {
            vector<int>::iterator idx = dataVec.begin();
            TreeNode * rt = new TreeNode(*(idx + startPos));
            size_t newDivide = startPos+1;
            while( newDivide < dataVec.size() && dataVec[newDivide] < rt->val )
            {
                newDivide ++;
            }
            rt->left = helper(dataVec, startPos + 1, newDivide);
            rt->right = helper(dataVec, newDivide, endPos);
            return rt;
        }
    }

};

// Codec codec;
// codec.deserialize(codec.serialize(root));