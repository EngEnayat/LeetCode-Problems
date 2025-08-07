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
        ListNode* addTwoNumbers(ListNode* headA, ListNode* headB) {
            return add(headA, headB, 0);
        }        
    private:
        ListNode* add(ListNode* l1, ListNode* l2, int carr)
        {
            if(!l1 && !l2)
            {
                if(carr == 0) return nullptr;
                ListNode* h = new ListNode(carr);
                return h;
            };
            int sum = carr;
            if(l1) sum += l1->val;
            if(l2) sum+= l2->val;
            ListNode *head = new ListNode(sum % 10);
            head->next = add(l1 ? l1: nullptr, l2? l2 : nullptr, sum/10);
            return head;
        }
    };