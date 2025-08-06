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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            if(!head) return nullptr;
            ListNode* ptr1 = head;
            ListNode* ptr2 = head;
            for(int i=0; i<n-1;i++)
            {
                if(!ptr2->next) return nullptr;
                ptr2 = ptr2->next;
            }
            if(!ptr2->next) return ptr1->next;
            ptr2 = ptr2->next;
            while(ptr2)
            {
                if(!ptr2->next)
                {
                    ptr1->next = ptr1->next->next;
                    return head;
                }
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            return nullptr;
        }
    };