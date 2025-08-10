/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    public:
        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
        {
            return findNeighs(preorder, inorder);
        }
    private:
        TreeNode* findNeighs(vector<int> pre, vector<int> in){
        if(pre.size() == 0 && in.size() == 0) return nullptr;
        int val = pre[0];
        vector<int> leftIn;
        vector<int> rightIn;
        vector<int> newPre1;
        vector<int> newPre2;
        bool isLeft = true;
        bool isRight = false;
        int index = 0;
    
        for(int i=0; i<in.size();i++){
            if(in[i] == val){
                isLeft = false;
                isRight = true;
                index = i;
                continue;
            }
            if(isLeft) {
                leftIn.push_back(in[i]);
            }
            if(isRight) rightIn.push_back(in[i]);  
        }
        for(int i=1; i< index +1;i++) newPre1.push_back(pre[i]);
        for(int i=index +1; i<pre.size();i++) newPre2.push_back(pre[i]);
        TreeNode*  head = new TreeNode;
        head->val = val;
        head->left = findNeighs(newPre1, leftIn);
        head->right = findNeighs(newPre2, rightIn);
        return head;
    }
};