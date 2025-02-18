/*You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;
//  Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL || list2 == NULL)
        {
            ListNode *ret = (list1 == NULL) ? list2 :  list1;
            return ret;
        }
        ListNode* s = new ListNode;
        vector <int> array;
        while(list1)
        {
            array.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2)
        {
            array.push_back(list2->val);
            list2 = list2->next;
        }
        for(int j=0; j< array.size();j++)
        {
            for(int k=j; k<array.size();k++)
            {
                if(array[j] > array[k])
                {
                    int temp = array[j];
                    array[j] = array[k];
                    array[k] = temp;
                }
            }
        }
        ListNode* ptr = s;
        for(int j=0; j<array.size();j++)
        {
            s->val = array[j];
            s->next = new ListNode;
            // cout << s->val << " ";
            if(j == array.size()-1) s->next = NULL;
            else s = s->next;
            // cout << array[j];
        }
        s = ptr;
        // cout << s << endl;
        return s;
    }
}; 