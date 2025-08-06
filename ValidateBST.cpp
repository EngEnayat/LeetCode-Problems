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
        bool isValidBST(TreeNode* root) {
            if(!root) return true;
            if(!root->right && !root->left) return true;
            vector<int> res = InOrder(root);
            for(int i=0; i<res.size()-1;i++)
            {
                if(res[i+1] <= res[i]) return false;
            }
            return true;
        }
        vector<int> InOrder(TreeNode *root)
        {
            if(!root) return {};
            vector<int> res;
            vector<int> left = InOrder(root->left);
            res.insert(res.end(), left.begin(), left.end());
            res.push_back(root->val);
            vector<int> right = InOrder(root->right);
            res.insert(res.end(), right.begin(), right.end());
            return res;
        }
    }; 