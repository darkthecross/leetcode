#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i = 1; i<=n; i++) {
            if(i%15 == 0) {
                result.push_back(string("FizzBuzz"));
            } else if(i%3 == 0) {
                result.push_back(string("Fizz"));
            } else if(i%5 == 0) {
                result.push_back(string("Buzz"));
            } else {
                result.push_back(to_string(i));
            }
        }
        return result;
    }
};