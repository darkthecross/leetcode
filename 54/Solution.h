#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
	Solution(){this->test = 1;}

	int test;
    vector<int> spiralOrder(vector< vector<int> >& matrix) {
		int cols = 0;
		int rows = 0;
		rows = matrix.size();
		vector<int> res;
		if(rows == 0) {
			return res;
		} else {
			cols = matrix[0].size();
			if(cols == 0) {
				return res;
			}
		}
		int cursor_r = 0;
		int cursor_c = 0;
		int bound_r_l = 0;
		int bound_r_h = rows-1;
		int bound_c_l = 0;
		int bound_c_h = cols-1;
		//0 for right, 1 for down, 2 for left, 3 for top
		int dir = 0;
		res.push_back(matrix[cursor_r][cursor_c]);
		while(res.size() < cols * rows){
			switch(dir){
					case 0:{
								if(cursor_c + 1 > bound_c_h){
									bound_r_l += 1;
									dir = 1;
								} else {
									cursor_c += 1;
									res.push_back(matrix[cursor_r][cursor_c]);
								}
								break;
						   }
					case 1:{
								if(cursor_r + 1 > bound_r_h){
									bound_c_h -= 1;
									dir = 2;
								} else {
									cursor_r += 1;
									res.push_back(matrix[cursor_r][cursor_c]);
								}
								break;
						   }
					case 2:{
								if(cursor_c - 1 < bound_c_l){
									bound_r_h -= 1;
									dir = 3;
								} else {
									cursor_c -= 1;
									res.push_back(matrix[cursor_r][cursor_c]);
								}
								break;
						   }
					case 3:{
								if(cursor_r - 1 < bound_r_l){
									bound_c_l += 1;
									dir = 0;
								} else {
									cursor_r -= 1;
									res.push_back(matrix[cursor_r][cursor_c]);
								}
								break;
						   }
			}
		}
		return res;
	}
};
