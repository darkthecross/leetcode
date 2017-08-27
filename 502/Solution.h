#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include "stdlib.h"
using namespace std;

class Project
{
public:
    int p;
    int c;
    Project(){p=0; c=0;}
    Project(int pp, int cc){p = pp; c = cc;}
};

class Solution {
public:
    int findMaximizedCapital(int k, int W, vector<int>& Profits, vector<int>& Capital) {
        vector<Project> proj = sortArray(Profits, Capital);
        
        priority_queue<int> pp;

        int result = W;

        size_t i = 0;
        for(auto idx = proj.begin(); idx<proj.end() && idx->c <= W; idx = proj.erase(idx))
        {
            if( idx->p>0)
            {
                pp.push(idx->p);
            }
        }

        while( k-- && pp.size())
        {
            W += pp.top();
            pp.pop();
            for(auto idx = proj.begin(); idx<proj.end() && idx->c <= W; idx = proj.erase(idx))
            {
                if( idx->p>0)
                {
                    pp.push(idx->p);
                }
            }
        }
        return W;
    }

    vector<Project> sortArray(vector<int>& Profits, vector<int>& Capital)
    {
        vector<Project> result;
        for(size_t i = 0; i<Profits.size(); i++)
        {
            result.push_back( Project( Profits[i], Capital[i] ) );
        }
        sort(result.begin(), result.end(), [](Project a, Project b){return a.c<b.c;});
        return result;
    }
};