class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            if(!head) return nullptr;
            if(!head->next) return head;
            if(head->val != head->next->val)   
        {    
                head->next = deleteDuplicates(head->next);
                return head;
        }
           ListNode* temp = head->next;
           while(temp && temp->val == head->val)
           {
            temp = temp->next;
            if(!temp) return nullptr;
           }
           return deleteDuplicates(temp);
        }
    };