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
        ListNode* deleteMiddle(ListNode* head) {
            if(!head || !head->next) return nullptr;
            ListNode* temp = head;
            int index = 0;
            while(temp){
                temp = temp->next;
                index++;
            }
            temp = head;
            for(int i=0; i< index /2 -1;i++)
            {
                temp = temp->next;
            }  
            temp->next = temp->next->next;
            return head;
        }
    };