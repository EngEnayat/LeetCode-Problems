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
        bool isSymmetric(TreeNode* root) {
            if(!root) return true;
            TreeNode* t = Mirror(root);
            return Check(root, t);
        }
    private:
        bool Check(TreeNode* h1, TreeNode *h2)
        {
            if(!h1 && !h2) return true;
            if(!h1 || !h2) return false;
            if(h1->val != h2->val) return false;
            return Check(h1->right, h2->left) && Check(h1->left, h2->right);
        }
        TreeNode* Mirror(TreeNode* root)
        {
            if(!root) return nullptr;
            TreeNode* temp = root->left;
            root->left = Mirror(root->right);
            root->right = Mirror(temp);
            return root;
        }
    };