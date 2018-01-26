#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid) {
		if(obstacleGrid.empty() || obstacleGrid[0].empty())
		{
			return 0;
		}
		for(size_t i = 0; i<obstacleGrid.size(); i++)
		{
			for(size_t j = 0; j<obstacleGrid[i].size(); j++)
			{
				if(i == 0 && j == 0)
				{
					if(obstacleGrid[i][j] == 1)
					{
						return 0;
					}
					else
					{
						obstacleGrid[i][j] = 1;
					}
				}
				else if(obstacleGrid[i][j] == 1)
				{
					obstacleGrid[i][j] = 0;
				}
				else
				{
					if(j == 0)
					{
						obstacleGrid[i][j] = obstacleGrid[i-1][j];
					}
					else if(i == 0)
					{
						obstacleGrid[i][j] = obstacleGrid[i][j-1];
					}
					else
					{
						obstacleGrid[i][j] = obstacleGrid[i][j-1] + obstacleGrid[i-1][j];
					}

				}
			}
		}
		return obstacleGrid.back().back();
    }
};