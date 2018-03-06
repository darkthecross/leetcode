#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<pair<char, int>> tasks_vec;
        for(int i = 0; i<26; i++)
        {
            tasks_vec.push_back( pair<char, int>('A'+i, 0) );
        }
        vector<int> cd(26, 0);
        for(auto i :tasks)
        {
            tasks_vec[i-'A'].second += 1;
        }
        int count = 0;
        sort(tasks_vec.begin(), tasks_vec.end(), [](pair<char, int>a, pair<char, int>b){return a.second>b.second;});
        while(tasks_vec[0].second)
        {
            for(int i = 0; i<cd.size(); i++)
            {
                if(cd[i]>0)
                {
                    cd[i]--;
                }
            }
            char avaliable = '0';
            auto it = tasks_vec.begin();
            for(; it < tasks_vec.end(); it++)
            {
                if(it->second > 0 && cd[it->first-'A'] == 0)
                {
                    avaliable = it->first;
                    break;
                }
            }
            if(avaliable != '0')
            {
                it->second--;
                cd[it->first-'A'] = n+1;
            }
            sort(tasks_vec.begin(), tasks_vec.end(), [](pair<char, int>a, pair<char, int>b){return a.second>b.second;});
            count++;
        }
        return count;
    }
};
