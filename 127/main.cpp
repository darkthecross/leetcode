#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
	Solution s;
	vector<string> wordList;
	wordList.push_back(string("hot"));
	wordList.push_back(string("dot"));
	wordList.push_back(string("dog"));
	wordList.push_back(string("lot"));
	wordList.push_back(string("log"));
	wordList.push_back(string("cog"));



	wordList.clear();
	wordList.push_back("a");
	wordList.push_back("b");
	wordList.push_back("c");
	
	string beginWord("a");
	string endWord("c");

	cout<<s.ladderLength(beginWord, endWord, wordList)<<endl;
	return 0;
}

