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
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            if(!l1 || !l2) return !l1 ? l2 : l1;
            l1 = reverseN(l1);
            l2 = reverseN(l2);
    
            ListNode* dummy = new ListNode(0);
            ListNode *temp = dummy;
    
            int carry =0;
            while(l1 || l2 || carry)
            {
                int sum = carry;
                if(l1){
                    sum += l1->val;
                    l1 = l1->next;
                }
                if(l2){
                    sum+= l2->val;
                    l2 = l2->next;
                }
                carry = sum /10;
                temp->next = new ListNode(sum %10);
                temp = temp->next;
            }
    
            dummy = reverseN(dummy->next);
            return dummy;
        }
        ListNode* reverseN(ListNode* l)
        {
            if(!l || !l->next) return l;
            ListNode* tail = l->next;
            ListNode* newHead = reverseN(l->next);
            tail->next = l;
            l->next = nullptr;
            return newHead;
        }
    };
    
    