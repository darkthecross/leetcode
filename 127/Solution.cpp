#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		vector<string> visited;
		vector<string> successor;
		vector<string> expand;
		successor.push_back(beginWord);
		vector<string>::iterator idx;
		int ladderLen = 1;
		while(wordList.size()>0) {
			for(unsigned int i = 0; i<successor.size(); i++) {
				for(idx = wordList.begin(); idx<wordList.end();) {
					if(isSuccessor(*idx, successor[i])){
						if(endWord == *idx){
							return ladderLen + 1;
						} else {
							expand.push_back(*idx);
							wordList.erase(idx);
						}
					} else {
						idx ++ ;
					}
				}
			}
			for(unsigned int i = 0; i< successor.size(); i++) {
				visited.push_back(successor[i]);
			}
			if(expand.size() == 0) {
				return 0;
			}
			successor.clear();
			successor.swap(expand);
			ladderLen += 1;
		}
		return 0;
	}
	bool isSuccessor(string a, string b){
		int diff = 0;
		if(a == b) {
			return false;
		}
		for(unsigned int i = 0; i<a.length(); i++){
			if(!(a[i] == b[i])){
				diff++;
				if(diff > 1) {
					return false;
				}
			}
		}
		return true;
	}
};