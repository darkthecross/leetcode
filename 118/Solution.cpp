#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        if(numRows <= 0){
			vector<vector<int> > res;
			return res;
		} else if(numRows == 1){
			vector<vector<int> > res;
			vector<int> res0;
			res0.push_back(1);
			res.push_back(res0);
			return res;
		} else {
			vector<vector<int> > res_1 = generate(numRows-1);
			int last_row = numRows-2;
			vector<int> last_row_vect;
			last_row_vect.push_back(1);
			for(int i = 0; i< res_1[last_row].size()-1; i++) {
				last_row_vect.push_back(res_1[last_row][i] + res_1[last_row][i+1]);
			}
			last_row_vect.push_back(1);
			res_1.push_back(last_row_vect);
			return res_1;
		}
    }
};