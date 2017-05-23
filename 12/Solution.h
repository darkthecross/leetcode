#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string intToRoman(int num) {
        string result("");
        int digits[4];
        digits[0] = num/1000;
        digits[1] = (num/100)%10;
        digits[2] = (num/10)%10;
        digits[3] = num%10;
        result.append(digitToStr(digits[0], 'A', 'B', 'M'));
        result.append(digitToStr(digits[1], 'M', 'D', 'C'));
        result.append(digitToStr(digits[2], 'C', 'L', 'X'));
        result.append(digitToStr(digits[3], 'X', 'V', 'I'));
        return result;
    }
    string digitToStr(int num, char ten, char five, char one) {
        string result("");
        if(num == 0) {
            return result;
        } else if(1<= num && num <= 3) {
            for(int i = 0; i<num; i++) {
                result.push_back(one);
            }
            return result;
        } else if(4 == num) {
            result.push_back(one);
            result.push_back(five);
            return result;
        } else if(5 == num) {
            result.push_back(five);
            return result;
        } else if(6 <= num && num <= 8) {
            result.push_back(five);
            for(int i = 0; i<num-5; i++) {
                result.push_back(one);
            }
            return result;
        } else {
            result.push_back(one);
            result.push_back(ten);
            return result;
        }
    }
};