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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        s.insert(nums.begin(), nums.end());
        return Check(head);
    }
private:
    ListNode* Check(ListNode *head)
    {
        if(!head) return nullptr;
        if(s.count(head->val)) return Check(head->next);
        head->next = Check(head->next);
        return head;
    }
    unordered_set<int> s;
};