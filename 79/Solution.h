#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if(word == string(""))
        {
            return true;
        }
        if(board.size() == 0)
        {
            return false;
        }
        for(int i = 0; i<board.size(); i++)
        {
            for(int j = 0; j<board[i].size(); j++)
            {
                if(board[i][j] == word[0])
                {
                    bool found = exist(board, vector<vector<int>>{{i,j}}, word.substr(1), i, j);
                    if(found)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool exist(vector<vector<char>>& board, vector<vector<int>> previous, string word, int xx, int yy)
    {
        if(word.length() == 0)
        {
            return true;
        }
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> nexts {{xx-1, yy}, {xx, yy-1}, {xx+1, yy}, {xx, yy+1}};
        bool found = false;
        for(auto coord : nexts)
        {
            if(coord[0]>= 0 && coord[0]<m && coord[1]>=0 && coord[1]<=n && board[coord[0]][coord[1]] == word[0] && find(previous.begin(), previous.end(), coord)==previous.end())
            {
                vector<vector<int>> newPrev = previous;
                newPrev.push_back(coord);
                found = found || exist(board, newPrev, word.substr(1), coord[0], coord[1]);
            }
        }
        return found;
    }
};
