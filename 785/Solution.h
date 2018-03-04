#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        if(graph.size()<=2)
        {
            return true;
        }
        vector<int> vertex(graph.size(), 0);
        vector<int>::iterator it = find(vertex.begin(), vertex.end(), 0);
        while(it != vertex.end())
        {
            bool colorOk = recurColor(graph, vertex, it-vertex.begin(), 1);
            if(!colorOk)
            {
                return false;
            }
            it = find(vertex.begin(), vertex.end(), 0);
        }
        return true;
    }
    bool recurColor(vector<vector<int>>& graph, vector<int>& vertex, int idx, int color)
    {
        if(vertex[idx] == 0)
        {
            vertex[idx] = color;
            for(auto i : graph[idx])
            {
                bool tmpOk = recurColor(graph, vertex, i, 3-color);
                if(!tmpOk)
                {
                    return false;
                }
            }
            return true;
        }
        else if(vertex[idx] == color)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
