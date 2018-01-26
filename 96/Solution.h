#include <vector>
#include <iostream>
#include <map>
using namespace std;

class Solution {
private:
	map<int, int> res;

public:
	Solution(){
		res[0] = 1;
		res[1] = 1;
	}
    int numTrees(int n) {
		if(n <= 0)
		{
			return 1;
		}
		else if(res.count(n))
		{
			return res[n];
		}
		else
		{
			int tbr = 0;
			for(size_t i = 1; i<=n; i++)
			{
				tbr += numTrees(i-1) * numTrees(n-i);
			}
			res[n] = tbr;
			return tbr;
		}
    }
};
