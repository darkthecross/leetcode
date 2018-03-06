#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<char> tasks {'A','A','A','B','B','B'};
    cout<<s.leastInterval(tasks, 2)<<endl;
    return 0;
}
