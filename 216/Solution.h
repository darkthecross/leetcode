#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int> > combinationSum3(int k, int n) {
		return combinationSum3ll(k, n, 1);
    }

	vector<vector<int> > combinationSum3ll(int k, int n, int lower) {
		vector<vector<int> > result;
        if(k > 9 || k <1 || n < k*(k+1)/2+k*(lower-1) || n > k*10-k*(k+1)/2) {
			return result;
		} else if (k == 1 && lower <= n && n <= 9 ) {
			vector<int> subres;
			subres.push_back(n);
			result.push_back(subres);
			return result;
		} else {
			for (int i = lower; i <= n; i++) {
				vector<vector<int> > subResult = combinationSum3ll(k-1, n-i, i+1);
				for(int j = subResult.size()-1; j >= 0; j--) {
					vector<int> pushResult;
					pushResult.push_back(i);
					for(vector<int>::iterator idx = subResult[j].begin(); idx < subResult[j].end(); idx ++ ) {
						pushResult.push_back(*idx);
					}
					result.push_back(pushResult);
				}
			}
			return result;
		}
	}

};