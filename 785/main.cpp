#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    Solution s;
    vector<vector<int>> img {{1,3}, {0,2}, {1,3}, {0,2}};
    cout<<s.isBipartite(img)<<endl;
    vector<vector<int>> graph {{1,2,3}, {0,2}, {0,1,3}, {0,2}};
    cout<<s.isBipartite(graph)<<endl;
    return 0;
}
