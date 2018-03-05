#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 struct Interval {
     int start;
     int end;
     Interval() : start(0), end(0) {}
     Interval(int s, int e) : start(s), end(e) {}
 };

class Solution {
public:
    vector<int> findRightInterval(vector<Interval>& intervals) {
        map<int, int> startRec;
        for(int i = 0; i<intervals.size(); i++)
        {
            startRec.insert(pair<int, int>(intervals[i].start, i));
        }
        vector<int> result(intervals.size(), -1);
        for(int i = 0; i<intervals.size(); i++)
        {
            map<int, int>::iterator it = startRec.find(intervals[i].end);
            if(it != startRec.end())
            {
                result[i] = it->second;
            }
            else
            {
                it = startRec.upper_bound(intervals[i].end);
                if(it != startRec.end())
                {
                    result[i] = it->second;
                    startRec.insert(pair<int, int>(intervals[i].end, it->second));
                }
            }
        }
        return result;
    }
};
