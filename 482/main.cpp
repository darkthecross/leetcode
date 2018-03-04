#include "Solution.h"
using namespace std;

int main(){
    Solution s;
    string a("5F3Z-2e-9-w");
    cout<<s.licenseKeyFormatting(a, 4)<<endl;
    cout<<s.licenseKeyFormatting(a, 3)<<endl;
    return 0;
}
