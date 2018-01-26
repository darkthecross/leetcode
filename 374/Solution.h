#include <iostream>
using namespace std;

int guess(int num)
{
    return num == 1702766719 ? 0 : abs(num - 1702766719) / (1702766719 - num);
}

class Solution {
public:
    int guessNumber(int n) {
        int lb = 1;
        int hb = n;
        int curNum = n/2;
        int guessRes = -1;

        if(guess(1) == 0)
        {
            return 1;
        } else if (guess(n) == 0)
        {
            return n;
        }

        while(guessRes != 0)
        {
            cout<<curNum<<" ";
            guessRes = guess(curNum);
            cout<<guessRes<<endl;
            if(guessRes == 0)
            {
                return curNum;
            }
            else if(guessRes == -1)
            {
                hb = curNum;
            }
            else if(guessRes == 1)
            {
                lb = curNum;
            }
            if(hb - lb == 2)
            {
                return lb+1;
            }
            curNum = lb + (hb - lb)/2;
        }
        return 0;
    }
};