#include <iostream>

/**
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/**
 * Definition for a binary tree node.
 */
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *sortedListToBST(ListNode *head)
    {
        // Count length of the list. 
        int list_len = 0;
        auto* p = head;
        while(p != nullptr) {
            p = p->next;
            list_len++;
        }
        if (list_len == 0) {
            return nullptr;
        } else if (list_len == 1) {
            return new TreeNode(head->val);
        } else {
            // Find the middle node of the list.
            int mid = list_len / 2, id=0;
            p = head;
            auto* q = head;
            while(id < mid) {
                p = p->next;
                while (q->next != p) {
                    q = q->next;
                }
                ++id;
            }
            // Get two new linked lists
            q->next = nullptr;
            auto* r = p->next;
            auto tree_root = new TreeNode(p->val, sortedListToBST(head), sortedListToBST(r));
            return tree_root;
        }
    }
};