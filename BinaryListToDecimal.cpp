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
        int getDecimalValue(ListNode* head) {
            if(!head) return 0;
            string val = "";
            while(head)
            {
                val+=to_string(head->val);
                head = head->next;
            }
            long long res = 0;
            for(int i=0 ; i< val.size();i++)
            {
                int index = val.size() - 1 - i;
                int temp = pow(2, i) * (val[index]- '0');
                res+= temp;
            }
            return res;
        }
    };