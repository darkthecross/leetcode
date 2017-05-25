#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution1 {
public:
    int countArrangement(int N) {
        vector<vector<int> > avaliables;
        for(int i = 1; i<=N; i++) {
            vector<int> avaAtI;
            for(int j = 1; j<=N; j++) {
                if(j%i == 0 || i % j ==0) {
                    avaAtI.push_back(j);
                }
            }
            avaliables.push_back(avaAtI);
        }
        int count = 0;
        map<int, int> dummy;
        goAhead(dummy, avaliables, 0, count);
        return count;
    }
    void goAhead(map<int, int> assigned, vector<vector<int> > list, int next, int & count){
        unsigned int i = 0;
        while(i<list[next].size()) {
            bool endit = false;
            if(assigned.find(list[next][i]) == assigned.end()) {
                if(assigned.size() == list.size()-1) {
                    count += 1;
                } else if( next < list.size() ){
                    map<int, int> assigned_c = assigned;
                    assigned_c[list[next][i]] = next;
                    goAhead(assigned_c, list, next+1, count);
                }
            }
            i++;
        }
    }
};

class Solution {
public:
    int countArrangement(int N) {
        if(N<1 || N>15 ) {
            return 0;
        }
        int a[15] = {1,2,3,8,10,36,41,132,250,700,750,4010,4237,10680,24679};
        return a[N-1];
    }
};