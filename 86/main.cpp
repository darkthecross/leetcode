#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
	Solution s;
	ListNode * r = new ListNode(1);

	ListNode * p = r;
	while(p)
	{
		cout<<p->val<<" ";
		p = p->next;
	}
	cout<<endl;

	ListNode * q = s.partition(r,0);

	p = q;
	while(p)
	{
		cout<<p->val<<" ";
		p = p->next;
	}
	cout<<endl;

	return 0;

}
