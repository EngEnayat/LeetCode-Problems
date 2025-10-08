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
        void reorderList(ListNode* head) {
            if(!head || !head->next) return;
            stack<ListNode*> st;
            ListNode* temp = head;
            while(temp){st.push(temp); temp = temp->next;}
            int s = st.size();
            for(int i=0; i<s/2; i++)
            {
                ListNode* temp = st.top();
                st.pop();
                temp->next = head->next;
                head->next = temp;
                head = head->next->next;
            }
            head->next = nullptr;
        }
    };