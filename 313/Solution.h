#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> us(1, 1);
        if(n == 1)
        {
            return 1;
        }
        vector<int> idx(primes.size(), 0);
        for(int i = 1; i<n; i++)
        {
            int lb = us.back();
            int nxt = INT_MAX;
            for(int j =0; j<primes.size(); j++)
            {
                nxt = min(nxt, primes[j] * us[idx[j]]);
            }
            for(int j =0; j<primes.size(); j++)
            {
                idx[j] += (nxt == us[idx[j]] * primes[j]);
            }
            us.push_back(nxt);
        }
        return us.back();
    }
};
