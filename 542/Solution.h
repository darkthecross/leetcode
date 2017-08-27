#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > adj;

    Solution(){
        int v[] = {-1, 0};
        adj.push_back( vector<int> (begin(v), end(v)) );
        v[0] = 1;
        adj.push_back( vector<int> (begin(v), end(v)) );
        v[0] = 0;
        v[1] = -1;
        adj.push_back( vector<int> (begin(v), end(v)) );
        v[1] = 1;
        adj.push_back( vector<int> (begin(v), end(v)) );
    }

    vector<vector<int> > updateMatrix(vector<vector<int> >& matrix) {
        int iterCount = matrix.size() + matrix[0].size();
        bool updated = true;
        while(updated)
        {
            updated = false;
            for(size_t i = 0; i<matrix.size(); i++)
            {
                for(size_t j = 0; j<matrix[0].size(); j++)
                {
                    int adjp1 = adjacent_min(i,j,matrix) + 1;
                    if(matrix[i][j] && matrix[i][j] != adjp1 )
                    {
                        matrix[i][j] = adjp1;
                        updated = true;
                    }
                }
            }
        }
        return matrix;
    }

    int adjacent_min(int i, int j, vector< vector<int> > & mat)
    {
        int adjmin = INT_MAX;
        for(size_t k = 0; k<4; k++)
        {
            if( i+adj[k][0] >= 0 && i+adj[k][0] <mat.size() && j+adj[k][1] >= 0 && j+adj[k][1] <mat[0].size() )
            {
                adjmin = min(adjmin, mat[i+adj[k][0]][j+adj[k][1]]);
            }
        }
        return adjmin;
    }
};
