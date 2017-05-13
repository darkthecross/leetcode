#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
		if(heights.empty()){
			return 0;
		}
        int largestArea = 0;
		vector<int> lessFromLeft(heights.size());
		vector<int> lessFromRight(heights.size());
		lessFromLeft[0] = -1;
		lessFromRight[heights.size() - 1] = heights.size();
		for(int i = 1; i<heights.size(); i++) {
			int p = i-1;
			while(heights[p]>=heights[i] && p>=0){
				p = lessFromLeft[p];
			}
			lessFromLeft[i] = p;
		}
		for(int i = heights.size()-2; i>=0; i--) {
			int p = i+1;
			while(heights[p]>=heights[i] && p<heights.size()){
				p = lessFromRight[p];
			}
			lessFromRight[i] = p;
		}
		for(int i = 0; i < heights.size(); i++) {
			if(heights[i]*(lessFromRight[i] - lessFromLeft[i]-1)>largestArea) {
				largestArea = heights[i]*(lessFromRight[i] - lessFromLeft[i]-1);
			}
		}
		return largestArea;
    }
};