#include <iostream>
using namespace std;

class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if(x == 0 || y == 0) {
            return z == 0 || z == x || z == y;
        } else if(z > x + y) {
            return false;
        } else {
            return z==0 || z%gcd(x,y) == 0;
        }
    }

    int gcd(int x, int y) {
        if(x == y) {
            return x;
        } else if(x < y) {
            if(y%x == 0) {
                return x;
            } else {
                return gcd(x, y%x);
            }
        } else {
            if(x%y == 0) {
                return y;
            } else {
                return gcd(x%y, x);
            }
        }
    }
};