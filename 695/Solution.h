#include <iostream>
#include <vector>
#include <string>
#include <deque>
#include <stack>

using namespace std;

typedef struct coord{
    int x;
    int y;
    coord(int xx, int yy){x = xx; y = yy;}
}Coord;

class Solution {
public:
    int maxAreaOfIsland(vector< vector<int> >& grid) {
        vector< vector<int> > explored;
        if (grid.size() == 0 || grid[0].size() == 0)
        {
            return 0;
        }
        for( int i = 0; i<grid.size(); i++ )
        {
            explored.push_back( vector<int>(grid[i].size(), 0) );
        }
        int max_area = 0;
        for( int i = 0; i<grid.size(); i++ )
        {
            for( int j = 0; j<grid[0].size(); j++ )
            {
                if( grid[i][j] == 1 && explored[i][j] == 0 )
                {
                    int cur_area = coundAreaSize(grid, explored, i, j);
                    max_area = max_area<cur_area?cur_area:max_area;
                }
            }
        }
        return max_area;
    }
    int coundAreaSize(vector< vector<int> >& grid, vector< vector<int> >& explored, int x, int y){
        int a = 1;
        int w = grid[0].size();
        int h = grid.size();
        explored[x][y] = 1;
        stack<Coord> s;
        if(y-1>=0 && explored[x][y-1] == 0 )
        {
            s.push(Coord(x, y-1));
        }
        if(y+1<w && explored[x][y+1] == 0)
        {
            s.push(Coord(x, y+1));
        }
        if(x-1>=0 && explored[x-1][y] == 0)
        {
            s.push(Coord(x-1, y));
        }
        if(x+1<h && explored[x+1][y] == 0 )
        {
            s.push( Coord(x+1, y) );
        }
        while(!s.empty())
        {
            Coord curCoord = s.top();
            s.pop();
            if( grid[curCoord.x][curCoord.y] == 0 || explored[curCoord.x][curCoord.y] == 1)
            {
                continue;
            }
            else
            {
                a += 1;
                explored[curCoord.x][curCoord.y] = 1;
                if(curCoord.y-1>=0 && explored[curCoord.x][curCoord.y-1] == 0 )
                {
                    s.push(Coord(curCoord.x, curCoord.y-1));
                }
                if(curCoord.y+1<w && explored[curCoord.x][curCoord.y+1] == 0)
                {
                    s.push(Coord(curCoord.x, curCoord.y+1));
                }
                if(curCoord.x-1>=0 && explored[curCoord.x-1][curCoord.y] == 0)
                {
                    s.push(Coord(curCoord.x-1, curCoord.y));
                }
                if(curCoord.x+1<h && explored[curCoord.x+1][curCoord.y] == 0 )
                {
                    s.push( Coord(curCoord.x+1, curCoord.y) );
                }
            }
        }
        return a;
    }
};