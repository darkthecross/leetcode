#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int result = 0;
        int nbit = 0;
        while(num>0)
        {
            int one = (num%2==0);
            num = num>>1;
            result |= one<<nbit;
            nbit++;
        }
        return result;
    }
};
