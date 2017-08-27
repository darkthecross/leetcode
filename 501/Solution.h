#include <iostream>
#include <vector>
#include <map>
#include "stdlib.h"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        map< int, int > count;
        vector<int> result;
        int max_count = 0;

        fetch(root, count, max_count);

        for( map<int, int>::iterator idx = count.begin(); idx != count.end(); idx++ )
        {
            //cout<<"pair: "<<idx->first<<", "<<idx->second<<endl;
            if(idx->second == max_count)
            {
                result.push_back(idx->first);
            }
        }
        return result;
    }

    void fetch(TreeNode * rt, map< int, int > &c, int &mc)
    {
        if(rt == NULL)
        {
            return;
        }
        else if(c.count(rt->val))
        {
            c[rt->val] += 1;
        } else 
        {
            c[rt->val] = 1;
        }
        if(c[rt->val] > mc)
        {
            mc = c[rt->val];
        }
        fetch( rt->left, c, mc );
        fetch( rt->right, c, mc );
    }
};