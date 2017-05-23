#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        vector<int> sumRec;
        int tmpn = n;
        vector<int>::iterator pos;
        pos = find(sumRec.begin(), sumRec.end(), tmpn);
        while(pos == sumRec.end()){
            sumRec.push_back(tmpn);
            tmpn = nextHappy(tmpn);
            pos = find(sumRec.begin(), sumRec.end(), tmpn);         
        }
        return *pos==1;
    }
    int nextHappy(int n) {
        int result = 0;
        int tmpn = n;
        while(tmpn>0) {
            result += (tmpn%10)*(tmpn%10);
            tmpn /= 10;
        }
        return result;
    }
};