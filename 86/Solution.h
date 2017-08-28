#include <vector>
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
		ListNode * l = NULL;
		ListNode * lp = NULL;
		ListNode * gp = NULL;
		ListNode * g = NULL;
		ListNode * p = head;
		if(!p)
		{
			return NULL;
		}
		while(p)
		{
			if(p->val < x)
			{
				if(l == NULL)
				{
					l = p;
					lp = p;
				}
				else
				{
					lp->next = p;
					lp = p;
				}
			}
			else
			{
				if(g == NULL)
				{
					g = p;
					gp = p;
				}
				else
				{
					gp->next = p;
					gp = p;
				}
			}
			p = p->next;
		}
		if(lp)
		{
			lp->next = g;
		}
		else
		{
			l = g;
		}
		if(gp)
		{
			gp->next = NULL;
		}
		return l;
    }
};