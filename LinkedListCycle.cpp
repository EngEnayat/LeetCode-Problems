/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    public:
        bool hasCycle(ListNode *head) {
            if(!head || !head->next) return false;
            unordered_set<ListNode*> s;
            ListNode* temp = head;
            while(temp)
            {
                if(s.count(temp))return true;
                else if(!temp->next) return false;
                s.insert(temp);
                temp = temp->next;
            }
            return false;
        }
    };