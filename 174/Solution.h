#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        if(dungeon.size() == 0 || dungeon[0].size() == 0)
        {
            return 1;
        }
        int m = dungeon.size();
        int n = dungeon[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for(int i = m-1; i>=0; i--)
        {
            for(int j = n-1; j>=0; j--)
            {
                if(i == m-1 && j == n-1)
                {
                    dp[i][j] = max(-dungeon[m-1][n-1]+1, 1);
                }
                else if(i == m-1)
                {
                    dp[i][j] = max(dp[i][j+1]-dungeon[i][j], 1);
                }
                else if(j == n-1)
                {
                    dp[i][j] = max(dp[i+1][j]-dungeon[i][j], 1);
                }
                else
                {
                    dp[i][j] = max(min(dp[i][j+1], dp[i+1][j])-dungeon[i][j], 1);
                }
            }
        }
        return dp[0][0];
    }
};
