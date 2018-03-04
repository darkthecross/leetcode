#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> dp;
        for(int i = 0; i<=word1.length(); i++)
        {
            dp.push_back(vector<int>(word2.length()+1, 0));
        }
        for(int i = 0; i<=word1.length(); i++)
        {
            for(int j = 0; j<=word2.length(); j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    int m = max(dp[i-1][j], dp[i][j-1]);
                    int eq = (word1[i-1] == word2[j-1])?1:0;
                    dp[i][j] = max(dp[i-1][j-1]+eq, m);
                }
            }
        }
        return word1.length()+word2.length()-(dp[word1.length()][word2.length()])*2;
    }
};
