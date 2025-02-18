// link: https://leetcode.com/problems/palindrome-linked-list/

#include <iostream>
#include <stack>
#include <vector>
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
    bool isPalindrome(ListNode* head) {
        stack <int> comp;
        ListNode *ptr = new ListNode;
        ptr = head;
        while (ptr)
        {
            comp.push(ptr->val);
            ptr = ptr->next;
        }
        while(head)
        {
            if(head->val != comp.top()) {
                return false;
            }
            head = head->next;
            comp.pop();
        }
        return true;
    }
};