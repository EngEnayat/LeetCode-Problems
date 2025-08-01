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
        ListNode *detectCycle(ListNode *head) {
            if(!head || !head->next) return nullptr;
            unordered_map<ListNode*, int> cycle;
            ListNode* temp = head;
            while(temp)
            {
                if(cycle.count(temp)) return temp;
                cycle[temp] = temp->val;
                temp = temp->next;
            }
            return nullptr;
        }
    };