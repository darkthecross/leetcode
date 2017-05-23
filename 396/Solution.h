#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        //vector<int> f;
        int sum = 0;
        int f0 = 0;
        unsigned int n = A.size();
        for(unsigned int i = 0; i<n; i++) {
            f0 += A[i]*i;
            sum += A[i];
        }
        //f.push_back(f0);
        int maxVal = f0;
        if(A.size() == 0) { return 0; }
        if(A.size() == 1) { return f0; }
        for(unsigned int i = 1; i<n; i++) {
            f0 = f0 - int(n)*A[n-i] + sum;
            if(f0 > maxVal) {
                maxVal = f0;
            }
        }
        return maxVal;
    }
};