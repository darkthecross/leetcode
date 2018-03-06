#include <iostream>
#include "Solution.h"

using namespace std;

int main() {

	Solution s;
	vector<int> primes{2,7,13,19};
	cout<<s.nthSuperUglyNumber(12, primes)<<endl;
	cout<<s.nthSuperUglyNumber(10, primes)<<endl;
	return 0;
}
