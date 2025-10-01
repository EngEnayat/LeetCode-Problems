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
        ListNode* reverseKGroup(ListNode* head, int k) {
            if(!head) return nullptr;
            ListNode *temp = head;
            vector<ListNode*> res;
            while(temp)
            {
                res.push_back(temp);
                temp = temp->next;
            }
            for(int i=0; i+k <= res.size(); i+=k)
            {
                reverse(res.begin() + i, res.begin() + i + k);
            }
            for(int i=0; i< res.size()-1; i++)
            {
                res[i]->next = res[i+1];
            }
            res[res.size()-1]->next = nullptr;
    
            head = res[0];
            temp = head;
            for(int i=1; i< res.size(); i++)
            {
                temp->next = res[i];
                temp = temp->next;
            }
            return head;
        }
    };
    