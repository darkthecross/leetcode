#include <iostream>
#include <vector>
#include <string>
#include "stdlib.h"
using namespace std;

class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> result;

        vector<vector<int> > list;

        for(int i = 0; i<=5; i++) {
            vector<int> ati;
            for(int j = 0; j<=59; j++) {
                int flag = 1;
                int bitCount = 0;
                while(flag <= j && bitCount<=i) {
                    if(flag & j) {
                        bitCount ++ ;
                    }
                    flag = flag<<1;
                }
                if(bitCount == i) {
                    ati.push_back(j);
                }
            }
            list.push_back(ati);
        }

        for(int i = ((0<(num-5))?(num-5):0); i<=(num<4?num:4); i++) {
            vector<string> h = hours(list[i]);
            vector<string> m = minutes(list[num-i]);
            for(unsigned int j = 0;j<h.size(); j++) {
                for(unsigned int k = 0; k<m.size(); k++) {
                    result.push_back(h[j] + ":" + m[k]);
                }
            }
        }
        return result;
    }

    vector<string> hours(vector<int> list) {
        vector<string> res;
        for(unsigned int i = 0; i<list.size(); i++) {
            if(list[i]<=11) {
                res.push_back(to_string(list[i]));
            }
        }
        return res;
    }

    vector<string> minutes(vector<int> list) {
        vector<string> res;
        for(unsigned int i = 0; i<list.size(); i++) {
            if(list[i]<10) {
                res.push_back("0" + to_string(list[i]));
            } else {
                res.push_back(to_string(list[i]));
            }
        }
        return res;
    }
};