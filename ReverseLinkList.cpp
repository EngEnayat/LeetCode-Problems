// link: https://leetcode.com/problems/reverse-linked-list/description/
#include <iostream>
#include <stack>
using namespace std;
//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        //if(head->next == NULL) return head;
        stack<int> rev;
        ListNode *ptr = new ListNode;
        ptr = head;
        while(head)
        {
            rev.push(head->val);
            head = head->next;
        }
        head = ptr;
        while(ptr)
        {
            ptr->val = rev.top();
            ptr = ptr->next;
            rev.pop();
        }
        return head;
    }
};