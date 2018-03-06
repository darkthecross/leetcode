#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int> p1_;
        vector<int> p0_;
        vector<int> p0;
        if( (p1[0]+p2[0] == p3[0] + p4[0]) && (p1[1]+p2[1] == p3[1] + p4[1]) )
        {
            p1_ = p2;
            p0 = p3;
            p0_ = p4;
        }
        else if( (p1[0]+p3[0] == p2[0] + p4[0]) && (p1[1]+p3[1] == p2[1] + p4[1]) )
        {
            p1_ = p3;
            p0 = p2;
            p0_ = p4;
        }
        else if( (p1[0]+p4[0] == p2[0] + p3[0]) && (p1[1]+p4[1] == p3[1] + p2[1]) )
        {
            p1_ = p4;
            p0 = p3;
            p0_ = p2;
        }
        else
        {
            return false;
        }
        if( (p1[0]-p1_[0]) * (p1[0]-p1_[0]) + (p1[1]-p1_[1]) * (p1[1]-p1_[1]) != (p0[0]-p0_[0]) * (p0[0]-p0_[0]) + (p0[1]-p0_[1]) * (p0[1]-p0_[1]) )
        {
            return false;
        }
        if( (p1[0]-p0[0]) * (p1[0]-p0[0]) + (p1[1]-p0[1]) * (p1[1]-p0[1]) != (p1[0]-p0_[0]) * (p1[0]-p0_[0]) + (p1[1]-p0_[1]) * (p1[1]-p0_[1]) )
        {
            return false;
        }
        if( p1 == p0 )
        {
            return false;
        }
        return true;
    }
};
