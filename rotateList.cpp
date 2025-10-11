/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            if(!head || !head->next) return head;
            int len=0;
            ListNode* temp = head;
            while(temp){len++; temp = temp->next;}
            if(k % len == 0) return head;
            int needed = (k > len ? k % len: k); // rotation needed
            temp = head;
            int  count =0;
            while(len - count -1 != needed && temp){count++; temp = temp->next;}
            cout << temp->val;
            ListNode* tail = temp; temp = temp->next;
            tail->next = nullptr;
            ListNode* t = temp;
            while(temp->next){temp = temp->next;}
            temp->next = head;
            return t;
        }
    };