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
struct Comp
{
   bool operator()(const ListNode* l1, const ListNode*l2) const
   {
       return l1->val >= l2->val;
   }
};
class Solution {
public:
   ListNode* mergeKLists(vector<ListNode*>& lists) {
       priority_queue<ListNode*, vector<ListNode*>, Comp> pq;
       for(ListNode* l: lists)
       {
           if(l)pq.push(l);
       }
       if(pq.empty()) return nullptr;
       ListNode dummy;
       ListNode* previous = &dummy;
       while(!pq.empty())
       {
           ListNode* top = pq.top();
           pq.pop();
           previous->next = top;
           previous = previous->next;
           if(previous->next) pq.push(previous->next);
       }
       previous->next = nullptr;
       return dummy.next;

   }
};