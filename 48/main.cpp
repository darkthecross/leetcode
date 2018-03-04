#include <iostream>
#include "Solution.h"

using namespace std;

int main(){
    Solution s;
    vector<int> temp = {64,40,49,73,72,35,68,83,35,73,84,88,96,43,74,63,41,95,48,46,89,72,34,85,72,59,87,49,30,32,47,34,74,58,31,75,73,88,64,92,83,64,100,99,81,41,48,83,96,92,82,32,35,68,68,92,73,92,52,33,44,38,47,88,71,50,57,95,33,65,94,44,47,79,41,74,50,67,97,31,68,50,37,70,77,55,48,30,77,100,31,100,69,60,47,95,68,47,33,64};
    vector<int> result = s.dailyTemperatures(temp);
    for(int i = 0;i<result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}
